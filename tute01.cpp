
/*Exercise 1 - Calculations

Convert the C program given below which converts a length given in cm to inches to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.

e.g.

float data1;
int data2;
scanf("%f", &data1); --> std::cin >> data1;
scanf("%d", &data2); --> std::cin >> data2; 
You already know that printf() in C is std::cout in C++ e.g.

printf("Hello World") --> std::cout << "Hello World";
2.54cm = 1 inch
*/

/*
#include <stdio.h>
int main() 
{
    float cm, inches;
    printf("Enter a length in cm : ");
    scanf("%f",&cm);
    inches = cm / 2.54;
    printf("Length in inches is %f \n", inches);
    return 0;
}  
*/

//begin the programme...
#include <iostream>

using namespace std;

int main ()
{
  //get the user inputs..
	float cm, inch;
	
	cout << "Enter a length in cm : ";
	cin >> cm;
	
  //maniulating the values
	inch = cm / 2.54;
	

  //display the final answer....
	cout << "Length in inches : " << inch << " inches";
	
	return 0;
}
//end of the programme
