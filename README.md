This project uses an **ESP8266** microcontroller with **Blynk** to control GPIO pins over WiFi.  
It allows remote control via a **mobile app** using the **Blynk cloud platform**.

## Features
- Remote GPIO control via Blynk.
- WiFi-based connectivity.
- Multiple pin control using virtual pins.

## Required Components
- **ESP8266 (NodeMCU)**
- **WiFi Connection**
- **Blynk App (iOS/Android)**

## Setup Instructions

1️⃣ Install Required Libraries**
Make sure you have installed:
- **ESP8266WiFi**
- **BlynkSimpleEsp8266**

Install via **Arduino Library Manager**:
1. Open **Arduino IDE**.
2. Go to **Sketch → Include Library → Manage Libraries**.
3. Search for **Blynk** and install it.

2️⃣ Replace Your Credentials**
Modify the following lines in **main.ino**:
#define BLYNK_AUTH_TOKEN "YOUR_BLYNK_AUTH_TOKEN"
char ssid[] = "YOUR_WIFI_SSID";
char pass[] = "YOUR_WIFI_PASSWORD";

3️⃣ Upload Code to ESP8266
Connect ESP8266 to PC.
Select the correct COM Port in Arduino IDE.
Click Upload.

4️⃣ Connect to Blynk
Open the Blynk App.
Create a new project and select ESP8266 as the device.
Copy the Auth Token and replace it in the code.
Add buttons to control V0, V1, V2, V3.

5️⃣ Run the Project
Open Serial Monitor (Baud rate: 115200).
Check if ESP8266 connects to WiFi.
Use Blynk App to control the GPIO pins.
Notes
Ensure ESP8266 is powered with at least 5V.
