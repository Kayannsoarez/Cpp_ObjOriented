#include "ContaPoupanca.hpp"
#include <iostream>

// Implementação do construtor da classe ContaPoupanca
ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) : Conta(numero, titular) {
}

// Implementação do metodo taxaDeSaque
// Retorna a taxa de saque para ContaPoupanca (3%) e imprime uma mensagem
float ContaPoupanca::taxaDeSaque() const {
    std::cout << "Chamando método sacar da conta poupança" << std::endl;
    return 0.03;
}
