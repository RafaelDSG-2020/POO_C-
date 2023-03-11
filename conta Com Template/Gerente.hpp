#pragma once
#include"Funcionario.hpp"
#include"Autenticavel.hpp"
#include<iostream>
#include<string>

class Gerente final: public Funcionario , Autenticavel 
{
private:
    /* data */
public:
    Gerente(Cpf cpf, std::string nome, float salario , diadasemana diadopagamento,std::string senha);
    float Bonificacao() const override;
    ~Gerente();
};

