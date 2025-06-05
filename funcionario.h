#ifndef FUNCIONARIIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>
using namespace std;

class Funcionario{
    protected:
        string nome;
        float salarioBase;
    private:
        int id;
    public:
        Funcionario(string n, float s, int i) : nome(n), salarioBase(s), id(i) {}
        void setNome(string n);
        string getNome();
        void setSalarioBase(float s);
        float getSalariobase();
        void setID(int i);
        int getID();

    virtual void exibirInformacoes(){
        cout << "ID: "<< id << endl;
        cout << "Nome: " << nome << endl;
        cout << "Salário Base: " << salarioBase << endl;

    };
    virtual float calcularSalarioFinal() = 0;
};


#endif
