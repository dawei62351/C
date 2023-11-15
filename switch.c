//
// Created by Dawei Zhao on 11/2/23.
//
#include "stdio.h"
int main (){
    char grade;
    while((grade = getchar()) != 'Q') {
        scanf("%c", &grade);
        switch (grade) {
            case 'A':
                printf("great job\n");
            case 'B':
                printf("good job\n");
            default:
                printf("enter your grade:");
        }
    }
    return 0;
}