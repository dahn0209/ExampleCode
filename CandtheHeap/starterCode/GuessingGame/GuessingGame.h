#ifndef GUESSINGGAME_H
#define GUESSINGGAME_H

#include <stdbool.h>
#include <stdlib.h>

#define DEFAULT_MAX_ATTEMPTS 10
#define DEFAULT_MIN 1
#define DEFAULT_MAX 100
#define HUMAN 1
#define COMPUTER 1

typedef struct {
    int *guesses; // Array to store guesses
    int attempts; // Number of attempts made
    int maxAttempts; // Maximum number of attempts allowed
    int playerType; // 1 for human, 0 for computer
    int min;
    int max; // Range of numbers
} GameState;




int getRandomNumber(int min, int max);
bool runGame(int randomNumber, GameState *gameState);
GameState* initializeGameState(int maxAttempts, int playerType, int min, int max);
void freeGameState(GameState *gameState);
void giveFeedback(int randomNumber, bool found, GameState *gameState);
int getInput(void);
void feedback(int state); //prints too high or too low//
void start(void);

void feedback(int state); //prints too high or too low//


#endif // GUESSINGAME_H