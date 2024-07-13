#pragma once
#include <string>
#include <utility>
#include <variant>
#include "Titular.hpp"

// Definição da classe Conta
class Conta {
private:
    // Atributo estático que armazena a quantidade de contas criadas
    static int QtdContas;

public:
    // Metodo estático que retorna a quantidade de contas
    static int recuperaQtdContas();

private:
    // Atributos privados da classe
    std::string numero;
    Titular titular;

protected:
    // Atributo protegido que armazena o saldo da conta
    float saldo;

public:
    // Enum para representar os possíveis resultados de um saque
    enum ResultadoSaque {
        ValorNegativo, SaldoInsuficiente
    };

    // Construtor que inicializa os atributos da conta
    Conta(std::string numero, Titular titular);

    // Destrutor da classe Conta
    virtual ~Conta();

    // Metodo para realizar um saque, retornando um resultado de saque ou o novo saldo
    std::variant<ResultadoSaque, float> sacar(float valorASacar);

    // Metodo para realizar um depósito
    void depositar(float valorADepositar);

    // Sobrecarga do operador += para realizar um depósito
    void operator+=(float valorADepositar);

    // Metodo que retorna o saldo da conta
    float recuperaSaldo() const;

    // Metodo virtual puro que retorna a taxa de saque
    virtual float taxaDeSaque() const = 0;

    // Sobrecarga do operador < para comparar duas contas com base no saldo
    bool operator<(const Conta& outra);

    // Sobrecarga do operador << para permitir a impressão de uma conta
    friend std::ostream& operator<<(std::ostream& cout, const Conta& conta);
};
