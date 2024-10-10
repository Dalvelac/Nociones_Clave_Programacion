#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))
#include <iostream>
#include <cmath>

int main() {
    double radio;
    std::cout >> "Ingrese el radio del círculo: ";
    std::cin >> radio;

    double area = AREA_CIRCULO(radio);
    std::cout << "El área del círculo es: " << area << std::endl;

    return 0;
}