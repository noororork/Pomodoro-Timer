#include <stdio.h>
#include <unistd.h>
#include <conio.h>
#include "../include/globals.h"

void FSM(); // Forward declaration means that we won't fall into a circular compliation issue

void timer(int time) {  // Implements the countdown timer no matter the state
    for (int i = 0; i < time; i++){
        if (_kbhit()){
            if (_getch() == 'p'){
                pauseState = true;
            }  
        }
        if (pauseState){
            printf(">> Paused <<\n");
            while (pauseState){
                sleep(1);
                if (_getch() == 'r'){
                    pauseState = false;
                }
            }
       
        }
        printf("Time remaining: %d\n", time - i);
        sleep(1);
    }
    FSM();
}
