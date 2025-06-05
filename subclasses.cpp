#include <iostream>
#include "funcionario.h"
using namespace std;

class Desenvolvedor : public Funcionario{
    private:
    int quantidadeDeProjetos;
    public:
    float calcularSalarioFinal()
    {return salarioBase + (500 * quantidadeDeProjetos);}
    void exibirInformacoes(){
        cout << "ID: "<< getID() << endl;
        cout << "Nome: " << getNome() << endl;
        cout << "Tipo: Desenvolvedor" << endl;
        cout << "Projetos: " << quantidadeDeProjetos << endl;
        cout << "Salário base: " << getSalariobase() << endl;
        cout << "Salário final: " << calcularSalarioFinal() << endl;
    };

};
class Gerente : public Funcionario{
    private:
    float bonusMensal;
    public:
    float calcularSalarioFinal()
    {return salarioBase + bonusMensal;}
    void exibirInformacoes(){
        cout << "ID: "<< getID() << endl;
        cout << "Nome: " << getNome() << endl;
        cout << "Tipo: Gerente" << endl;
        cout << "Bonus: " << bonusMensal << endl;
        cout << "Salário base: " << getSalariobase() << endl;
        cout << "Salário final: " << calcularSalarioFinal() << endl;
    };
};
class Estagiario : public Funcionario{
    private:
    int horasTrabalhadas;
    public:
    float calcularSalarioFinal()
    {return salarioBase * (horasTrabalhadas / 160.0);}
     void exibirInformacoes(){
        cout << "ID: "<< getID() << endl;
        cout << "Nome: " << getNome() << endl;
        cout << "Tipo: Estagiário" << endl;
        cout << "Horas Trabalhadas: " << horasTrabalhadas << endl;
        cout << "Salário base: " << getSalariobase() << endl;
        cout << "Salário final: " << calcularSalarioFinal() << endl;
    };
};