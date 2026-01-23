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

//Function to print "Hello, " followed by a name
void PrintHello(char* name){
    printf("Hello, %s!", name);
}

//Main function. The program always starts here
int main(void){
    PrintHello("Landon"); //Here's my name!
    return 0;
}

