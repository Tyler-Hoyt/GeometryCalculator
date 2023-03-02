#pragma once

class shapeInterface{
    public:
        virtual double getPerimeter() = 0;
        virtual double getArea() = 0;
        virtual std::string getName() = 0;
};
