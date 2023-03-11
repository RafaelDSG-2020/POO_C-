#include"Autenticavel.hpp"


Autenticavel::Autenticavel(std::string senha)
{
}

bool Autenticavel::autentica(std::string senha)
{
    return senha == this->senha;
}