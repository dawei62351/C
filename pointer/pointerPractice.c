//
// Created by Dawei Zhao on 11/8/23.
//

#include "stdio.h"
int main() {
    int num1 = 3;
    int num2 = 5;
    int * pnum1 = &num1;
    int * pnum2 = &num2;
    int num3 = *pnum1 + *pnum2;
    printf("%d",num3);

    int temp;
    temp = *pnum1;
    num1 = *pnum2;
    num2 = temp;
    printf("\nnum1 3 to %d, num2 5 to %d", num1,num2);
}
