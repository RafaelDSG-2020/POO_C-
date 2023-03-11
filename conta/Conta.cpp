#include "Conta.hpp"
#include "Titular.hpp"
#include <iostream>
#include "Cpf.hpp"

/*Conta::Conta(std::string num, std::string nomeTit ,std::string cpf)
{
    this->numero=num;
    this->cpfTitular=cpf;
    this->nomeTitular=nomeTit;
    this->saldo=0;
};*/
int Conta::numerodecontas=0;


Conta::Conta(std::string num, Titular titular)
:numero(num),titular(titular),saldo(0)
{ 
    numerodecontas++;
}

Conta::~Conta()
{
    numerodecontas--;
    std::cout<<"Destrutor da Conta"<<std::endl;
}

float Conta::taxadesaque()const
{
    std::cout<<"Metodo Taxa da Classe Conta"<<std::endl;
    return 0.05;
}

std::variant <Conta::ResultadodoSaque,float >Conta::sacar(float valorASacar)
{
    if(valorASacar < 0) 
    {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return valornegativo;
    }

    float tarifadeSaque = (valorASacar*taxadesaque());
    float valorDoSaque = (valorASacar+tarifadeSaque);

    if(valorDoSaque > saldo) 
    {
        std::cout << "Saldo insuficiente" << std::endl;
        return Saldoinsuficiente;
    }

        saldo -= valorDoSaque;
        return saldo;
}

void Conta::depositar(float valorADepositar)
{
        if (valorADepositar < 0) 
        {
            std::cout << "Não pode sacar valor negativo" << std::endl;
            return;
        }

        saldo += valorADepositar;
}

void Conta::operator+=(float valorADepositar)
{
    depositar(valorADepositar);
}

float Conta::recuperaSaldo()const
{
    return saldo;
}


void Conta::Getnumero(std::string numconta)
{
    numero=numconta;
}

void Conta::Imprimir_Conteudo()
{
   // std::cout<<"Nome do Titular : "<< titular.SetNometitular() <<std::endl;
    //std::cout<<"CPF do Titular : "<< cpf.Setcpf() <<std::endl;
    std::cout<<"Numero da Conta : "<< numero<<std::endl;
    std::cout<<"Saldo : "<< saldo<<std::endl;
    std::cout<<"Numero de Contas : " << Conta::contanumerodecontas() <<std::endl;
}

int Conta::contanumerodecontas()
{
    return numerodecontas;
}

std::string Conta::SetNumero()
{
    return numero;
}

