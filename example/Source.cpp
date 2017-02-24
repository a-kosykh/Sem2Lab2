#include "testclass.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	unsigned int n;
	cout << "How many books: ";
	cin >> n;
	cout << endl;

	double dollar;
	cout << "Kurs dollara: ";
	cin >> dollar;
	cout << endl;

	double sumPriceD= 0, sumPriceR = 0 ;
	string S; 
	double p = 0;
	
	Book **ppA = new Book*[n];
	for (unsigned int i = 0; i < n; ++i)
	{
		cout << "//////////////" << endl;
		cout << "Name of the book: ";
		cin >> S;
		cout << "Price (RUB): ";
		cin >> p;
		cout << endl;
		ppA[i] = new Book(S, p, i);
		sumPriceD += ppA[i]->getDollPrice(dollar);
		sumPriceR += ppA[i]->getRublPrice();
	}
	for (unsigned int i = 0; i < n; ++i) {
		ppA[i]->print();
	}
	delete ppA;
	cout << "\nTotal books: " << n << endl;
	cout << "Summary price in USD: " << sumPriceD << " USD" << endl;
	cout << "Summary price in RUB: " << sumPriceR << " RUB" << endl;
	
	system("pause");
}
