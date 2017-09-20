/*
 * math.c
 *
 *  Created on: Sept 11, 2017
 * 	Last Edited: Sept 11, 2017
 *      Author: Thai Nghiem
 */

#include <stdio.h>

#include <math.h>

/* This function take in two numbers as parameters and performs various operations on it (including: add, subtract, divide, multiply, and modulus) based on the Operator.
 *@param num1, num2  Two numbers you want to operate on.
 *@param Operator  Which operator you want to operate with. 
 *@return  The desired result. 
 */
int math(int num1, int num2, char Operator)

{

    //Compare the input Operator with valid character to determind what operation to execute
if (Operator == '+') {

         return num1 + num2; // Addition

    }

    else if (Operator =='-'){

        return num1 - num2; // Subtraction

    }

    else if (Operator =='x'){

        return num1 * num2; //Multiplication

    }

    else if (Operator =='/'){

        return num1 / num2; //Division

    }

    else if (Operator =='%'){

        return num1 % num2; //Mudulation

    }

    return 0;

}





int main()

{
    //Initializing variables
    int num1=0;

    int num2=0;

    char Operator;

    

    //Promt for the 2 numbers and the Operator
    printf("Enter the desired operation: ");

    scanf("%c" , &Operator); //Scan and assign to operator variable


    printf("Enter first number: ");

    scanf("%d" , &num1);

    printf("Enter second number: ");

    scanf("%d" , &num2);


    
    //Get and print out the result
    int a = math(num1,num2,Operator); //Call for math() function

    printf("Result: %d", a); //Print out the result

    return 0;

}