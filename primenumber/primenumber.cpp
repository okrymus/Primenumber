// The program will classify a number as prime or not(third version).  
// Classify a number as prime or not.
// Programmer: Panupong Leenawarat
// Last modify: 11/3/15

#include <iostream>
using namespace std;

int main()
{
	int getNum;
	bool isPrime;
	//Title
	cout
		<< endl
		<< "\t           Classify a number as prime or not.             \n"
		<< "\t  Uses for and bool flags as well as conditional operator.\n"
		<< "\t                    By Lee. Panupong				         " 
		<< endl << endl;

	while (true)
	{			
		cout << "Give me an integer: ";
		cin >> getNum;    cin.ignore(80, '\n');
		
		while(getNum <= 1)
		{
			cout << "Prime numbers are defined for integers bigger than 1. Try again: ";
			cin >> getNum;    cin.ignore(80, '\n');
		}
		
		isPrime = true;
		for ( int count = 2; isPrime && count < getNum; count++)  
		{
			if (getNum % count == 0)
				isPrime = false;
		}
	
		cout 
			<< getNum << " is " << (isPrime ? "" : "NOT ") << "prime number " << endl << endl;
	}
}



