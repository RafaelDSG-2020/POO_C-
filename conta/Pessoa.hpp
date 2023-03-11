#pragma once
#include<string>
#include"Cpf.hpp"


class Pessoa
{
    protected:
        Cpf cpf;
        std::string nomeTitular;
        void verificatamnome();
    public:
        Pessoa(Cpf cpf, std::string nomeTitular);
        std::string recuperaNome()const;
        
};

