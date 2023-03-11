#include"Gerente.hpp"


Gerente::Gerente(Cpf cpf, std::string nome, float salario , diadasemana diadopagamento , std::string senha)
:Funcionario(cpf,nome,salario, diadopagamento), Autenticavel(senha)
{
}

Gerente::~Gerente()
{
}

float Gerente::Bonificacao()const
{
    return (recuperasalario()*0.5);
}