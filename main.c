#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min = 10, max = 50;
    srand(time(NULL));
    int randomNum = (rand() % (max - min + 1)) + min;
    printf("Random Number: %d\n", randomNum);

    for(int i = 1;i > 0;i++)
    {
        int input;
        printf("enter your guess under 1 to 100\n: ");
        scanf("%d",&input);

        if(input == randomNum){
            printf("you guessed right in %d tries.\n",i);
            break;
        }
        else if(input>randomNum) {
            printf("Too high!\n");
        }
        else if(input<randomNum){
            printf("Too low!\n");
        }
    }
    return 0;
}

