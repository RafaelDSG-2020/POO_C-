#pragma once
#include<iostream>
#include<string>

class Autenticavel
{
private:
    std::string senha;
public:
    Autenticavel(std::string senha);
    bool autentica(std::string senha);
    
};

