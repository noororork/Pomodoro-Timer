#include "countdown.h"
#include "FSM.h"
#include <stdio.h>
#include <unistd.h>

int time;

int FSM(){
    enum TimerState nextState = currentState;

    switch (nextState) {
        case WORK:
            time = 25;
        
        case BREAK:
            time = 5;

    }
}