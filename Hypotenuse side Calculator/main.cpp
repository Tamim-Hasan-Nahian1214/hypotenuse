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

double subtraction()
{
    int subtractionA;
    std::cout << "Enter Number 1: ";
    std::cin >> subtractionA;
    int subtractionB;
    std::cout << "Enter Number 2: ";
    std::cin >> subtractionB;
    int subtractionResult = subtractionA - subtractionB;
    std::cout << "The Subtraction is: " << subtractionResult << std::endl;
}

double multiplication()
{
    int multiplicationA;
    std::cout << "Enter Number 1: ";
    std::cin >> multiplicationA;
    int multiplicationB;
    std::cout << "Enter Number 2: ";
    std::cin >> multiplicationB;
    int multiplicationResult = multiplicationA * multiplicationB;
    std::cout << "The Multiplication is: " << multiplicationResult << std::endl;
}

double division()
{
    int divisionA;
    std::cout << "Enter Number 1: ";
    std::cin >> divisionA;
    int divisionB;
    std::cout << "Enter Number 2: ";
    std::cin >> divisionB;
    int divisionResult = divisionA / divisionB;
    std::cout << "The Division is: " << divisionResult << std::endl;
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
    subtraction();
    multiplication();
    division(); 
    return 0;
}