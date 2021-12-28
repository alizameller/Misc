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

/* evidence_rect: test graph */
void evidence_graph()
{   graph(1, 0, 0, 0, -4, 4, 0, 0);
    /* more tests at your discretion */
}

int main(int argc, char *argv[])
{
    evidence_rect();
    evidence_tri();
    evidence_graph();
    return 0;
}