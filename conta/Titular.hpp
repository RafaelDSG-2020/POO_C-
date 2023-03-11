#pragma once
#include<string>
#include<iostream>
#include "Cpf.hpp"
#include"Pessoa.hpp"
#include"Autenticavel.hpp"


class Titular:public Pessoa , public Autenticavel
{
    public:
        Titular(Cpf cpf, std::string nome , std::string senha);
};




