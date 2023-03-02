#include "../shapeInterface.hpp"

class Rectangle: public shapeInterface {
    private:
        double height, width;
        std::string name = "Rectangle";
        Rectangle();

    public:
        Rectangle(double height, double width) {
            this->height = height;
            this->width = width;
        }
        ~Rectangle(){};
        double getPerimeter() {return (height * 2) + (width * 2);}
        double getArea() {return height * width;}
        std::string getName() {return name;}
};
