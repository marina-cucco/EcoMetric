#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "Wokwi-GUEST";  
const char* password = "";          
const char* serverName = "url do ngrok";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Conectando ao WiFi...");
  }
  Serial.println("Conectado ao WiFi!");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin(serverName);  

    http.addHeader("Content-Type", "application/x-www-form-urlencoded");

    float consumo = random(100, 500) / 10.0;
    String postData = "consumo=" + String(consumo);

    int httpResponseCode = http.POST(postData);

    if (httpResponseCode > 0) {
      String response = http.getString();
      Serial.print("Código HTTP: ");
      Serial.println(httpResponseCode);
      Serial.print("Resposta: ");
      Serial.println(response);
    } else {
      Serial.print("Erro ao enviar POST: ");
      Serial.println(httpResponseCode);
    }

    http.end();
  }

  delay(1000);  
}
