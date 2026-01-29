///////////////////////////////////////////////////////////////
//
// CPE 2073
//
// Lab 1
//
// I certify that the code below is my own work.
// Landon Smith wau034

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

// Function to calculate the area of a triangle:
// A = 1/2 * base * height
double areaOfTriangle(double base, double height) {
  // Your code goes here
  return 0.5 * base * height;
}
int main(void) {
  // Here, we simply pass literal values (actual numbers) to our function.
  // Also, note that we make the call to areaOfTriangle() inside the printf()
  // call.
  printf("The area of a triangle with base = 3 and height = 5 is %.2lf\n",
         areaOfTriangle(3, 5));
  // This time, we declare variables base and height and give them the
  // same values as above but we make the call to the function outside
  // of the printf() call.
  double base = 3, height = 5;
  double A = areaOfTriangle(base, height);
  printf(
      "The area of a triangle with base = %.2lf and height = %.2lf is %.2lf\n",
      base, height, A);
  // The variables you use don't have to be the same names as the function
  // parameters.
  double b = 3, h = 5;
  A = areaOfTriangle(b, h);
  printf(
      "The area of a triangle with base = %.2lf and height = %.2lf is %.2lf\n",
      b, h, A);
  return 0;
}