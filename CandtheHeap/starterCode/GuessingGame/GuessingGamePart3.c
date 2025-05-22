/**
 * Starter code for the Guessing Game Part 3 code along
 * 
 * This code is mostly the same for Guessing Game Part 2
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h> // for random number generation
#include <string.h>

#include "GuessingGame.h"


int getRandomNumber(int min, int max) {
    // Generate a random number between min and max
    return (rand() % (max - min + 1)) + min;
}

GameState *initializeGameState(int maxAttempts, int playerType, int min, int max) {
    GameState *gameState = (GameState *)malloc(sizeof(GameState));
    gameState->guesses = (int *)malloc(sizeof(int) * maxAttempts);
    gameState->attempts = 0;
    gameState->maxAttempts = maxAttempts;
    gameState->playerType = playerType;
    gameState->min = min;
    gameState->max = max;

    return gameState;
}

void freeGameState(GameState *gameState) {
  free(gameState->guesses);
  free(gameState);
}

int getInput() {
    char buffer[20];
    int input = 0;
    scanf("%s", buffer); 
    input=atoi(buffer);   ///safer way to read input//
    return input; 
}

///a game that only gives X number of choices
// track the number of attempts
// I wanto to track the guesses
bool runGame(int randomNumber, GameState *gameState) {
    int guess = 0;
    // *attempts = 0;

    // while (*attempts < maxAttempts) {
    //     printf("Enter your guess (1-100): ");
    //     guess = getInput();
    //     guesses[*attempts]=guess;
    //     (*attempts)++;

    //     if (guess < randomNumber) {
    //         printf("Too low! Try again.\n");
    //     } else if (guess > randomNumber) {
    //         printf("Too high! Try again.\n");
    //     } else {
    //         return true;
    //     }
    // }

    return false; 
}

void feedback(int state) {
//   if (state < 0) {
//     printf("Too low! Try again.\n");
//   } else if (state > 0) {
//     printf("Too high! Try again.\n");
//   }
}

void giveFeedback(int randomNumber, bool found, GameState *gameState){
    // if(found){
    //     printf("Congratulations! you guessed the number %d in %d attempts. \n", randomNumber,attempts);
    // }else{
    //     printf("Game Over! The number was %d \n", randomNumber);
    // }
    // printf("Your guesses were: ");
    // for(int i=0;i<attempts;i++){
    //     printf("%d ", guesses[i]);
    // }
    // printf("\n\n");
}

void start() {
    printf("Welcome to the Guessing Game!\n");
    char choice[20];

    //   while(strcasecmp(choice, "exit")!=0) {
    //     printf("Play Game\n");   ///play or exit//
    //     printf("Exit\n");
    //     printf("Enter your choice (play | exit): ");
    //     scanf("%s", choice);

    //     if (strcasecmp(choice, "play")==0) {
    //         // Call the game function here
    //         int randomNumber = getRandomNumber(1, 100);
    //         int guesses[MAX_ATTEMPTS];
    //         int attempts=0;
    //         printf("Starting the game...\n");
    //         bool found=runGame(randomNumber, &attempts,guesses,MAX_ATTEMPTS);
    //         giveFeedback(randomNumber, found,attempts,guesses);
    //     } else if (strcasecmp(choice, "exit")==0) {
    //         printf("Exiting the game...\n");
    //     } else {
    //         printf("Invalid choice. Please try again.\n");
    //     }
    // }

}