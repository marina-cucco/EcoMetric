#include <ThingerESP32.h>

#define USERNAME "marinacucco"           
#define DEVICE_ID "ecometric-id"         
#define DEVICE_CREDENTIAL "ecometric-cred"  

#define SSID "seu_wifi"
#define SSID_PASSWORD "senha_wifi" 

ThingerESP32 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

int consumoDiario = 0;       
float consumoSolar = 0;      
float consumoEolica = 0;     
String ID = "GS_2024";

void setup() {  
  Serial.begin(115200);  
  thing.add_wifi(SSID, SSID_PASSWORD);
  delay(500);

  // Configuração para envio ao Thinger.io
  thing["Consumo diário em kWh"] >> outputValue(consumoDiario);
  thing["Consumo com Solar"] >> outputValue(consumoSolar);
  thing["Consumo com Eólica"] >> outputValue(consumoEolica);
  thing["ID"] >> outputValue(ID);
}

void loop() {
  // Simular consumo diário com um valor que muda a cada ciclo
  simularConsumoDiario();

  // Comunica com o Thinger.io
  thing.handle();

  // Envio de dados a cada 5 segundos para testes
   delay(5000);
}

void simularConsumoDiario(){
  consumoDiario = random(20, 100);
  
  // Calcula o consumo estimado com fontes renováveis, baseado no consumo diário
  consumoSolar = consumoDiario * 0.3;  // 30% do consumo diário para energia solar
  consumoEolica = consumoDiario * 0.2; // 20% do consumo diário para energia eólica

  // Exibe os valores no Monitor Serial para verificação
  Serial.print("Consumo diário simulado (kWh): ");
  Serial.println(consumoDiario);
  
  Serial.print("Consumo com Energia Solar (30%): ");
  Serial.println(consumoSolar);
  
  Serial.print("Consumo com Energia Eólica (20%): ");
  Serial.println(consumoEolica);
}
