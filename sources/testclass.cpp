#include "testclass.h"
//удалили лишние инклуды
Book::Book(const std::string & nam, const double & pr, unsigned int c): count(c+1), name(nam), price(pr)   //вынесли инициализацию переменных из фигурных скобок
{}
double Book::getCount(double c)
{
  //убрали count++
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
