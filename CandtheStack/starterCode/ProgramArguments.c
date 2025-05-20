/**
 * Starter code for Code Along: Command Line Arguments.
 *
 * In this code will explore access the the
 * program command line arguments.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  printf("Number of arguments: %d\n", argc);
  printf("Arguments:\n");
  for (int i = 0; i < argc; i++) {
      printf("argv[%d]: %s\n", i, argv[i]);
  }
  printf("\n");
  if(argc > 2){
    printf("The first arg as int: %d\n", atoi(argv[1]));  ///convert to string//
    printf("The second arg as string: %s\n", argv[2]);

  }
  return 0;
}

