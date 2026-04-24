# 🌐 Internet of Things (IoT) with Arduino & ESP32

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://arduino.cc)
[![ESP32](https://img.shields.io/badge/ESP32-E7352C?style=for-the-badge&logo=espressif&logoColor=white)](https://espressif.com)
[![Wokwi](https://img.shields.io/badge/Wokwi-Simulator-00C7B7?style=for-the-badge&logo=wokwi)](https://wokwi.com)
[![GitHub last commit](https://img.shields.io/github/last-commit/rudra520/Internet-of-Thing-IoT)](https://github.com/rudra520/Internet-of-Thing-IoT)
[![GitHub commit activity](https://img.shields.io/github/commit-activity/m/rudra520/Internet-of-Thing-IoT)](https://github.com/rudra520/Internet-of-Thing-IoT)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

## 📖 About This Repository

> **A practical, hands-on collection of IoT projects** using Arduino Uno, ESP32, and ESP8266.  
> Each sub‑folder contains working code and wiring diagrams to help you learn sensor interfacing, actuator control, display integration, and wireless communication.

This repo is designed for:
- 🧑‍🎓 **Students** learning IoT and embedded systems
- 🔧 **Hobbyists** looking for ready‑to‑use sensor examples
- 🤖 **Makers** who want to simulate projects in Wokwi before real hardware

All projects are tested on real hardware and also run in the **Wokwi online simulator** – no physical board required to get started.

## 📂 Repository Structure (Full Tree)
```
Internet-of-Thing-IoT/
├── main/
│ └── Working with Arduino/
│ ├── Arduino with DHT22/ # Temp & humidity logging
│ ├── Arduino with LED/ # Basic digital output / blink
│ ├── Working with ESP32/ # Getting started: setup, blink, serial
│ ├── ESP32 with DHT22 and OLED/ # Live sensor data on SSD1306 display
│ ├── ESP32 with Servo/ # Servo motor angle control
│ ├── ESP32 with Ultrasonic/ # HC-SR04 distance measurement
│ ├── ESP8266_ESP32 WiFi Connection/ # Connect to WiFi, print IP, HTTP requests
│ ├── diagram.json # Wokwi circuit diagram (main demo)
│ ├── libraries.txt # List of required Arduino libraries
│ ├── sketch.ino # Main Arduino sketch (combined demo)
│ ├── wokwi-project.txt # Wokwi project metadata
│ └── README.md # (this file at root, but also per-folder)
└── README.md (repo root)
```

> 💡 *Note:* The `main/` folder contains all working examples. The root `README.md` (this file) gives an overview, while each project folder may have its own detailed instructions.

## 📊 Repository Insights

| Metric                | Value                                     |
|-----------------------|-------------------------------------------|                 
| **Languages used**    | C++ (Arduino), JSON (Wokwi  diagrams)     |
| **Simulation ready**  | ✅ Yes – full Wokwi support               |
| **Hardware required** | Optional (works 100% in simulator)        |

*Total commits count is based on the current branch history. Keep contributing to grow it!*

## 🚀 Getting Started

### Hardware (optional – can use Wokwi simulator)
- Arduino Uno / ESP32 / ESP8266 board
- DHT22 (temperature & humidity)
- LED + 220Ω resistor
- HC‑SR04 ultrasonic sensor
- Servo motor (SG90 / MG995)
- SSD1306 OLED display (I2C, 128x64)
- Jumper wires & breadboard

### Software
- [Arduino IDE](https://arduino.cc/en/software) 2.x or 1.8.x
- [Wokwi Web Simulator](https://wokwi.com) – run everything in your browser

### Install Required Libraries
Open Arduino IDE → **Sketch** → **Include Library** → **Manage Libraries**  
Install these libraries (use `libraries.txt` for quick reference):

```bash
DHT sensor library by Adafruit (v1.4.6+)
Adafruit Unified Sensor (v1.1.9+)
Adafruit SSD1306 (v2.5.7+)
ESP32Servo (v0.13.0+)
NewPing (v1.9.1+)
