#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/busSort.h"

TEST_CASE( "it returns zero" ) {
    REQUIRE( busSort() == 0 );
}