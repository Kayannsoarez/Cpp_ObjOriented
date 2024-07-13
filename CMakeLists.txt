cmake_minimum_required(VERSION 3.28)
project(Cpp_OO)

set(CMAKE_CXX_STANDARD 17)

add_executable(Cpp_OO main.cpp
        Conta.hpp
        Titular.cpp
        Titular.hpp
        Funcionario.cpp
        Funcionario.hpp
        Cpf.cpp
        Cpf.hpp
        Pessoa.hpp
        ContaPoupanca.cpp
        ContaPoupanca.hpp
        ContaCorrente.cpp
        ContaCorrente.hpp
        Caixa.cpp
        Caixa.hpp
        Gerente.cpp
        Gerente.hpp
        Autenticavel.cpp
        Autenticavel.hpp
        DiaSemana.hpp
        Conta.cpp)
