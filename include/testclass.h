#pragma once
#include <iostream>
#include <string>
class Book {
	std::string name;
	unsigned int count;
	double price;   //сделали поле price  private 
public:
	
	Book(const std::string & nam, const double & pr, unsigned int c); //сделали передачу аргументов по ссылке, при этом добавили const
	double getCount(double c);
	double getRublPrice();
	double getDollPrice(double dollar);
	void print();
	~Book();
};

