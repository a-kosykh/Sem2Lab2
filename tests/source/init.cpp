#include <testclass.h>
#include <catch.hpp>

SCENARIO ("getDollarPriceCheck", "[Book::getDollPrice]"){
    Book obj = new Book("asdasd", 180, 2);
	double x = 60;

    double rv = obj->getDollPrice(x);
        REQUIRE ( rv == 3 );
}
