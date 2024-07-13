#include <iostream>
#include <string>
#include <variant>
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"
#include "DiaSemana.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Gerente.hpp"

using namespace std;

// Função que exibe o saldo de uma conta
void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

// Função que realiza um saque em uma conta
void RealizaSaque(Conta& conta)
{
    std::variant<Conta::ResultadoSaque, float> resultado = conta.sacar(200);
    if (auto saldo = std::get_if<float>(&resultado)) {
        cout << "Novo saldo da conta: " << *saldo << endl;
    }
}

// Função que realiza o login de um usuário autenticável
void Login(Autenticavel& user, string senha) {
    if(user.autentica(senha)) {
        cout << "Login realizado com sucesso" << endl;
    } else {
        cout << "Senha inválida" << endl;
    }
}

// Função principal
int main()
{
    Titular titular(Cpf("123.456.789-10"), "Kayann", "qwe123");

    ContaPoupanca umaConta("123456", titular);
    umaConta.depositar(1000);
    RealizaSaque(umaConta);

    ExibeSaldo(umaConta);

    Titular outro(Cpf("098.765.432-10"), "Gabrielly", "meow19");
    ContaCorrente umaOutraConta("654321", titular);
    umaOutraConta.depositar(500);
    (Conta&)umaOutraConta += 300;
    RealizaSaque(umaOutraConta);


    ExibeSaldo(umaOutraConta);

    cout << "Número de contas: " << Conta::recuperaQtdContas() << endl;

    DiaSemana segunda = Segunda;

    Gerente funcionarioChefe(Cpf("123.456.789-10"), "Evandro", 3000, segunda, "devop3,14");

    cout << "Nome do funcionário: " << funcionarioChefe.recuperaNome() << endl;

    return 0;
}