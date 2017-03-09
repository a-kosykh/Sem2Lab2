#include <testclass.h>
#include <catch.hpp>

SCENARIO ("getDollarPriceCheck", "[USDcheck]"){
    double x = 60;

    double rv = getDollPrice(x);
        REQUIRE ( rv == 3 );
}