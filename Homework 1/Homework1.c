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
#endif // _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void PrintHello(char* name);

int main(void){
    PrintHello("Bob");
    return 0;
}


void PrintHello(char* name){
    printf("Hello, %s!", name);
}