//
// Created by Dawei Zhao on 11/8/23.
//
#include "stdio.h"
int main() {
    int array1[5] = {2,3,5,7,9};
    for(int i=0;i<(sizeof(array1)/sizeof(array1[0]));i++){
        printf("\n%d",*(array1+i));
    }

}