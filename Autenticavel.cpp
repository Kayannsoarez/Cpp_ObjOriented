#include "Autenticavel.hpp"

// Implementação do construtor da classe Autenticavel
// Inicializa o atributo senha com o valor passado como argumento
Autenticavel::Autenticavel(std::string senha) : senha(senha) {}

// Implementação do método autentica
// Verifica se a senha passada como argumento é igual à senha armazenada
bool Autenticavel::autentica(std::string senha) const {
    return senha == this->senha;
}