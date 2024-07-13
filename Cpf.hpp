#pragma once
#include <string>

// Definição da classe Cpf
class Cpf {
private:
    // Atributo privado que armazena o número do CPF
    std::string numero;

public:
    // Construtor explícito que inicializa o número do CPF
    explicit Cpf(std::string numero);

    // Metodo que retorna o número do CPF
    std::string recuperaNumero() const;
};
