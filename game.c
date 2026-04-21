#include <stdio.h>   // for input/output functions like printf, scanf
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time() to generate random seed

int main() {
    int min = 10, max = 100;  // range of random number

    srand(time(NULL));  // seed the random number generator

    // generate random number between min and max
    int randomNum = (rand() % (max - min + 1)) + min;

    // infinite loop until correct guess
    for (int i = 1; i > 0; i++) {
        int input;

        printf("Enter your guess (1 to 100): ");
        scanf("%d", &input);

        if (input == randomNum) {
            printf("You guessed right in %d tries.\n", i);
            break;  // exit loop when correct
        }
        else if (input > randomNum) {
            printf("Too high!\n");
        }
        else {
            printf("Too low!\n");
        }
    }

    return 0;  // program ends successfully
}
