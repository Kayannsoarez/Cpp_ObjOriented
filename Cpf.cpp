#include "Cpf.hpp"
#include <iostream>

// Implementação do construtor da classe Cpf
Cpf::Cpf(std::string numero) : numero(numero) {
    std::cout << "Cpf criado" << std::endl;
}

// Implementação do metodo recuperaNumero
// Retorna o número do CPF
std::string Cpf::recuperaNumero() const {
    return numero;
}
