/*
 * math.c
 *
 *  Created on: Sept 10, 2017
 * 	Last Edited: Sept 10, 2017
 *  Author: Josh Ford
 */
#include "math.h" 

/**
* This program is a quick intro to C and the use of git-hub
*
* The parameters of this program are:
* int num1 : first number passed in
* int num2 : second number passed in
* char Operation : operation you wish to persform
*
* This program returns the solution to the operation.
*/
int math(int num1, int num2, char Operator){
  if (Operator == '+') return num1 + num2;
  if (Operator == '-') return num1 - num2;
  if (Operator == '*') return num1 * num2;
  if (Operator == '/') return num1 / num2;
  if (Operator == '%') return num1 % num2;
}
