#include "../shapeInterface.hpp"

class Circle: public shapeInterface {
    private:
        double radius;
        std::string name = "Circle";
        Circle();
    public:
        Circle(double radius){
            this->radius = radius;
        }
        ~Circle(){};
        double getPerimeter() {return 2 * M_PI * radius;}
        double getArea() {return M_PI * (radius * radius);}
        std::string getName() {return name;}
};
