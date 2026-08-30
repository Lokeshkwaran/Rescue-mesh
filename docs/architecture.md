# Rescue-Mesh System Architecture

## Workflow

1. Smart sensor nodes are deployed in the disaster area.
2. Each node monitors acoustic and vibration signals.
3. The ESP32 processes sensor data locally.
4. A possible survivor signal is detected.
5. GPS location data is collected.
6. Emergency information is transmitted using LoRa.
7. Data is relayed through the Rescue-Mesh network.
8. The command dashboard receives the survivor alert.
9. Rescue teams receive the location and priority information.

## System Components

### Sensor Node
Collects microphone and vibration sensor data.

### Edge Processing
Processes sensor signals and filters environmental noise.

### GPS Module
Provides the location of the sensor node.

### LoRa Communication
Transmits emergency alerts over long distances.

### Mesh Network
Allows multiple nodes to relay information across the disaster area.

### Command Dashboard
Displays survivor locations and emergency alerts for rescue teams.
