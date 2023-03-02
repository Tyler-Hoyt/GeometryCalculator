#include <cmath>
#include <catch2/catch_test_macros.hpp>
#include "../shapes/Rectangle.hpp" 
#include "../shapes/Triangle.hpp"
#include "../shapes/Circle.hpp"

TEST_CASE("Rectangle Test"){
    Rectangle myRect = Rectangle(5, 5);

    REQUIRE(myRect.getArea() == 25);
    REQUIRE(myRect.getPerimeter() == 20);
    REQUIRE(myRect.getName() == "Rectangle");
}

TEST_CASE("Triangle Test"){
    Triangle myTri = Triangle(5, 5);

    REQUIRE(myTri.getArea() == (25.0/2.0));
    REQUIRE(fabs(myTri.getPerimeter() - 16.18) < 0.01); //comparing floats sucks
    REQUIRE(myTri.getName() == "Triangle");
}

TEST_CASE("Circle Test"){
    Circle myCir = Circle(5);

    REQUIRE(myCir.getArea() == (M_PI * (5 * 5)));
    REQUIRE(myCir.getPerimeter() == (2 * M_PI * 5));
    REQUIRE(myCir.getName() == "Circle");
}
