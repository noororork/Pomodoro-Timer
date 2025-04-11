#include <stdio.h>
#include <unistd.h>

int main() {
    int work = 10;
    int rest = 5;
    for (int cycle = 1; cycle <= 4; cycle++){
        for (int i = 0; i < work; i++){
            printf("Time remaining: %d\n", work - i);
            sleep(1);
        }
        printf("Time's up! Time for a break!\n");
        for (int i = 0; i < rest; i++){
            printf("Time remaining: %d\n", rest - i);
            sleep(1);
        }
        printf("Break time's up! Back to work!\n");
    }
    printf("All done!");
}