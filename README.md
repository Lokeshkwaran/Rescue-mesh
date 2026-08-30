# 🚨 Rescue-Mesh

## Autonomous Survivor Detection & Communication Network

Rescue-Mesh is a disaster response system designed to help rescue teams locate trapped survivors and maintain emergency communication when normal infrastructure has failed.

## 🚨 Problem

Natural disasters can destroy cellular towers, power grids, and communication networks. Rescue teams may have difficulty communicating and locating trapped survivors under debris.

## 💡 Our Solution

Rescue-Mesh deploys smart sensor nodes in disaster-hit environments.

The sensor nodes:

- 🎤 Monitor acoustic signals
- 📳 Detect vibration and movement
- 📍 Collect GPS information
- 📡 Send emergency data using LoRa
- 🔗 Form a self-healing communication network
- 🗺️ Send alerts to an emergency command dashboard

## ⚙️ Technology Stack

### Hardware

- ESP32-S3
- SX1262 LoRa Module
- INMP441 Microphone
- SW-420 Vibration Sensor
- MPU6050
- GPS Module
- 18650 Li-ion Battery
- TP4056 Charger

### Software

- Arduino / MicroPython
- Signal Processing
- ML-based Survivor Detection
- Mobile Application
- Emergency Command Dashboard

## 📁 Project Structure

```text
Rescue-mesh/
│
├── firmware/
│   ├── sensor_node.ino
│   ├── lora_communication.ino
│   ├── gps_tracking.ino
│   └── survivor_detection.ino
│
├── dashboard/
├── mobile-app/
│
├── docs/
│   ├── project-overview.md
│   └── architecture.md
│
└── presentation/

🔄 System Workflow

Sensor Detection → Edge Processing → GPS Location → LoRa Communication → Mesh Network → Command Dashboard → Rescue Team

👥 Team Members

- K LOKESHWARAN
- M SHAMVAS RAJA
- S PRIYA DHARSHAN
- M NITHISH KUMAR
- N S GEETHALAXMI

🏆 Hackathon

Built for **Build With Bharat 2.0 – National Level Hackathon**.
