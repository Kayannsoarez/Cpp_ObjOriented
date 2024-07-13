#pragma once
#include "DiaSemana.hpp"
#include "Pessoa.hpp"
#include "Cpf.hpp"
#include <string>

// Definição da classe Funcionario que herda da classe Pessoa
class Funcionario : public Pessoa<Cpf> {
private:
    // Atributos privados da classe Funcionario
    float salario;
    DiaSemana diaPagamento;

public:
    // Construtor que inicializa os atributos da classe base Pessoa e os atributos da classe Funcionario
    Funcionario(Cpf cpf, std::string nome, float salario, DiaSemana diaPagamento);

    // Metodo que retorna o nome do funcionário
    std::string recuperaNome() const;

    // Metodo que retorna o salário do funcionário
    float recuperaSalario() const;

    // Metodo virtual puro que deve ser implementado pelas classes derivadas para calcular a bonificação
    virtual float bonificacao() const = 0;
};
