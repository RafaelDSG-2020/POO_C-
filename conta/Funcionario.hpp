#pragma once
#include<string>
#include"Pessoa.hpp"
#include"Cpf.hpp"
#include"Diadasemana.hpp"


class Funcionario : public Pessoa
{
     private: 
        float salario;
        // 0- Domingo; 1-Segunda
        short int diadopagamento;
    public:
        Funcionario(Cpf cpf, std::string nome, float salario , diadasemana diadopagamento);
        std::string Recuperanome()const;
        virtual float Bonificacao() const = 0;
        float recuperasalario()const;
   
};


