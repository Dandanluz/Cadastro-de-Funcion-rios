#include <iostream>
#include "funcionario.h"
using namespace std;

void Funcionario::setNome(string n){
    nome = n;
};
string Funcionario::getNome(){
    return nome;
}
void Funcionario::setSalarioBase(float s){
    salarioBase = s;
};
float Funcionario::getSalariobase(){
    return salarioBase;
}
void Funcionario::setID(int i){
    id = i;
};
int Funcionario::getID(){
    return id;
}