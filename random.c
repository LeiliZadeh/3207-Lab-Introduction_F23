#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){

    int lower = 97, upper = 122;
    int num = (rand() % (upper - lower + 1)) + lower;
    char c = (char)num;

    return c;
}