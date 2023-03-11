#pragma once
#include<iostream>
#include<string>
#include"Funcionario.hpp"
#include"Diadasemana.hpp"
#include"Autenticavel.hpp"

class caixa final: public Funcionario , Autenticavel
{
private:
    /* data */
public:
    caixa(Cpf cpf, std::string nome, float salario, diadasemana diadopagamento, std::string senha);
    float Bonificacao() const override;
    ~caixa();
};

