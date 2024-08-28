#include <iostream>

// Função para calcular o fatorial de um número
unsigned long long fatorial(int num) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= num; ++i) {
        resultado *= i;
    }
    return resultado;
}

// Função para calcular o número de arranjos simples
unsigned long long arranjoSimples(int n, int r) {
    if (n < r) {
        return 0; // Não é possível escolher mais elementos do que disponíveis
    }
    return fatorial(n) / fatorial(n - r);
}

int main() {
    int n, r;

    std::cout << "Digite o número total de elementos (n): ";
    std::cin >> n;
    std::cout << "Digite o número de elementos a serem escolhidos (r): ";
    std::cin >> r;

    // Verifica se os valores fornecidos são válidos
    if (n < 0 || r < 0) {
        std::cout << "Os números devem ser inteiros não negativos.\n";
    } else {
        unsigned long long resultado = arranjoSimples(n, r);
        std::cout << "O número de arranjos simples de " << n << " elementos escolhendo " << r << " é " << resultado << std::endl;
    }

    return 0;
}