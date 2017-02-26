#include <testclass.h>
#include <catch.hpp>

SCENARIO ("getDollarPriceCheck", "[USDcheck]"){
    double price = 180;
    double dollar = 60;

    double rv = getDollPrice(dollar);
        REQUIRE ( rv == 3 );
}