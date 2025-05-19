/**
 * Initial Starter code for Code Along: Swapper. 
 * This code will demonstrate how to swap two numbers using a pointers.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void  swap(int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    printf("Values: num1 = %d, num2 = %d\n", num1, num2);
    // ///Traditional way//
    // int temp=num1;
    // num1=num2;
    // num2=temp;
    swap(&num1, &num2);
    
    printf("Swapped values: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}