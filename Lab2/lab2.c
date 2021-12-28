#include <stdlib.h>
#include <stdio.h>
#include "lab2.h"

void rectangle(int a, int b) {
     if (b == 0) {
         return;
     } else {
         aRow(a);
         rectangle(a, b-1);
     }
}

void triangle(int a, int b) {
    if (b == 0 || a == 0) {
        return;
    } else {
        triangle(a-1, b-1);
        aRow(a);
    }
}

void aRow(int a) {
    if (a == 0) {
        printf("\n");
    } else {
        printf("*");
        aRow(a-1); 
    }
    
}

void emptySpace(int n) {
    if (n == 0) {
        return;
    } else {
        printf(" "); 
        emptySpace(n-1);
    }
}

void findY(double a, double b, double c, int xleft, int xright){
    if (xleft > xright){
        return;
    } else {
        double Y = a*((xleft)*(xleft)) + b*(xleft) + c;
        printf("%f\n", Y); 
        findY(a, b, c, xleft + 1, xright); 
    }
}

void graph(double a, double b, double c, double step, int xleft, int xright, 
           int ybottom, int ytop) {
               findY(a, b, c, xleft, xright);
           }
