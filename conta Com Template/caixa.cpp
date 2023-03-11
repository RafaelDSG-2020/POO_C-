#include"caixa.hpp"


caixa::caixa(Cpf cpf, std::string nome, float salario, diadasemana diadopagamento, std::string senha)
:Funcionario(cpf,nome,salario,diadopagamento),Autenticavel(senha)
{
}

caixa::~caixa()
{
}

float caixa::Bonificacao()const
{
    return (recuperasalario() * 0.1);
}