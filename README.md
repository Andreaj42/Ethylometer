# Ethylometer
ESP32-based breathalyzer using MQ3 gas sensor for alcohol detection

## Motivation
This project aims to make breathalyzer more accessible and contribute to reducing the risk to lives caused by driving under the influence of alcohol. 
Additionally, it strives to minimize the purchase and use of disposable breathalyzers, which is better for the environment.

## Hardware Used
For this project, you will need the following components:
- ESP32
- MQ-3 gas sensor

Ensure you have these components on hand before starting the installation.

## Calibration 
It is necessary to determine the MQ-3 threshold via a calibration phase.


## Installation
To use this ethylometer, follow these installation steps:

1. Clone this repository to your computer.
```
git clone https://github.com/Andreaj42/Ethylometer.git
```
2. Open the code in the Arduino IDE.
3. Ensure you have the necessary libraries for ESP32 installed in your IDE.
4. Connect your ESP32 to your computer.
5. Upload the code to your ESP32 using the Arduino IDE.


## Usage
After uploading the code to your ESP32, you can use the ethylometer by following these steps:
1. Power on the ESP32.
2. Wait 20 seconds for the MQ-3 sensor to warm up.
3. Blow gently on the MQ-3 sensor.
4. A LED will indicate whether you are above or below the set threshold.

---
**Note:** The use of this ethylometer is intended for personal and educational purposes only. It should not be used as a medical device or for making decisions related to road safety. The accuracy of the results may vary depending on various factors, and it is recommended not to rely solely on this ethylometer to assess your fitness to drive after alcohol consumption.
