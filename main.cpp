#include <iostream>

#include "shapes/Rectangle.hpp"
#include "shapes/Triangle.hpp"
#include "shapes/Circle.hpp"

using std::cout; using std::cin; using std::endl;

int displayMenu();

int main() {
    int userChoice = displayMenu();
   //Ask user for what shape they would like to make
   if(userChoice == 1) {
       int h, w;
       cout << "Enter height: " << endl;
       cin >> h;
       cout << "Enter width: " << endl;
       cin >> w;
        
       Rectangle myRect = Rectangle(h, w);
       cout << "Name: " << myRect.getName() << endl;
       cout << "Area: " << myRect.getArea() << endl;
       cout << "Perimeter: " << myRect.getPerimeter() << endl; 
   }
   else if(userChoice == 2) {
       int b, h;
       cout << "Enter height: " << endl;
       cin >> h;
       cout << "Enter base: " << endl;
       cin >> b;

       Triangle myTri = Triangle(b, h);
       cout << "Name: " << myTri.getName() << endl;
       cout << "Area: " << myTri.getArea() << endl;
       cout << "Perimeter: " << myTri.getPerimeter() << endl;
   }
   else if(userChoice == 3) {
       int r;
       cout << "Enter radius: " << endl;
       cin >> r;

       Circle myCir = Circle(r);
       cout << "Name: " << myCir.getName() << endl;
       cout << "Area: " << myCir.getArea() << endl;
       cout << "Perimeter: " << myCir.getPerimeter() << endl;
   }

   return 0;
}

int displayMenu() {
    int menuChoice = 0;
    cout << "1. Rectangle" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Circle" << endl;
    cout << "Please select a shape: ";
    cin >> menuChoice;
    return menuChoice;
}

