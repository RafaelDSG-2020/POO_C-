#pragma once
#include<string>
#include<iostream>

template<typename Documento>
class Pessoa
{
    protected:
        Documento documento;
        std::string nomeTitular;
        
    public:
        Pessoa(Documento documento, std::string nomeTitular)
        :documento(documento),nomeTitular(nomeTitular)
        {
            verificatamnome();
        }

        std::string recuperaNome()const
        {
            return nomeTitular;
        }

        void verificatamnome()
        {
            if(nomeTitular.size() < 5)
            {
                std::cout<<"Nome Muito Curto"<<std::endl;
                exit(1);
            } // size pega os valores a cada 8 bits ou seja 1 byte que é o tamanho de um char 
        }
        
};
