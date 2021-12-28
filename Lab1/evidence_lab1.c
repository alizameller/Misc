#include <stdlib.h>
#include <stdio.h>
#include "lab1.h"
 
/* evidence_expt: test expt */
void evidence_expt()
{
    printf("*** testing expt\n");
    printf("- expecting 1: %lld\n", expt(2,0));
    printf("- expecting 8: %lld\n", expt(2,3));
    printf("- expecting 64: %lld\n", expt(4,3));
    printf("- expecting 144: %lld\n", expt(12,2));
    /* more tests at your discretion */
}
 
/* evidence_ss: test ss */
void evidence_ss()
{
    printf("*** testing ss\n");
    printf("- expecting 1: %lld\n", expt(2,0));
    printf("- expecting 81: %lld\n", expt(3,4));
    printf("- expecting 8: %lld\n", expt(2,3));
    printf("- expecting 64: %lld\n", expt(4,3));
    printf("- expecting 144: %lld\n", expt(12,2));
}
 
void evidence_ssm()
{
    printf("*** testing ssm\n");
    printf("- expecting 24: %u\n", ssm(2,10,1000));
    printf("- expecting 1: %u\n", ssm(2,0,3));
    printf("- expecting 3: %u\n", ssm(2,3,5));
    printf("- expecting 8: %u\n", ssm(12, 5, 19));
    printf("- expecting 29: %u\n", ssm(16, 8, 107));
    /* tests */
}
 
/* main: run the evidence functions above */
int main(int argc, char *argv[])
{
    evidence_expt();
    evidence_ss();
    evidence_ssm();
    return 0;
}

