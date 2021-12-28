#include <stdlib.h>
#include <stdio.h>
#include "lab1.h"

long long int expt(int a, unsigned int n) {
    if (n == 0) {
        return 1; 
    }
    else {
        n = n - 1;
        a = a * expt(a, n);
        return a;
    }
}

long long int ss(int a, unsigned int n) {
    if (n == 0) {
        return 1;
    }
    else if (!(n % 2)) { //even
        int result = ss(a, n / 2);
        return result * result; 
    }
    else { //odd
        return a * ss(a, n-1); 
    }
}

int ssm(int a, unsigned int n, unsigned int m) {
    if (n == 0) {
        return 1;
    }
    else if (!(n % 2)) { //even
        int result = ssm(a, n / 2, m) % m;
        return (result * result) % m; 
    }
    else { //odd
        return ((a % m) * (ssm(a, n - 1, m) % m)) % m; 
    }
}

