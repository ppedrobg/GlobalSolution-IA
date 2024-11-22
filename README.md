# GlobalSolution-IA 


_________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________

# Detalhamento e descrição da solução

Este projeto foi desenvolvido com o objetivo de criar um sistema inteligente que monitora e otimiza o consumo de energia em diferentes ambientes. Através da integração de sensores e atuadores, o sistema coleta dados ambientais, analisa-os em tempo real e propõe ajustes que podem resultar em economia energética e maior eficiência. 

# Descrição da Solução 

O sistema utiliza um microcontrolador ESP32 para integrar sensores e componentes adicionais que captam e simulam dados essenciais para análise do consumo de energia. A solução destaca o uso de três fontes principais de dados: 

Velocidade do vento: Simulada por meio de um potenciômetro conectado ao sistema. A variação no potenciômetro representa diferentes intensidades de vento. 

Temperatura ambiente: Obtida em tempo real através da API do OpenWeather, que fornece dados precisos da cidade de São Paulo. 

Nível de iluminação: Captado por meio de um sensor LDR (Light Dependent Resistor), que mede a intensidade da luz no ambiente, útil para avaliar condições de iluminação natural. 

Com base nesses dados, o sistema calcula um índice de energia transformada, que reflete o impacto das condições ambientais no consumo energético. Este índice é categorizado em níveis, sendo 1001 considerado um limite moderado. Caso o índice ultrapasse esse valor, o sistema sugere ou implementa ações para otimizar o consumo. 

# Funcionamento do Sistema 

O funcionamento do sistema é baseado na integração de sensores e componentes que monitoram em tempo real variáveis ambientais relevantes para o consumo de energia. Cada um desses elementos desempenha um papel fundamental para a coleta e análise de dados, permitindo que o sistema tome decisões informadas para otimizar a eficiência energética.

Monitoramento em Tempo Real
Velocidade do Vento (Simulada com Potenciômetro):

Um potenciômetro é utilizado para simular diferentes intensidades de vento, representando condições climáticas variáveis.
A variação no potenciômetro altera os valores de entrada, que são interpretados pelo sistema como velocidades de vento simuladas. Esses valores são usados para ajustar o funcionamento de dispositivos que dependem da ventilação ou para prever o impacto do vento na eficiência de sistemas como turbinas eólicas.
Essa abordagem permite testes controlados e demonstrações práticas, mesmo em ambientes internos ou quando não há vento real disponível.
Temperatura Ambiente (Dados da API do OpenWeather):

A integração com a API do OpenWeather permite que o sistema obtenha dados meteorológicos em tempo real da cidade de São Paulo.
Esses dados incluem a temperatura atual, que é um fator crucial para ajustar dispositivos de climatização, como aquecedores e sistemas de ar-condicionado.
A conexão constante com a API garante que os dados sejam precisos e atualizados, permitindo ao sistema reagir rapidamente a mudanças climáticas e ajustar o consumo energético conforme necessário.
Nível de Iluminação (Sensor LDR):

O sensor LDR (Light Dependent Resistor) mede a intensidade da luz ambiente no local onde o sistema está instalado.
Com base nos valores medidos, o sistema avalia se há luz natural suficiente para manter os níveis de iluminação necessários. Caso a luz natural seja suficiente, o sistema pode:
Reduzir ou desligar lâmpadas para economizar energia.
Diminuir a intensidade de luminárias que possuem controle de brilho ajustável.
Além disso, o LDR ajuda a monitorar as condições ao longo do dia, ajustando a iluminação artificial conforme a intensidade da luz natural diminui ou aumenta.
Processamento dos Dados
Após a coleta dos dados de velocidade do vento, temperatura e iluminação, o sistema realiza uma análise em tempo real para calcular um índice de energia transformada. Esse índice reflete o impacto das condições ambientais no consumo energético e é usado para determinar a necessidade de ajustes nos dispositivos conectados.

