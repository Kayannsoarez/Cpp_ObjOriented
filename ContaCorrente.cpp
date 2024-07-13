#include "ContaCorrente.hpp"
#include <iostream>

// Implementação do construtor da classe ContaCorrente
ContaCorrente::ContaCorrente(std::string numero, Titular titular) : Conta(numero, titular) {
}

// Implementação do metodo taxaDeSaque
// Retorna a taxa de saque para ContaCorrente (5%) e imprime uma mensagem
float ContaCorrente::taxaDeSaque() const {
    std::cout << "Chamando método sacar da conta corrente" << std::endl;
    return 0.05;
}

// Implementação do metodo transferePara
// Transfere o valor especificado para outra conta, se o saque for bem-sucedido
void ContaCorrente::transferePara(Conta& destino, float valor) {
    auto resultado = sacar(valor);

    // Se o saque for bem-sucedido (resultado é saldo), deposita o valor na conta de destino
    if (resultado.index() == 1) {
        destino.depositar(valor);
    }
}

// Implementação da sobrecarga do operador +=
// Transfere metade do saldo da conta de origem para esta conta
void ContaCorrente::operator+=(ContaCorrente& contaOrigem) {
    contaOrigem.transferePara(*this, contaOrigem.recuperaSaldo() / 2);
}
