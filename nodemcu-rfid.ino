#define SS_PIN D2
#define RST_PIN D1

#include <SPI.h>
#include <MFRC522.h>

#include <ESP8266WiFi.h>
#include <PubSubClient.h>

const char* ssid = "twguest";
const char* password = "evolve which fir titan assam";

WiFiClient espClient;
PubSubClient client(espClient);

MFRC522 mfrc522(SS_PIN, RST_PIN);
int statuss = 0;
int out = 0;

void setup()
{
  Serial.begin(9600);
  setup_wifi();

  SPI.begin();
  mfrc522.PCD_Init();
}
void loop()
{

  if (!mfrc522.PICC_IsNewCardPresent()) {
    return;
  }

  if (!mfrc522.PICC_ReadCardSerial()) {
    return;
  }
  //Show UID on serial monitor
  Serial.println();
  Serial.print(" UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  content.toUpperCase();

  Serial.println();
  if (content.substring(1) == "02 29 85 59") {
    Serial.println(" Access Granted ");
    Serial.println(" Welcome Mr.Circuit ");
    delay(1000);
    Serial.println(" Have FUN ");
    Serial.println();
    statuss = 1;
  } else   {
    Serial.println(" Access Denied ");
    delay(3000);
  }
}


//Método de conexão com rede WIFI
void setup_wifi() {
  delay(10);
  Serial.println();
  Serial.print("Conectando");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi conectado");
  Serial.println("Endereco IP : ");
  Serial.println(WiFi.localIP());
}