Categorização do Índice:
O índice é classificado em níveis, com 1001 sendo considerado um limite moderado.
Abaixo de 1001: O consumo é considerado eficiente, e nenhuma ação adicional é necessária.
Acima de 1001: O sistema sugere ou implementa ações corretivas, como reduzir o uso de dispositivos desnecessários ou ajustar a intensidade de iluminação ou ventilação.

# Estimativa de Consumo de Energia 
A partir dos dados coletados, o sistema calcula um índice que representa a energia transformada. Esse índice ajuda a identificar se o consumo está dentro de limites aceitáveis ou se ajustes são necessários. 

# Integração com Thinger.io 
Todos os dados coletados são enviados para uma plataforma de monitoramento online. Isso permite que os usuários acompanhem as condições ambientais e o impacto no consumo energético em tempo real, além de ajustar remotamente os parâmetros do sistema por meio de um dashboard. 

# Residências 

Nas residências, o sistema desempenha um papel crucial na redução do consumo energético ao integrar dados ambientais com a automação de dispositivos. Por exemplo: 

Climatização: O monitoramento da temperatura fornecida pela API do OpenWeather permite ajustar automaticamente equipamentos de climatização, como ar-condicionado ou aquecedores. Em dias mais frios, o sistema pode reduzir o uso de aquecedores quando detecta que a temperatura ainda está em uma faixa confortável. 

Iluminação: Com o sensor LDR, o sistema mede a intensidade da luz natural no ambiente. Se houver luz suficiente, ele pode desligar automaticamente lâmpadas ou diminuir a intensidade de luminárias com dimmers. 

Conforto Personalizado: O sistema mantém os níveis de conforto dos moradores ao mesmo tempo em que otimiza o consumo, proporcionando economia sem interferir na qualidade de vida. 

Essas automações não apenas reduzem o desperdício energético, mas também ajudam os moradores a identificar e eliminar padrões de uso ineficientes, como deixar luzes ou aparelhos ligados desnecessariamente. 

 

# Indústrias 

Em ambientes industriais, onde o consumo de energia é significativo, o sistema oferece uma solução prática e escalável para economizar recursos, como: 

Ajuste Dinâmico de Máquinas: Com base nos dados simulados da velocidade do vento e reais da temperatura, o sistema pode ajustar o uso de máquinas que possuem demandas variáveis de energia, como compressores, ventiladores industriais e sistemas de resfriamento. Isso evita picos de consumo desnecessários durante períodos de menor necessidade. 

Ventilação e Exaustão: A velocidade do vento simulada pelo potenciômetro pode ser usada para avaliar a necessidade de reforçar ou reduzir o uso de ventiladores industriais e sistemas de exaustão. Durante momentos de condições climáticas favoráveis, o sistema pode diminuir a dependência desses equipamentos, economizando energia. 

Monitoramento de Ambientes Críticos: Locais sensíveis à temperatura, como câmaras frias ou áreas de produção que exigem controle térmico, podem ter seu consumo ajustado de acordo com os dados coletados, garantindo eficiência sem comprometer a qualidade dos produtos. 

Além disso, o uso integrado com dashboards como o do Thinger.io oferece aos gestores industriais uma visão detalhada e em tempo real do consumo, permitindo decisões rápidas para reduzir desperdícios. 

 

# Cidades 

Em escala urbana, o sistema pode ser implementado em diferentes serviços públicos, otimizando o consumo de energia e reduzindo custos operacionais, como: 

Iluminação Pública: O sensor LDR mede a intensidade da luz natural, permitindo que o sistema ajuste automaticamente a iluminação pública. Em dias claros ou durante o amanhecer e entardecer, as luzes podem ser reduzidas ou desligadas, economizando energia sem comprometer a segurança dos cidadãos. 

Climatização de Prédios Públicos: Dados de temperatura e vento podem ser usados para ajustar os sistemas de aquecimento, ventilação e ar-condicionado (HVAC) em prédios administrativos, escolas e hospitais. Isso evita desperdícios em horários de menor ocupação ou durante condições climáticas favoráveis. 

