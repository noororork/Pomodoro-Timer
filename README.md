# ⏱️ Pomodoro Timer (Embedded C - Raspberry Pi)

A Pomodoro Timer written in **C**, designed using a **Finite State Machine (FSM)** and developed with embedded systems principles. Currently only runs in windows terminal, but in the future will expand to Rasperry Pi with I/O.

To compile and run enter this command into the terminal:
gcc src/countdown.c src/main.c src/FSM.c -o my_pomodoro
./my_pomodoro

---

## 🚀 Features

- **Finite State Machine (FSM)** controls session flow:
  - `WORK` → `BREAK` → `WORK` ... → `END`
- Customizable session durations (currently hardcoded)
- **Pause/Play** functionality via terminal keypresses (using `termios`)
- Command-line interaction (all in terminal—perfect for embedded environments)
- Modular structure with `.h` and `.c` files for each component


## 🧠 Concepts Used

- C fundamentals (functions, enums, conditionals)
- Finite State Machines (FSM)
- Modular programming (`.h` / `.c` file organization)
- Terminal I/O with `termios.h` (for non-blocking key detection)


## 🔜 Next Steps

- Add **non-blocking input** on Linux using `termios`
- Store session progress (number of pomodoros)
- Integrate GPIO components (LEDs, buttons) via Pi
