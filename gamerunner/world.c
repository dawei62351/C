//
// Created by Dawei Zhao on 11/13/23.
//
#include <stdio.h>

#include "world.h"

int highScore;

void welcome(){
    printf("Welcome to level 1");
}

void newScore(int ns){
    highScore = ns;
}

void reset(){
    highScore = 0;
}