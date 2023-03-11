#include"Pessoa.hpp"
#include<string>

Pessoa::Pessoa(Cpf cpf, std::string nomeTitular)
:cpf(cpf),nomeTitular(nomeTitular)
{
    verificatamnome();
}

std::string Pessoa::recuperaNome()const
{
    return nomeTitular;
}

void Pessoa::verificatamnome()
{
    if(nomeTitular.size() < 5)
    {
        std::cout<<"Nome Muito Curto"<<std::endl;
        exit(1);
    } // size pega os valores a cada 8 bits ou seja 1 byte que é o tamanho de um char 
}