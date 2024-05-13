#include <iostream>

float sum(float &a, float &b) {
    return a + b;
}

float res(float &a, float &b) {
    return a - b;
}

float mul(float &a, float &b) {
    float resultado = 0;
    for (int i = 0; i < b; i++) {
        resultado += a;
    }
    return resultado;
}

float div(float &a, float &b) {
    float resultado = 0;
    while (a >= b) {
        resultado++;
        a -= b;
    }
    return resultado;
}

int main() {
    float n1, n2;
    std::cout << "Ingrese el primer número: ";
    std::cin >> n1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> n2;
    
    std::cout << "Suma: " << sum(n1, n2) << std::endl;
    std::cout << "Resta: " << res(n1, n2) << std::endl;
    std::cout << "Multiplicación: " << mul(n1, n2) << std::endl;
    std::cout << "División: " << div(n1, n2) << std::endl;

    return 0;
}
