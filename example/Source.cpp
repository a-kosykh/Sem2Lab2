#include "testclass.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	unsigned int n;
	cout << "How many books: ";
	cin >> n;
	if (!cin) {
		cout << "ERROR"; return 0;
	}
	cout << endl;

	double dollar;
	cout << "Dollar exchange rate (RUB): ";
	cin >> dollar;
	if (!cin) {
		cout << "ERROR"; return 0;
	}
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
		if (!cin) {
			cout << "ERROR"; return 0;
		}
		cout << "Price (RUB): ";
		cin >> p;
		if (!cin) {
			cout << "ERROR"; return 0;
		}
		cout << endl;
		ppA[i] = new Book(S, p, i);
		sumPriceD += ppA[i]->getDollPrice(price, dollar);
		sumPriceR += ppA[i]->getRublPrice();
	}
	for (unsigned int i = 0; i < n; ++i) {
		ppA[i]->print();
	}
	cout << "\nTotal books: " << n << endl;
	cout << "Summary price in USD: " << sumPriceD << " USD" << endl;
	cout << "Summary price in RUB: " << sumPriceR << " RUB" << endl;
	delete[]ppA;
	system("pause");
	return 0;
}
