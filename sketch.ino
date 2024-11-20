#include <ThingerESP32.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include <Arduino_JSON.h>


#define USERNAME "ppedrobg"           
#define DEVICE_ID "ESP32GLOBAL"       
#define DEVICE_CREDENTIAL "FIAP2024" 


#define SSID "Wokwi-GUEST"
#define SSID_PASSWORD ""


String apiKey = "ca391d0c1dfdf12e6fb634b529d5ac13";


ThingerESP32 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);


unsigned long lastTime = 0;
unsigned long timerDelay = 10000;


String jsonBuffer;


double temperaturaCelsius = 0.0;
double velocidadeVento = 0.0;
int luzAmbiente = 0;


const int potPin = 35; 
const int ldrPin = 34; 

void setup() {
  Serial.begin(115200);

  
  Serial.print("Conectando-se ao Wi-Fi");
  WiFi.begin(SSID, SSID_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(100);
    Serial.print(".");
  }
  Serial.println(" Conectado!");

  thing.add_wifi(SSID, SSID_PASSWORD);
  Serial.println("Conexão com o Thinger.io configurada!");

  
  thing["temperatura"] >> [](pson &out) {
    out = temperaturaCelsius;
  };

  
  thing["vento"] >> [](pson &out) {
    out = velocidadeVento;
  };

  
  thing["luzAmbiente"] >> [](pson &out) {
    out = luzAmbiente;
  };

  Serial.println("Timer programado para 10 segundos. Aguarde esse tempo para a leitura...");
}

void loop() {
  
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("WiFi desconectado. Tentando reconectar...");
    WiFi.begin(SSID, SSID_PASSWORD);
    delay(2000);
    return;
  }

  
  luzAmbiente = analogRead(ldrPin); 
  int potValue = analogRead(potPin); 
  velocidadeVento = map(potValue, 0, 4095, 0, 30); 

  Serial.print("Luz Ambiente (LDR): ");
  Serial.println(luzAmbiente);
  Serial.print("Velocidade do Vento (Pot): ");
  Serial.print(velocidadeVento);
  Serial.println(" m/s");
  Serial.print("Temperatura da API: ");
        Serial.print(temperaturaCelsius);
        Serial.println(" °C"); 

  
  if ((millis() - lastTime) > timerDelay) {
    String serverPath = "http://api.openweathermap.org/data/2.5/weather?q=Sao+Paulo,BR&appid=" + apiKey;
    jsonBuffer = httpGETRequest(serverPath.c_str());
    JSONVar myObject = JSON.parse(jsonBuffer);

    if (JSON.typeof(myObject) == "undefined") {
      Serial.println("Falha no formato dos dados!");
    } else {
      // Temperatura
      if (JSON.typeof(myObject["main"]["temp"]) != "undefined") {
        temperaturaCelsius = (double)myObject["main"]["temp"] - 273.15;
      } else {
        Serial.println("Erro: Campo 'main.temp' ausente no JSON.");
      }
    }
    lastTime = millis();
  }

  
  thing.handle(); 
}

String httpGETRequest(const char *serverName) {
  WiFiClient client;
  HTTPClient http;

 
  http.begin(client, serverName);

  
  int httpResponseCode = http.GET();

  String payload = "{}";

  if (httpResponseCode > 0) {
    Serial.print("HTTP Response code: ");
    Serial.println(httpResponseCode);
    payload = http.getString();
  } else {
    Serial.print("Código de erro: ");
    Serial.println(httpResponseCode);
  }

  http.end();
  return payload;
}
