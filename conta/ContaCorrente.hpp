#pragma once 
#include "Conta.hpp"
#include<iostream>

class ContaCorrente final: public Conta
{
private:
public:
    ContaCorrente(std::string num, Titular titular);
    float taxadesaque() const override;
   // void sacar(float valorAsacar) override;// se alguma Classe Herdar de ContaCorrente tem que usar o metodo virtual
    ~ContaCorrente();
    void transferePara(Conta& conta, float valor);
    void operator+=(ContaCorrente& passasaldo);
};


