#include "Titular.hpp"
#include <iostream>

// Implementação do construtor da classe Titular
// Inicializa os atributos das classes base Pessoa e Autenticavel
Titular::Titular(Cpf cpf, std::string nome, std::string senha)
    : Pessoa(cpf, nome), Autenticavel(senha) {
}
