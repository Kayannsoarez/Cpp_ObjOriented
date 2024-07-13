#pragma once
#include "Conta.hpp"

// Definição da classe ContaCorrente que herda da classe Conta
class ContaCorrente final : public Conta {
public:
    // Construtor que inicializa os atributos da classe base Conta
    ContaCorrente(std::string numero, Titular titular);

    // Implementação do metodo taxaDeSaque
    float taxaDeSaque() const override;

    // Metodo para transferir dinheiro para outra conta
    void transferePara(Conta& conta, float valor);

    // Sobrecarga do operador += para transferir metade do saldo de outra ContaCorrente
    void operator+=(ContaCorrente& contaOrigem);
};
