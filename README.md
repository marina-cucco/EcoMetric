Documentação do Projeto: EcoMetric
1. Introdução
O EcoMetric é um projeto fictício desenvolvido para monitorar o consumo energético de pequenas e médias empresas, com foco em eficiência e sustentabilidade. A ideia é oferecer uma solução baseada em Internet das Coisas (IoT) que registre e analise o consumo de energia elétrica, fornecendo insights sobre como reduzir esse consumo por meio de energias renováveis, como solar e eólica. A ferramenta visa contribuir para a adoção de práticas ESG (ambientais, sociais e de governança) pelas empresas.

O sistema usa o microcontrolador ESP32 para monitorar o consumo de energia em tempo real e envia os dados para a plataforma Thinger.io, onde são exibidos em um dashboard personalizado. A aplicação foi programada na Arduino IDE e utiliza um código que simula o consumo de energia e calcula projeções de economia com fontes renováveis.

2. Objetivo do Projeto
O principal objetivo do EcoMetric é fornecer uma solução prática para monitoramento e otimização de consumo energético nas empresas. O sistema permite que as empresas:

Visualizem seu consumo de energia em tempo real.
Recebam estimativas de consumo usando energias renováveis, como solar e eólica.
Avaliem possíveis reduções de consumo e os impactos financeiros e ambientais.
Implementem práticas de economia e sustentabilidade energética.
3. Componentes Utilizados
ESP32: Um microcontrolador com conectividade WiFi utilizado para captar dados simulados de consumo energético e enviar para a plataforma Thinger.io.
Thinger.io: Plataforma de IoT usada para coletar, armazenar e visualizar os dados de consumo energético em tempo real, além de projetar cenários de economia com fontes renováveis.
Arduino IDE: Ambiente de desenvolvimento onde o código foi escrito, compilado e carregado no ESP32 para simular o consumo de energia e os dados de energias renováveis.
Dashboard de Thinger.io: Interface personalizada para visualização dos dados, com gráficos e indicadores de consumo, comparações entre consumo atual e consumo renovável, e widgets adicionais para contexto.
4. Arquitetura do Sistema
4.1 Fluxo de Dados
Captura de Dados: O ESP32 gera dados simulados de consumo energético diário, expressos em kWh, com valores variáveis entre 20 e 100 kWh.
Cálculo de Consumo Renovável: O código calcula a projeção de consumo com energias renováveis, e pode ser replicado e alterado de acordo com a localizaçã geográfica, disponibilidade de recursos renováveis da região, etc.
O cálculo aqui apresentado é uma demonstração.
Energia Solar: Representa uma economia de 30% do consumo atual.
Energia Eólica: Representa uma economia de 20% do consumo atual.
Envio de Dados ao Thinger.io: O ESP32 envia os dados simulados e as projeções para a plataforma Thinger.io a cada 5 segundos (para fins de teste e visualização rápida).
Visualização no Dashboard: Os dados são exibidos em um dashboard no Thinger.io, com gráficos e indicadores de consumo para o consumo atual e as projeções de energias renováveis.
4.2 Estrutura do Código
O código foi implementado na Arduino IDE e consiste em:

Configurações de rede e do dispositivo: Configurações para conectar o ESP32 ao WiFi e à conta do Thinger.io.
Geração de dados: Função que gera o consumo diário aleatório e calcula o consumo com energias renováveis.
Envio de dados: Envio dos dados para o Thinger.io e visualização no Monitor Serial para depuração.
5. Configuração do Dashboard no Thinger.io
Widgets Utilizados
Gauge: Exibe o consumo diário em kWh.
Time Series Chart: Mostra o consumo acumulado mensal, incluindo o consumo atual e as projeções para energias renováveis.
Progressbar: Exibe os valores de consumo diário e as projeções para energia solar e eólica.
Text/Value: Explicação dos cálculos e interpretação dos gráficos.
Interpretação dos Dados
Consumo Diário: Indica o consumo simulado de energia em kWh, que representa o uso convencional.
Consumo com Energias Renováveis: Os gráficos de energias solar e eólica mostram a projeção de economia que poderia ser alcançada com a adoção de fontes renováveis.
Comparação Visual: O dashboard permite comparar facilmente o consumo atual com os consumos estimados para energias renováveis, ajudando na análise de economia potencial.
6. Conclusão e Próximos Passos
O EcoMetric oferece uma solução prática e visual para monitoramento e análise de consumo de energia em tempo real, promovendo a eficiência energética e incentivando o uso de energias renováveis. A partir deste protótipo, os próximos passos podem incluir:

Integração com Sensores Reais: Substituir os dados simulados por dados reais de sensores de consumo de energia.
Otimização do Dashboard: Adicionar visualizações adicionais para uma análise mais aprofundada e relatórios de economia.
Alertas e Recomendações: Implementar notificações para alertar sobre picos de consumo e fornecer sugestões de economia de energia.
