/**
 * Starter Code Function Practice Code Along
 * 
 * This program demonstrates the use of functions in C.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> 

double add (double a,double b){
    return a + b;
}

double subtract (double a,double b){
    return a - b;
}

double multiply (double a,double b){
    return a * b;
}

double divide (double a,double b){
    return a / b;
}

double modulus (int64_t a,int64_t b){
    return a % b;
}




int main() {
    long a=100;
    short b=6;

    printf("Addition: %.2f\n",add(a,b));
    printf("Substraction: %.2f\n",subtract(a,b));
    printf("Multiplication: %.2f\n",multiply(a,b));
    printf("Division: %.2f\n",divide(a,b));
    printf("Modulus: %.0f\n",modulus(a,b));


    return 0;
}

