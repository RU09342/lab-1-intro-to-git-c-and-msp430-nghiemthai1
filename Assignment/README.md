# Description
This program is a mini calculator. 
It takes in two numbers as parameters and performs various operations on them based on the parameter Operator.

## Function
There are 5 operations that this program can run, including: addition, subtraction, division, multiplication, and modulus. 
### Addition
If the Opertor is '+', the program will add num1 and num2. 
'math(1,2,'+');' 
will give you 3
### Subtraction
If the Opertor is '-', the program will subtract num2 from num1.
'math(1,2,'-');' 
will give you -1
### Multiplication
If the Opertor is 'x', the program will multiply num1 and num2.
'math(1,2,'x');' 
will give you 2
### Division
If the Opertor is '/', the program will divide num2 from num1.
'math(2,2,'/');' 
will give you 1
### Mudulus
If the Opertor is '%', the program will take the modulus of num1 and num2.
'math(1,2,'%');' 
will give you 1

# Example
If you input '+' for Operator, '5' for num1, and '2' for num2, the program will return to you '7' 
# How to implement this on your computer
The math.h file is the header file that ensure the MATH_H is difined and the math(num1,num2,Operator) fuction is implemened. 
When you run the math.c file, it will print to the console a line that ask you for the 2 numbers and the Operator. 
After you input these parameters, math.c file will take these variables and put them in a function called math(int num1, int num2, char Character). This function will return the integer result of the desired operation.