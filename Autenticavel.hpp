#pragma once
#include <string>

// Definição da classe Autenticavel
class Autenticavel {
private:
    // Atributo privado que armazena a senha
    std::string senha;
public:
    // Construtor que inicializa o atributo senha
    Autenticavel(std::string senha);

    // MEtodo que verifica se a senha passada como parâmetro é igual à senha armazenada
    bool autentica(std::string senha) const;
};
