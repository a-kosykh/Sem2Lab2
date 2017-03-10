#pragma once
#include <iostream>
#include <string>
class Book {
	std::string name;
	unsigned int count;
	
public:
	double price;
	Book(std::string nam, double pr, unsigned int c);
	double getCount(double c);
	double getRublPrice();
	double getDollPrice(double price,double dollar);
	void print();
	~Book();
};

