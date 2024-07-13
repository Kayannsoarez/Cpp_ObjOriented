#include "Conta.hpp"
#include <iostream>

// Inicializa a quantidade de contas com 0
int Conta::QtdContas = 0;

// Implementação do construtor da classe Conta
Conta::Conta(std::string numero, Titular titular) :
    numero(numero),
    titular(titular),
    saldo(0)
{
    // Incrementa a quantidade de contas ao criar uma nova conta
    QtdContas++;
}

// Implementação do destrutor da classe Conta
Conta::~Conta()
{
    std::cout << "Destrutor da conta" << std::endl;
    // Decrementa a quantidade de contas ao destruir uma conta
    QtdContas--;
}

// Implementação do metodo sacar
std::variant<Conta::ResultadoSaque, float> Conta::sacar(float valorASacar)
{
    if (valorASacar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return ValorNegativo;
    }

    float tarifaDeSaque = valorASacar * taxaDeSaque();
    float valorDoSaque = valorASacar + tarifaDeSaque;

    if (valorDoSaque > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return SaldoInsuficiente;
    }

    saldo -= valorDoSaque;

    return saldo;
}

// Implementação do metodo depositar
void Conta::depositar(float valorADepositar)
{
    if (valorADepositar < 0) {
        std::cout << "Não pode depositar valor negativo" << std::endl;
        return;
    }

    saldo += valorADepositar;
}

// Implementação da sobrecarga do operador +=
void Conta::operator+=(float valorADepositar)
{
    depositar(valorADepositar);
}

// Implementação do metodo recuperaSaldo
float Conta::recuperaSaldo() const
{
    return saldo;
}

// Implementação do metodo estático recuperaQtdContas
int Conta::recuperaQtdContas()
{
    return QtdContas;
}

// Implementação da sobrecarga do operador <
bool Conta::operator<(const Conta& outra)
{
    return this->saldo < outra.saldo;
}

// Implementação da sobrecarga do operador <<
std::ostream& operator<<(std::ostream& cout, const Conta& conta)
{
    cout << "Conta: " << conta.numero << ", Titular: " << conta.titular.recuperaNome() << ", Saldo: " << conta.saldo;
    return cout;
}