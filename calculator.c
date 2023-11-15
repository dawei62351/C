//
// Created by Dawei Zhao on 11/2/23.
//
#include "stdio.h"

void output(double result);

int main(){
    char operator;
    double num1, num2, result;
    while ((operator = getchar()) != "Q"){
        printf("\nEnter an operater (+ - * /): ");
        scanf("%c", &operator);
        printf("\nEnter first number: ");
        scanf("%lf", &num1);
        printf("\nEnter second number: ");
        scanf("%lf", &num2);

        switch(operator){
            case '+':
                result = num1 + num2;
                output(result);
                break;
            case '-':
                result = num1 - num2;
                output(result);
                break;
            case '*':
                result = num1 * num2;
                output(result);
                break;
            case '/':
                result = num1 / num2;
                output(result);
                break;
            default:
                printf("start calculator");
                break;

        }
    }

}

void output(double r) {
    printf("Result is %.3lf", r);
}