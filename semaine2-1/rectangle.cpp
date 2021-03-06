#include <iostream>

class Rectangle {
    double height;
    double length;
    // Method prototype
    double area() const;
};
// Method definition, outside of class to improve readability
// const --> no changes to any of the object's fields 
double Rectangle::area() const {
    // Error due to the const keyword succeeding the function's parameters
    // height = length;
    return height * length;
}

int main() {
    Rectangle rect1;
    rect1.height = 3.0;
    rect1.length = 4.0;

    return 0;
}