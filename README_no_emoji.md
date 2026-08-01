# Non-Invasive Optical Glucose Estimation Prototype

## Project Summary
This project aims to develop a **non-invasive, optics-based prototype for glucose level estimation**, using dual-wavelength LED illumination (660 nm red and 940 nm infrared) combined with a photodiode-based sensing stage. The system measures how light is attenuated as it passes through biological tissue, with the long-term goal of correlating optical signal features with blood glucose concentration.

**Team:** Mariam Noureddine, Eliz Atay

## Goals
- Design and validate a dual-wavelength optical sensing hardware platform (LED drivers, photodiode, transimpedance amplifier, Arduino-based acquisition).
- Achieve stable, low-noise optical signal acquisition from red (660 nm) and infrared (940 nm) channels.
- Develop a digital signal processing pipeline to extract meaningful features from the optical signals.
- Calibrate the system against a commercial glucometer as reference.
- Build a machine learning model to estimate glucose levels from optical features and validate its prediction accuracy.

## Current Status
**Subsystem-level hardware verification completed**, including:
- External power supply, AMS1117-3.3V regulator, Arduino Uno
- MOSFET driver circuits for both LEDs
- 660 nm and 940 nm LED operation
- BPW34 photodiode + OPA4374A transimpedance amplifier sensing stage
- Confirmed wavelength-selective optical detection and response to finger placement

**In progress / next steps:**
- Improving optical alignment and shielding against ambient light noise
- Tuning transimpedance amplifier feedback resistor/capacitor values
- Evaluating single vs. dual-photodiode configuration
- Recording stable finger-based optical measurements
- Moving toward signal filtering, feature extraction, and glucose calibration experiments

## Hardware Overview
| Component | Role |
|---|---|
| Arduino Uno | Signal generation & data acquisition |
| IRL540N MOSFETs | LED driver switching |
| 660 nm / 940 nm LEDs | Optical emitters |
| BPW34 Photodiode | Optical sensing |
| OPA4374A + TIA (220 kΩ / 33 pF) | Signal amplification |
| AMS1117-3.3V | Analog circuitry regulation |

## Repository Structure
> _Update this section to match your actual folder layout, e.g.:_
```
/hardware      - KiCad schematics and PCB files
/firmware      - Arduino source code
/docs          - Weekly progress reports and documentation
/analysis      - Signal processing and data analysis scripts
```

## Documentation
Weekly progress reports documenting hardware verification, measurements, and development milestones are available in the `/docs` folder.

## Future Work
Digital filtering, feature extraction, glucometer-based calibration, dataset collection, ML model development, prediction accuracy validation.
