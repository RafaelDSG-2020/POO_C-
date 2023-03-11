#pragma once 
#include<string>
#include<variant>
#include<utility>
#include"Titular.hpp"

class Conta
{
    /////Metodo estatico/////
    /* No Metodo public quando vamos deixar um atributo de forma que ele nao pertença a 
    cada classe criadas devemos colocar o static. 
    Desta forma precisamos apaenas inicar o arquivo aqui e em 
    conta.cpp fazer com quem tenha uma chamada de int Conta::numerodecontas=0; 
    e adicionar no local que todas a contas vao passar um local que faça esse contador ser acrescentado
    public:
    static int numerodecontas;*/
    public:
        enum ResultadodoSaque
        {
           valornegativo,Saldoinsuficiente
        };
    private:
        std::string numero;        
        static int numerodecontas;
        Titular titular;


    protected:
        float saldo;
            
    public:
        Conta(std::string numero, Titular titular);
        float recuperaSaldo()const;
        static int contanumerodecontas();
        std::variant <ResultadodoSaque,float >sacar(float valorASacar);
        //std::pair <ResultadodoSaque,float >sacar(float valorASacar);
        //virtual void sacar(float valorASacar);
        void depositar(float valorADepositar);
        void operator+=(float valorADepositar);
        void Getnumero(std::string numeroconta);    
        void Imprimir_Conteudo();
        std::string SetNumero();
        virtual ~Conta();
        virtual float taxadesaque() const = 0;
        friend  std::ostream& operator<<(std::ostream& cout,const Conta& conta);

};
