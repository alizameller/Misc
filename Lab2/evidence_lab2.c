#include <stdlib.h>
#include <stdio.h>
#include "lab2.h"
 
/* evidence_rect: test rect */
void evidence_rect()
{   /*
    printf("4 columns 6 rows\n");
    rectangle(4, 6); 
    printf("6 columns 2 rows\n");
    rectangle(6, 2); 
    */
    /* more tests at your discretion */
}

/* evidence_rect: test tri */
void evidence_tri()
{   /*
    printf("4 columns 6 rows\n");
    triangle(4, 6); 
    printf("6 columns 2 rows\n");
    triangle(6, 2);
    printf("2 columns 2 rows\n");
    triangle(2, 2);
    */
    /* more tests at your discretion */
}

/* evidence_rect: test findY */
void evidence_findY() {
    /* 
    printf("y = x^2\n");
    findY(1, 0, 0, 0, -4, 4, 0, 0);
    printf("y = x^2 - 1\n");
    findY(1, 0, -1, 0, -4, 4, 0, 0); 
    */
    /* more tests at your discretion */
}

/* evidence_rect: test findY */
void evidence_Axes() {
    Axes(1, -4, 4, -3, 4); //decimals do not work why?
    /* more tests at your discretion */
}

int main(int argc, char *argv[])
{
    evidence_rect();
    evidence_tri();
    evidence_findY();
    evidence_Axes();
    return 0;
}