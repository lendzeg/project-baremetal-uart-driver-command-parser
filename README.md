# 🛠️ Bare-Metal UART Command Parser (STM32F103C8T6)
![Project Status](https://img.shields.io/badge/status-in--progress-yellow)


This project is a bare-metal implementation of a UART communication driver with a simple command parser, written entirely in C without any external libraries (no HAL, CMSIS, or LL). It is built for the STM32F103C8T6 microcontroller and targets the Blue Pill Development Board.  

---

## 📌 Project Overview

- ✅ **Platform**: STM32F103C8T6 (Blue Pill, ARM Cortex-M3)
- ✅ **Language**: C (bare-metal, no OS)
- ✅ **Toolchain**: GNU Arm Embedded Toolchain (`arm-none-eabi`)
- ✅ **UART Interface**: USART1 (PA9 - TX, PA10 - RX)
- ✅ **Baud Rate**: 9600 bps
- ✅ **Parser Input**: Terminal (e.g. PuTTY, minicom, Tera Term)


---