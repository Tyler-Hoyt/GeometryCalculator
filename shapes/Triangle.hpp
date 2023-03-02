#include <cmath>
#include "../shapeInterface.hpp"

class Triangle: public shapeInterface {
    private:
        double base, height;
        std::string name = "Triangle";
        Triangle();

    public:
        Triangle(double base, double height) {
            this->base = base;
            this->height = height;
        }
        ~Triangle(){};
        double getPerimeter(){
            double halfBase = base / 2;
            double hypotenuse = sqrt((halfBase * halfBase) + (height * height));
            return (hypotenuse * 2) + base;
        }
        double getArea() {return (height * base) /2;}
        std::string getName() {return name;}
};
