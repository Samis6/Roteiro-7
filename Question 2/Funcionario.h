#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "string"

using namespace std;

class Funcionario{
private:
	int matricula;
	string nome;
	float salario;
public:
	Funcionario();
	Funcionario(int, string, float);
	void setMatricula(int);
	int getMatricula();

	void setNome(string);
	string getNome();

	void setSalario(float);
	virtual float getSalario();
};

#endif
