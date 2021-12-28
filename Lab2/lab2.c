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

void Axes(double step, int xleft, int xright, int ybottom, int ytop) {
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

void graph(double a, double b, double c, double step, int xleft, int xright, 
           int ybottom, int ytop) {
           double y = a * (xleft * xleft) + b * xleft + c; 
           
           if (ytop < ybottom) {
               return;
           } else if (ytop == y && xleft <= xright) {
               printf("*");
               graph(a, b, c, step, xleft + 1, xright, ybottom, ytop); 
           } else if (ytop != y && xleft <= xright) {
               Axes(step, xleft, xright, ybottom, ytop); 
               graph(a, b, c, step, xleft + 1, xright, ybottom, ytop); 
           } else {
               printf("\n");
               xleft = -2; //need to set to original xleft value
               ytop = ytop - step; 
               graph(a, b, c, step, xleft, xright, ybottom, ytop); 
           }

        }
