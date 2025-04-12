#ifndef GLOBALS_H
#define GLOBALS_H
#include <stdbool.h>
// This file declares all my variables so they can be used gloablly. Must extern them here and declare them in main

enum TimerState {
    WORK,
    BREAK,
    END,
};
extern enum TimerState nextState;
extern enum TimerState currentState;
extern int time;
extern int pomo_round;
extern bool pauseState;

#endif