#pragma once
#include "Funcionario.hpp"  // Inclui a definição da classe base Funcionario
#include "DiaSemana.hpp"    // Inclui a definição do enum ou classe DiaSemana

// Definição da classe Caixa que herda de Funcionario
class Caixa : public Funcionario {
public:
    // Construtor que inicializa os atributos da classe base Funcionario
    Caixa(Cpf cpf, std::string nome, float salario, DiaSemana diaPagamento);

    // Metodo que calcula a bonificação do caixa
    float bonificacao() const;
};
