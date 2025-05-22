/**
 * Test Driver For GuessingGame Part 3 Code Along
 */

#include "GuessingGame.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void testMallocAndFree() {
  GameState *one = initializeGameState(10, 0, 0, 100);
  GameState *two = initializeGameState(10, 1, 0, 100);

  freeGameState(one);
  freeGameState(two);
}

void testGetInput() {
  printf("Enter a value: ");
  int myValue = getInput();
  printf("Testing my value by entering 10, the results is %d\n\n", myValue);
}

int main() {
  srand(0); // Seed the random number generator with a fixed value for
            // reproducibility
  int randomNumber = getRandomNumber(DEFAULT_MIN, DEFAULT_MAX);
  printf("Random number generated: %d\n", randomNumber);

  // testGetInput();
  testMallocAndFree();
  return 0;
}
