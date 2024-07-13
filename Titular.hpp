#pragma once
#include <string>
#include "Autenticavel.hpp"
#include "Pessoa.hpp"
#include "Cpf.hpp"

// Definição da classe Titular que herda de Pessoa e Autenticavel
class Titular : public Pessoa<Cpf>, public Autenticavel {
public:
    // Construtor que inicializa os atributos das classes base Pessoa e Autenticavel
    Titular(Cpf cpf, std::string nome, std::string senha);
};
