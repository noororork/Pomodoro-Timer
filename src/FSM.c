#include "../include/countdown.h"
#include "../include/FSM.h"
#include "../include/globals.h"
#include <stdio.h>
#include <unistd.h>
#include <conio.h>
#include <string.h>

void FSM(){ // Implements the finite state machine to alternate between states
    enum TimerState currentState = nextState;

    switch (currentState) {
        case WORK:
            strcpy(start, "Time to start working!\n");  // Strings can only be defined once, so this string.h method allows us to redefine them            time = 5;
            time = 5;
            nextState = BREAK;
            timer(time);
            break;
        
        case BREAK:
            strcpy(start, "Time for a break!\n");
            time = 3;
            pomo_round += 1;
            if (pomo_round == 4){  // If 4 rounds are done, then we set the next state to break
                nextState = END;
            }else{
                nextState = WORK;
            }
            timer(time);
            break;

        case END:
            break;
    }
}