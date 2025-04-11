#include "countdown.h"
#include "FSM.h"
enum TimerState {
    WORK,
    BREAK,
    END
};
enum TimerState nextState;
enum TimerState currentState;
int time;
int pomo_round;

void main(){
    enum TimerState nextState = WORK; 
    FSM();
}