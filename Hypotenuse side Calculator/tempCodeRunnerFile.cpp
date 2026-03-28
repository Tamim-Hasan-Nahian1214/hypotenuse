#include <iostream> 
#include <cmath>
int main() {
    int a;
    std::cout << "Enter the size of a: ";
    std::cin >> a; 
    int b;
    std::cout << "Enter the size of b: ";
    std::cin >> b; 
    double c;
    c = std::sqrt(std::pow(a, 2) + std::pow(b, 2));
    std::cout << c << std::endl;
    return 0;
}