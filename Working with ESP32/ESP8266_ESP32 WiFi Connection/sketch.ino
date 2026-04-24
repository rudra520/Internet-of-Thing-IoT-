#if defined(ESP8266)
#include <ESP8266WiFi.h>
#elif defined(ESP32)
#include <WiFi.h>
#endif
#include <HTTPClient.h>

#define WIFI_SSID           "Wokwi-GUEST"
#define WIFI_PASSWORD       ""

#define SERIAL_DEBUG_BAUD   115200

#define LED 15
// the Wifi radio's status
int status = WL_IDLE_STATUS;

void AddSerenBox() {
  Serial.begin(9600);

  // Replace with your server's URL and endpoint path
  String serverName = "https://serena-backend-2g6tjw7nja-et.a.run.app/serenplace";

  // Create an HTTPClient object
  HTTPClient http;
  WiFiClient client;

  // Prepare the JSON data to GET
  String jsonData = "{\r\n  \"credentials\": \"00:0a:95:9d:68:16\",\r\n  \"ip_address\": \"192.0.31.34\"\r\n}";

  http.begin(client, serverName);
  // Set the HTTP headers
  http.addHeader("Content-Type", "application/json");

  // Make the GET request
  int httpCode = http.GET();

  // Check the response code
  if (httpCode > 0) {
    Serial.print("HTTP GET request sent to: ");
    Serial.println(serverName);
    Serial.print("Response code: ");
    Serial.println(httpCode);
    Serial.println("Response:");

    // Get the response body
    String responseBody = http.getString();
    Serial.println(responseBody);
  } else {
    Serial.print("HTTP GET request failed. Code: ");
    Serial.println(httpCode);
  }

  // Close the HTTP client
  http.end();
}

void InitWiFi()
{
  Serial.println("Connecting to AP ...");

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {

    delay(500);
    Serial.print(".");
  }
  Serial.print("");
  Serial.println("Connected to AP");
}

void reconnect() {
  status = WiFi.status();
  if ( status != WL_CONNECTED) {
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
    }
    Serial.print(".");
    Serial.println("Connected to AP");
  }
}

void setup() {
  // initialize serial for debugging
  Serial.begin(SERIAL_DEBUG_BAUD);
  Serial.println();
  InitWiFi();
  AddSerenBox();
  pinMode(LED, OUTPUT);
}

void loop() {
  delay(1000);

  if (WiFi.status() != WL_CONNECTED) {
    reconnect();
  }
  else {
    Serial.print("WiFi sudah terkoneksi dengan ");
    Serial.println(WIFI_SSID);
    Serial.print("IP: ");
    Serial.println(WiFi.localIP());
    Serial.println(WiFi.macAddress());
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
  }
}