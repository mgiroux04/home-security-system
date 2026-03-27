# Home Security System - TM4C123GH6PM

A simple home security system built on the TM4C123GH6PM microcontroller. Arm the system with the active button, then trigger the alarm to flash the LED.

--- 

## What It Does
- Press the **Active button (White)** to arm the system
- Press **SW1 (Blue) or SW2 (Yellow)** to trigger the alarm while armed
- An **LED ** flashes as the alarm indicator
- Releasing all buttons disarms and resets the alarm

**Demo:** 
[![Home Security System Demo](https://img.youtube.com/vi/ntCVdTkePh8/0.jpg)](https://youtube.com/shorts/ntCVdTkePh8)

---

## Hardware
| Component | Details |
|---|---|
| Microcontroller | TM4C123GH6PM (Tiva C Series) |
| Green LED | PE4 (alarm indicator) |
| Active Button | PE2 (arm/disarm) |
| Switch 1 | PE1 (trigger) |
| Switch 2 | PE0 (trigger) |
| 3 10kΩ Resistors | One for each Switch |
| 1 470Ω Resistor  | For LED | 

---

## Pin Configuration
| Pin | Direction | Role |
|---|---|---|
| PE4 | Output | Alarm LED |
| PE2 | Input | Active / Arm button |
| PE1 | Input | Switch 1 |
| PE0 | Input | Switch 0 |

---

## Project Structure
```
/src          → C source code (main logic, GPIO init, alarm control)
/hardware     → Wiring diagrams, pin mappings
README.md     → You're here
```

---

## Author
**Mike Giroux**  
[GitHub Profile](https://github.com/mgiroux04) · [LinkedIn](https://www.linkedin.com/in/mike-giroux-080a86386/) 

