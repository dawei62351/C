//
// Created by Dawei Zhao on 10/30/23.
//
#include "stdio.h"
#define NUM_LOOPS 30

int greeting();

int main () {
    int gOut = greeting();
    int c;
    c = getchar();
    while (c != EOF) {
        //EOF end of file
        putchar(c);
        c=getchar();
    }
    return 0;
}

int greeting() {
    printf("1");
    return 0;
}

