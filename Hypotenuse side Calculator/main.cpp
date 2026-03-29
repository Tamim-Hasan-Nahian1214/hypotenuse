#include <iostream> 
#include <cmath>

double addition() {
    int additionA;
    std::cout << "Enter Number 1: ";
    std::cin >> additionA;
    int additionB;
    std::cout << "Enter Number 2: ";
    std::cin >> additionB;
    int additionResult = additionA + additionB;
    std::cout << "The Addition is: " << additionResult << std::endl;
}

double hypotenuse()
{
    int hypotenuseA;
    std::cout << "Enter the size of a: ";
    std::cin >> hypotenuseA;
    int hypotenuseB;
    std::cout << "Enter the size of b: ";
    std::cin >> hypotenuseB;
    double hypotenuseC;
    hypotenuseC = std::sqrt(std::pow(hypotenuseA, 2) + std::pow(hypotenuseB, 2));
    std::cout << "Hypotenuse: " << hypotenuseC << std::endl;
    return hypotenuseC;
}

    int main()
{
    hypotenuse();
    addition();
    return 0;
}