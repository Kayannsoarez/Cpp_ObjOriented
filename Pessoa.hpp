#pragma once
#include <string>
#include <iostream>

// Definição da classe template Pessoa
template<typename Documento>
class Pessoa {
protected:
    // Atributos protegidos da classe Pessoa
    Documento documento;
    std::string nome;

public:
    // Construtor que inicializa os atributos da classe Pessoa
    Pessoa(Documento documento, std::string nome) : documento(documento), nome(nome) {
        verificaTamanhoDoNome();
    }

    // Metodo que retorna o nome da pessoa
    std::string recuperaNome() const {
        return nome;
    }

private:
    // Metodo que verifica se o nome tem um tamanho mínimo
    void verificaTamanhoDoNome() {
        if (nome.size() < 5) {
            std::cout << "Nome muito curto" << std::endl;
            exit(1);
        }
    }
};
