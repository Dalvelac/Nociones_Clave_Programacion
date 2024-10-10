#include <iostream>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int main() {
    int num1 = 10, num2 = 5;

    std::cout << "Suma: " << suma(num1, num2) << std::endl;
    std::cout << "Resta: " << resta(num1, num2) << std::endl;
    std::cout << "Multiplicacion: " << multiplicacion(num1, num2) << std::endl;

    return 0;
}