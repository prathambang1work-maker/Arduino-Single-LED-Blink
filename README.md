# Arduino Single LED Blink

## 📌 Overview

This project demonstrates how to blink a single LED using an Arduino board. It is one of the most basic and essential beginner projects in embedded systems.

---

## 🚀 What I Learned

* Basics of Arduino programming
* Using digital output pins
* Understanding `setup()` and `loop()` functions
* Controlling hardware with simple code

---

## 🛠️ Components Used

* Arduino Board (Uno / Nano / etc.)
* 1 LED
* 1 Resistor (220Ω recommended)
* Breadboard
* Jumper wires

---

## ⚙️ Circuit Connection

* LED positive (long leg) → Pin 13
* LED negative (short leg) → GND (through resistor)

---

## 💻 Code

```cpp id="3y0xg2"
const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
```

---

## 📷 Output

(Add your project image here)

---

## 📈 Future Improvements

* Change blinking speed
* Use button to control LED
* Add multiple LEDs
* Implement PWM for brightness control

---

## 📚 Author

**Pratham Bang**
Electrical & Computer Engineering

---

## ⭐ Note

This project is part of my Arduino and embedded systems learning journey. More projects will be added regularly.
