/**
 * Starter File for code along Array Practice. 
 * This file will demonstrate basic array operations.
 * This will include functions for initializing, printing, and manipulating arrays.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int getSum(int *numbers,int size){    ////there is pointer int* numbrs because first element is pointer to that element//
    int sum=0;
    for(int i=0;i<size;i++){
        // sum+=numbers[i];
        sum+=*(numbers+i); //pointer arimtiick
    }

    return sum;
}

void arraysFunctions(){
    int numbers[5]={1,2,3,4,5};
    int sum=getSum(numbers,5);

    printf("Sum of the element is %d",sum);
    printf("\n");

}

void arraysLoops() {
    int numbers[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("numbers[%d]=%d\n",i,numbers[i]);///regular
        printf("numbers[%d]=%d (%p)\n",i,numbers[i], (void *)&numbers[i]); ///hexademical pointing

    }
    printf("\n");

    char names[3][20] = {"Alice", "Bob", "Charlie"};
    for(int i=0;i<3;i++){
        printf("names[%d] =%s\n", i, names[i]);

    }
    printf("\n");

    int evens[100]; ///allocated memory//

      for(int i=0;i<100;i++){
        printf("evens[%d]=%d\n", i, evens[i]);
    }
    printf("\n");

    for(int i=0;i<100;i++){
        evens[i]=i*2;
    }
    for(int i=0;i<100;i++){
        printf("evens[%d]=%d\n", i, evens[i]);
    }
    printf("\n");




}

int main() {
    arraysLoops();
    arraysFunctions();
    return 0;
}