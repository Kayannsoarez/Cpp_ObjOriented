#pragma once
#include "Funcionario.hpp"
#include "Autenticavel.hpp"
#include "DiaSemana.hpp"

// Definição da classe Gerente que herda de Funcionario e Autenticavel
class Gerente final : public Funcionario, Autenticavel {
public:
    // Construtor que inicializa os atributos da classe base Funcionario e Autenticavel
    Gerente(Cpf cpf, std::string nome, float salario, DiaSemana diaPagamento, std::string senha);

    // Implementação do metodo bonificacao
    float bonificacao() const;
};
