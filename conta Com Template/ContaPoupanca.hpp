#pragma once 
#include "Conta.hpp"
#include<iostream>

class ContaPoupanca final: public Conta
{
private:
public:
    ContaPoupanca(std::string num, Titular titular);
    float taxadesaque() const override;
    //void sacar(float valorAsacar)override;
    ~ContaPoupanca();
};


