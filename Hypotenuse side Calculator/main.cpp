#include <iostream> 
#include <cmath>

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
    double c = hypotenuse(); 
    return 0;
}