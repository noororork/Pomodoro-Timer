#include <stdio.h>
#include <unistd.h>
void FSM(); // Forward declaration means that we won't fall into a circular compliation issue

void timer(int time) {  // Implements the countdown timer no matter the state
    for (int i = 0; i < time; i++){
        printf("Time remaining: %d\n", time - i);
        sleep(1);
    }
    FSM();
}
