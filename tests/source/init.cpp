#include <testclass.h>
#include <catch.hpp>

SCENARIO ("getDollarPriceCheck", "[USDcheck]"){
    double price = 180;
    double dollar = 60;

    double rv = Book::getDollPrice(dollar)
        REQUIRE ( rv == 3 );
}