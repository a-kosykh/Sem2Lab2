#pragma once
#include <iostream>
#include <string>
class Book {
	std::string name;
	unsigned int count;
	double price;   //сделали поле price  private 
public:
	
	Book(std::string nam, double pr, unsigned int c);
	double getCount(double c);
	double getRublPrice();
	double getDollPrice(double dollar);
	void print();
	~Book();
};

