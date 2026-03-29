#include <iostream> 
#include <cmath>
int main() {
    int hypotenuseA;
    std::cout << "Enter the size of a: ";
    std::cin >> hypotenuseA;
    int hypotenuseB;
    std::cout << "Enter the size of b: ";
    std::cin >> hypotenuseB;
    double c;
    c = std::sqrt(std::pow(hypotenuseA, 2) + std::pow(hypotenuseB, 2));
    std::cout << c << std::endl;
    return 0;
}