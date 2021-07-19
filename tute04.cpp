/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/
/*
#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
*/
//begin the programm
#include <iostream>

using namespace std;

//declaring the functions
long Factorial (int no);
long nCr (int n, int r);

int main ()
{
  //get the user inputs for n r....
	int n, r;
 	std::cout << "Enter a value for n ";
 	std::cin >> n;
 	std::cout << "Enter a value for r ";
 	std::cin >> r;
 	std::cout << "nCr = ";

  //call the functions..
 	std::cout << nCr(n,r);
 	std::cout << std::endl;

}

//fuctions....

long Factorial (int r)
{
	int fac = 1, counter;
	
	for (int counter = r ; counter >= 1; counter--)
	{
		fac *= counter;
	}
	
	return r;
}

long nCr (int n, int r)
{
	float value;
	int n_r;
	
	n_r = n - r;
	
	
	value = Factorial(n) / (Factorial(r) - Factorial (n_r));
	
	return value;
}
