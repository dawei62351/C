//
// Created by Dawei Zhao on 11/1/23.
//
#include "stdio.h"
#define IN 1
#define OUT 0

int main() {
    int c, n1, nw, nc, state;

    state = OUT;
    n1 = nw = nc = 0;
    while((c = getchar()) != 'E') {
        ++nc;
        if (c == '\n')
            ++n1;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
        // this state flip thing is pretty genius
        //when you do this , consecutive spaces will not be counted as words
    }
    printf("%d %d %d\n", n1, nw, nc);
}