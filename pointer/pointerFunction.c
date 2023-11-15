//
// Created by Dawei Zhao on 11/8/23.
//
#include "stdio.h"
int multiply(int *i,int *j);
int main() {
    int x,y;
    x=3;
    y=5;
    int product = multiply(&x,&y);
    printf("%d",product);
}
int multiply(int *i,int *j){
    return *i**j;
}
