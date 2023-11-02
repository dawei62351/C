//
// Created by Dawei Zhao on 10/31/23.
//
#include "stdio.h"
#include "math.h"
int main () {
    double A, B, C;
    printf("input side A: ");
    scanf("%lf",&A);
    printf("input side B: ");
    scanf("%lf",&B);

    C = sqrt(A*A+B*B);
    printf("Length of side C is %lf",C);
    return 0;
}