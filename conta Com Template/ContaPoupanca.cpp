#include"ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string num, Titular titular):Conta(num, titular)
{

}

float ContaPoupanca::taxadesaque()const
{
    std::cout<<"Metodo da Classe ContaPoupança"<<std::endl;
    return 0.03;
}
ContaPoupanca::~ContaPoupanca()
{
    std::cout<<"Destrutor da ContaPoupança"<<std::endl;
}
