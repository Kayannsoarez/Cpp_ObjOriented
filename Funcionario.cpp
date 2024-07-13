#include "Funcionario.hpp"
#include <iostream>

// Implementação do construtor da classe Funcionario
// Inicializa os atributos da classe base Pessoa e os atributos da classe Funcionario
Funcionario::Funcionario(Cpf cpf, std::string nome, float salario, DiaSemana diaPagamento)
    : Pessoa(cpf, nome), salario(salario), diaPagamento(diaPagamento) {
}

// Implementação do metodo recuperaNome
// Retorna o nome do funcionário
std::string Funcionario::recuperaNome() const {
    return nome;
}

// Implementação do metodo recuperaSalario
// Retorna o salário do funcionário
float Funcionario::recuperaSalario() const {
    return salario;
}
