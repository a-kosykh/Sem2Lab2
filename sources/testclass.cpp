#include "testclass.h"
//удалили лишние инклуды
Book::Book(std::string nam, double pr, unsigned int c)
{
	count = c;
	name = nam;
	price = pr;
}
double Book::getCount(double c)
{
	count++;
	return count;
}
double Book::getRublPrice()
{
	return price;
}
double Book::getDollPrice(double dollar)
{
	return price / dollar;
}
void Book::print()
{
	std::cout << "\nBook #" << count + 1 << "\nName of the book: " << name << "\nPrice in RUB: " << price;
	std::cout << "\n----------------------------";
}
Book::~Book() {}
