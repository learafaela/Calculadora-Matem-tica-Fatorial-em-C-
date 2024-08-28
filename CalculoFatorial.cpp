#include <iostream>

int main() {
    int n;
    unsigned long long fatorial = 1;  // Usamos unsigned long long para suportar valores grandes

    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> n;

    // Verifica se o número é negativo
    if (n < 0) {
        std::cout << "O número deve ser inteiro e positivo.\n";
    } else {
        // Calcula o fatorial
        for (int i = 1; i <= n; ++i) {
            fatorial *= i;
        }
        std::cout << "O fatorial de " << n << " é " << fatorial << std::endl;
    }

    return 0;
}
