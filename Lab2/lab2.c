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

void xAxis(int xleft, int xright) {
   if (xleft > xright) {
       printf("\n");
    } else if (xleft == 0) {
        printf("+");
        return;
    } else {
        printf("-");
        return; 
    }
}

void axes(double step, int xleft, int xright, int ybottom, int ytop) {
    if (ytop < ybottom) {
        return;
    } else if (ytop == 0) {
        xAxis(xleft, xright);
        return;
    } else if (xleft == 0) {
        printf("|");
        return; 
    } else {
        printf(" ");
        return;
    }
}

void point(double a, double b, double c, double step, int x, int xleft, int xright, 
           int ybottom, int ytop, int y){
    y = a * (x * x) + b * x + c;
    if (ytop == y && x <= xright) {
        printf("*");
        point(a, b, c, step, x + 1, xleft, xright, ybottom, ytop, y); 
    } else if (ytop != y && x <= xright) {
        axes(step, x, xright, ybottom, ytop); 
        point(a, b, c, step, x + 1, xleft, xright, ybottom, ytop, y);        
    } else {
        return; 
    }       
}

void graph(double a, double b, double c, double step, int xleft, int xright, 
           int ybottom, int ytop) {
    double y = 0; 
    int x = xleft; 
    if (ytop < ybottom) {
        printf("\n");
        return;
    } else {
        printf("\n");
        point(a, b, c, step, x, xleft, xright, ybottom, ytop, y);
        x = xleft; //need original xleft value
        ytop = ytop - step; 
        graph(a, b, c, step, xleft, xright, ybottom, ytop); 
    }       
        
}
