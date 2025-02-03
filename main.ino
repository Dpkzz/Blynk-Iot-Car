#define D0 16  // Define D0 as GPIO 16
#define D1 5   // Define D1 as GPIO 5
#define D2 4   // Define D2 as GPIO 4
#define D3 0   // Define D3 as GPIO 0

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Replace with your Blynk authentication token
#define BLYNK_AUTH_TOKEN "YOUR_BLYNK_AUTH_TOKEN"

// Replace with your WiFi credentials
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "YOUR_WIFI_SSID";
char pass[] = "YOUR_WIFI_PASSWORD";

// Get the button value from Blynk
BLYNK_WRITE(V0) {
    digitalWrite(D1, param.asInt());
    digitalWrite(D3, param.asInt());
}

BLYNK_WRITE(V1) {
    digitalWrite(D1, param.asInt());
}

BLYNK_WRITE(V2) {
    digitalWrite(D3, param.asInt());
}

BLYNK_WRITE(V3) {
    digitalWrite(D0, param.asInt());
    digitalWrite(D2, param.asInt());
}

void setup() {
    Serial.begin(115200);

    // Set GPIO pins as output
    pinMode(D0, OUTPUT);
    pinMode(D1, OUTPUT);
    pinMode(D2, OUTPUT);
    pinMode(D3, OUTPUT);

    // Initialize the Blynk connection
    Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
    // Run the Blynk library
    Blynk.run();
}

