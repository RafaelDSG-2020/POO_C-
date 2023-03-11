#include<iostream>
#include<string>
#include"Conta.hpp"
#include"ContaPoupanca.hpp"
#include"ContaCorrente.hpp"
#include"Gerente.hpp"
#include"caixa.hpp"
#include"Titular.hpp"
#include"Pessoa.hpp"
#include"Funcionario.hpp"
#include"Diadasemana.hpp"


using namespace std;

/*
void exibesaldo(const Conta& conta)
{
    cout<<"O Saldo  da Conta é :"<< conta.recuperaSaldo()<< endl;
}

void Realizasaque(Conta& conta)
{
    //std::pair<Conta::ResultadodoSaque,float> resultado = conta.sacar(200);
    /*auto resultado = conta.sacar(200);
    if (resultado.first == Conta::Sucesso)
    {
        cout<<"Novo saldo da conta: " << resultado.second<<endl ;
    }*/
    //auto resultado = conta.sacar(200);
    /*std::variant<Conta::ResultadodoSaque, float> resultado = conta.sacar(200);
    auto saldo = std::get_if<float>(&resultado);
    if (resultado.index() == 1)
    {
        cout<<"Novo saldo da conta: " << std::get<float>(resultado)<<endl ;
    }*/
    /*
    if (std::get<Conta::ResultadodoSaque>(resultado)==Conta::Saldoinsuficiente)
    {
      
    }*/
 /*   
    std::variant<Conta::ResultadodoSaque, float> resultado = conta.sacar(200);
    if (auto saldo = std::get_if<float>(&resultado))
    {
        cout<<"Novo saldo da conta: " << *saldo<<endl ;
        //cout<<"Novo saldo da conta: " << std::get<float>(resultado)<<endl ;
    }
    
    
}*/

void Fazlogin(Autenticavel& alguem ,string senha)
{
    if(alguem.autentica(senha))
    {
        cout<< "Login realizado com Sucesso" << endl;
    }
    else
    {
        cout<< "Senha Invalida" <<endl;
    }
}

ostream& operator<<(ostream& cout,const Conta& conta)
{
    Pessoa titular =conta.titular;
    cout<<"O Saldo da Conta é (operador):"<<conta.recuperaSaldo()<<endl;
    cout<<"O titular da Conta é:"<<titular.recuperaNome();
    return cout;
}

int main()
{
    
    
    
    Titular titular(Cpf("077.315.243-10"),"Rafael","umasenha");
    
    Conta* umaconta = new ContaPoupanca("123",titular);
    umaconta->sacar(0);
    delete umaconta;
    
    ContaCorrente outraconta("1000",titular);

    Gerente umGerente(Cpf("000.000.000-00"),"Rafael",200000,diadasemana::Terca,"12321");
/*
    Conta::ResultadodoSaque resultado = outraconta.sacar(500);
    if (resultado == Conta::Sucesso)
    {

    }*/
    


    /*
    Titular titular();
    Conta umaConta("20220826",Titular(Cpf("077.315.243-10"), "Rafael" ));
    Conta maisuma();
 
    Funcionario funcionario(Cpf("077.315.243-10"),"Rafael Da Silva",1000);
    umaConta.depositar(5000);
    umaConta.sacar(2000);
    exibesaldo(umaConta);
    

    //umaConta.Imprimir_Conteudo();
    //Funcionario funcionario ();

    cout<<"Nome Do Funcionario : " << funcionario.Recuperanome()<< endl;
    */
    
    return 0;
}