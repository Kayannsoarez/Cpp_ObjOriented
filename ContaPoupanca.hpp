#pragma once
#include "Conta.hpp"

// Definição da classe ContaPoupanca que herda da classe Conta
class ContaPoupanca final : public Conta {
public:
    // Construtor que inicializa os atributos da classe base Conta
    ContaPoupanca(std::string numero, Titular titular);

    // Implementação do metodo taxaDeSaque
    float taxaDeSaque() const override;
};
