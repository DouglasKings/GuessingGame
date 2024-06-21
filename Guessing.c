#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int Min = 1, Max = 100;
    int Answer, Guess, Guesses = 0;

    //Uses the current time as a seed
    srand(time(0));

    //generate arandom number between Min and Max
    Answer = (rand() % Max) + Min;

    do{
        printf("Enter a number between 1 and 100: ");
        scanf("%d", &Guess);
        Guesses ++;// Increment the number of guesses after each attempt
        if(Guess > Answer){
            printf("Too high, try again!\n");
        }
        else if(Guess < Answer){
            printf("Too low, try again!\n");
        }else{
            printf("Congratulations! You won!\n");
            break;// Exit the loop if the guess is correct
        }

        // Check if the maximum number of guesses has been reached
        if(Guesses > 6){
            printf("You ran out of guesses. \n");
            break;// Exit the loop if the maximum number of guesses is reached
        }
        

    } while(Guess != Answer || Guesses < 6);

    printf("Answer: %d\n", Answer);
    printf("Guesses: %d\n", Guesses);


    return 0;
}