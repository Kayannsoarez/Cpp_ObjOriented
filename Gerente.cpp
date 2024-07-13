#include "Gerente.hpp"

// Implementação do construtor da classe Gerente
// Inicializa os atributos das classes base Funcionario e Autenticavel
Gerente::Gerente(Cpf cpf, std::string nome, float salario, DiaSemana diaPagamento, std::string senha)
    : Funcionario(cpf, nome, salario, diaPagamento), Autenticavel(senha) {
}

// Implementação do metodo bonificacao
// Retorna a bonificação (50% do salário)
float Gerente::bonificacao() const {
    return recuperaSalario() * 0.5;
}
