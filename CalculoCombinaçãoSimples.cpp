#include <iostream>

// Função para calcular o fatorial de um número
unsigned long long fatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    unsigned long long resultado = 1;
    for (int i = 2; i <= num; ++i) {
        resultado *= i;
    }
    return resultado;
}

// Função para calcular o número de combinações simples C(n, r)
unsigned long long combinacao(int n, int r) {
    if (r > n) {
        return 0; // Não é possível escolher mais elementos do que existem
    }
    return fatorial(n) / (fatorial(r) * fatorial(n - r));
}

int main() {
    int n, r;

    std::cout << "Digite o valor de n: ";
    std::cin >> n;
    std::cout << "Digite o valor de r: ";
    std::cin >> r;

    if (n < 0 || r < 0) {
        std::cerr << "Os valores de n e r devem ser não negativos." << std::endl;
        return 1;
    }

    unsigned long long resultado = combinacao(n, r);
    std::cout << "O número de combinações simples C(" << n << ", " << r << ") é: " << resultado << std::endl;

    return 0;
}