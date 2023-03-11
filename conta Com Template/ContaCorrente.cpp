#include"ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string num, Titular titular):Conta(num, titular)
{

}
ContaCorrente::~ContaCorrente()
{
    std::cout<<"Destrutor da ContaCorrente"<<std::endl;
}

float ContaCorrente::taxadesaque()const
{
    std::cout<<"Metodo Taxa da Classe ContaCorrente"<<std::endl;
    return 0.02;
}

void ContaCorrente::transferePara(Conta& destino, float valor)
{
    
    auto Resultado= sacar(valor);

    //Conta::ResultadodoSaque Resultado= sacar(valor).first;

    if (Resultado.index()==1)
    {
        destino.depositar(valor);
    }
    //else if(Resultado == Saldoinsuficiente)

    /*auto Resultado= sacar(valor);

    if (Resultado.first == Sucesso)
    {
        destino.depositar(valor);
    }*/
    //else if(Resultado == Saldoinsuficiente)
    
    
    
}

void ContaCorrente::operator+=(ContaCorrente& passasaldo)
{
    passasaldo.transferePara(*this,passasaldo.recuperaSaldo());
}
