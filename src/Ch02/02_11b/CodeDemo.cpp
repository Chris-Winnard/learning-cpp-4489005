// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = (5.0 /9) * (fahrenheit - 32);
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius: " << celsius << std::endl;

    float weight = 10.99;

    std::cout << std::endl << std::endl;
    std::cout << "Float: " << weight << std::endl;
    std::cout << "Integer part: " << (int) weight << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int)weight)*10000) << std::endl; //IF EDITING NEED TO BE CAREFUL NOT TO DROP BRACKETS- IT CAN RUN WITHOUT SOME OF THEM BUT GIVE INCORRECT ANSWERS; note- get better accuracy if using 'double weight' inst of float

    std::cout << std::endl << std::endl;
    return (0);
}
