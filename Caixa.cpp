#include "Caixa.hpp"

// Implementação do construtor da classe Caixa
// Chama o construtor da classe base Funcionario com os parâmetros fornecidos
Caixa::Caixa(Cpf cpf, std::string nome, float salario, DiaSemana diaPagamento) :
    Funcionario(cpf, nome, salario, diaPagamento) {
}

// Implementação do metodo bonificacao
// Calcula a bonificação do caixa como 10% do salário
float Caixa::bonificacao() const {
    return recuperaSalario() * 0.1;
}