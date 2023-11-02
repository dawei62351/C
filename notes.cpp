//
// Created by Dawei Zhao on 10/30/23.
//
#include "stdio.h"
#include "string.h"
#include "math.h"

int main () {
    int x; //declaration
    x = 123; //initialization
    int y = 456; // declaration + initialization
    /*
     * C is not object-oriented
     * so there is no string data type because string is technically objects
     * so we use char array as strings
     * char can store a single character
     * single char has to use ''
     * strings has to use ""
     */
    char z = 'Z';
    char name[] = "Dawei";
    /*
     * %d decimal
     * %s string
     * %c character
     * %f float
     * */

    int age;
    char readName[25];
    printf("how old are you");
    scanf("%d",&age);
    // scanf only get one word
    printf("you are %d years old",age);
    fgets(readName, 25, stdin);
    name[strlen(name)-1]= '\0';
    //reads white spaces but will add a \n at the end so switch last char to \0 take away \n




}