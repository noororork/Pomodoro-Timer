#include "../include/countdown.h"
#include "../include/FSM.h"
#include <stdbool.h>

enum TimerState {
    WORK,
    BREAK,
    END,
};
enum TimerState nextState;
enum TimerState currentState;
int time;
int pomo_round;
bool pauseState = false;

void main(){
    enum TimerState nextState = WORK; 
    FSM();
}