#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Vector.h"

TEST_CASE( "Arguments initialized") {
    vector<int> V(3), U(3), T(3);
    V.set_elem(0, 1);
    V.set_elem(1, -1);
    V.set_elem(2, 5);

    U.set_elem(0, 2);
    U.set_elem(1, 3);
    U.set_elem(2, 20);
    
    T = V * U;
    
    REQUIRE( T.get_elem(0) == 2);
    REQUIRE( T.get_elem(1) == -3);
    REQUIRE( T.get_elem(2) == 100);
}