Energia Renovável: A integração com sensores simulados e reais também ajuda a identificar o potencial de geração de energia renovável, como eólica e solar. Com base nos dados do sistema, cidades podem planejar o uso de fontes alternativas de energia em períodos de alta demanda. 

Essas aplicações não apenas otimizam o uso da energia, mas também contribuem para a sustentabilidade ambiental, ajudando as cidades a reduzirem sua pegada de carbono e alcançarem metas de eficiência energética. Além disso, o sistema fornece uma base para políticas públicas mais inteligentes e baseadas em dados reais. 

# Visão de Futuro 

A solução pode ser ampliada e aprimorada, incorporando tecnologias adicionais, como: 

Machine Learning: Para prever padrões de consumo e otimizar ações preventivas. 

Integração com Fontes Renováveis: Usar energia solar ou eólica para aproveitar os dados monitorados. 

Sensores Adicionais: Expandir o monitoramento para incluir umidade e pressão atmosférica, aumentando a precisão das análises. 

 














_________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________
# Passo a Passo para replicar e testar a solução


# 1 - Primeiro passo / ultimo passo
# Inicie o wokwi em seu navegador e adicione o codigo na tela princinal, para testar a sua funcionalidade clique no botão verde, assim irá começar a se conectar com o wifi e depois de conectado a aplicação mostra a temperatura ambiente em tempo real, o potênciometro serve para simular a velocidade do vento onde movendo o ponteniro o resultado mudará e o  LDR (Light Dependent Resistor) serve como um sensor de luz. (Inicie a aplicação após seguir os passos a seguir)


![Captura de tela 2024-11-20 155052](https://github.com/user-attachments/assets/641665f8-795b-42ae-87ce-6e689aa52b30)



# 2 - No segundo passo, isso antes de iniciar a aplicação adicione no diagram. Json, o json que seria para que o circuito já fosse montado economizando tempo e trabalho 


![Captura de tela 2024-11-20 155115](https://github.com/user-attachments/assets/5cafcc67-b696-40ae-bf55-e9d855176e13)



# 3 - Seguindo o terceiro passo, aqui mostra as libraries que estão sendo usadas, sempre bom verificar para que não ocorra nenhum erro 


![Captura de tela 2024-11-20 155129](https://github.com/user-attachments/assets/bb706638-1189-4ca2-b428-6346b8560f50)



# 4 - No quarto passo é onde iremos adicionar na biblioteca o que vamos precisar, no botão azul, assim que clicar procure por thinger.io e Arduino_ Json, são essenciais para que a aplicação funcione pois com o thinger.io que iremos conectar e mostrar nossos resultados de uma forma visual mais eficiente  


![Captura de tela 2024-11-20 155144](https://github.com/user-attachments/assets/eed71459-8ef6-40c4-beed-8ae99bf9bcde)



# 5 - Já no quinto passo, aqui é onde criamos o nosso device (credenciais adicionadas no código) é onde fica conectado para ter a comunicação http e assim a criação também dos dashboards 


![GLOBAL04](https://github.com/user-attachments/assets/65e20d21-441a-476e-a458-230b37a4cd9a)



# 6 - No sexto passo seria verificar se o device está conectado com a aplicação 


![GLOBAL01](https://github.com/user-attachments/assets/98324e86-4fc8-4975-a86c-8efefa116422)



# 7 - No sétimo passo é onde foi criado o dashboard de nossa aplicação onde mostra os resultados de uma maneira mais ilustrada 


![GLOBAL03](https://github.com/user-attachments/assets/534abee9-4da2-403e-bb7c-fab923a3f1ac)




# 8 - Agora no oitavo e último passo seria o resultado caso todas as etapas fossem seguidas corretamente, irá mostrar os resultados em tempo real, após iniciar a aplicação mencionada no primeiro passo 


![Captura de tela 2024-11-20 154658](https://github.com/user-attachments/assets/e1442d6b-e522-4e52-af79-8d360101a925)








