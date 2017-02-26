#include <testclass.h>
#include <catch.hpp>

SCENARIO ("getDollarPriceCheck", "[USDcheck]"){
    double dollar = 60;

    double rv = Book::getDollPrice(dollar);
        REQUIRE ( rv == 3 );
}