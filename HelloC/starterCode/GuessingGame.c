/**
 * Guessing Game Code Along
 * 
 * This code along implements a small guessing game in C.
 * The player has to guess a number between 1 and 100.
 * it provides feedback on whether the guess is too high or too low.
 * The game continues until the player guesses the correct number.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generation

//random number get it
int getRandomNumber(int min, int max){
    return (rand()%(max-min+1))+min;

}
//getInput from client
int getInput(){
    int input=0;
    scanf("%d", &input); //not safe, fix in future//
    return input;


}
// need loop that gives feedback, high, low or correct
/// we need loop to start the gym or play again
int runGame(int randomNumber){
    int guess=0;
    int attempts=0;

    while(guess!=randomNumber){
        printf("Enter your guess (1-100): ");
        guess=getInput();
        attempts++;

        if(guess < randomNumber){
            printf("Too Low! Try again.\n");
        }else if(guess > randomNumber){
            printf("Too High! Try again.\n");
        }else{
            printf("Congratulations! You guessed the number %d in %d attempts.\n", randomNumber, attempts);

        }
    }

    return attempts;
}

void start(){
    printf("Welcome to the Guessing Game!\n");
    int choice=0;

    while(choice != 2){
        printf("1. Play Game\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        choice = getInput();

        if(choice==1){
            int randomNumber=getRandomNumber(1,100);
            printf("Starting the game...\n");
            runGame(randomNumber);
        }else if(choice==2){
            printf("Thank you for playing. ");
        }else{
            printf("Invalid choice. Please try again.\n");
        }

    }

}





int main() {
    srand(time(NULL)); // Seed the random number generator
            /////getRandomNumber////
    // printf("Random Number: %d ",getRandomNumber(0,10));
    // printf("Random Number: %d ",getRandomNumber(0,10));
    // printf("Random Number: %d\n ",getRandomNumber(0,10));
            ////gettting input
    // printf("enter in a value: ");
    // int input=getInput();
    // printf("the value you entered: %d\n", input);
    // runGame(10);
    start();
    return 0;
}