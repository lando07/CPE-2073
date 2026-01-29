///////////////////////////////////////////////////////////////
//
// CPE 2073
//
// Homework X
//
// I certify that the code below is my own work.
// Landon Smith wau034

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#endif // _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(){
    printf("C go brrr\n");
    printf("Size of different formats:\nchar:%lu\nshort:%lu\nint:%lu\nlong:%lu\nlong long:%lu\nfloat:%lu\ndouble:%lu\nlong double:%lu\n",
                     sizeof(char),sizeof(short), sizeof(int), sizeof(long), sizeof(long long), sizeof(float),sizeof(double), sizeof(long double));
}