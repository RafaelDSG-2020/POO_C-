#include"Funcionario.hpp"
#include"Pessoa.hpp"
#include"Cpf.hpp"
#include<string>


Funcionario::Funcionario(Cpf cpff, std::string nome, float salario,diadasemana diadopagamento)
:Pessoa(cpff,nome),salario(salario)
{
}

std::string Funcionario::Recuperanome()const
{
    return this->nomeTitular;
}


float Funcionario::recuperasalario()const
{
    return this->salario;
}

