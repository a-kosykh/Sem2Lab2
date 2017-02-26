#include <testclass.h>
#include <catch.hpp>

SCENARIO ("getDollarPriceCheck", "[USDcheck]"){
    double price = 180;
    double dollar = 60;

    double rv = double Book::getDollPrice(double dollar)
        REQUIRE ( rv == 3 );
}