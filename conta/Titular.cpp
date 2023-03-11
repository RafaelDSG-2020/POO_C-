#include "Titular.hpp"
#include "Cpf.hpp"
#include"Pessoa.hpp"
#include<string>

Titular::Titular(Cpf cpf, std::string nome, std::string senha)
:Pessoa(cpf,nome),
 Autenticavel(senha)
{
}


