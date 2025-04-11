#include "countdown.h"
#include "FSM.h"
#include "globals.h"
#include <stdio.h>
#include <unistd.h>

void FSM(){ // Implements the finite state machine to alternate between states
    enum TimerState currentState = nextState;

    switch (currentState) {
        case WORK:
            time = 5;
            nextState = BREAK;
            timer(time);
        
        case BREAK:
            time = 3;
            pomo_round += 1;
            if (pomo_round > 4){
                nextState = END;
            }else{
                nextState = WORK;
            }
            timer(time);
        
        case END:
            break;
    }
}