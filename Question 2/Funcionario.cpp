#include <iostream>
#include "Funcionario.h"

Funcionario::Funcionario(){}

Funcionario::Funcionario(int mat, string n, float sal){
	setMatricula(mat);
	setNome(n);
	setSalario(sal);
}

void Funcionario::setMatricula(int mat){
	if(mat < 0){
		cout << "Erro de matricula" << endl;
	}else{
		matricula = mat;
	}
}

int Funcionario::getMatricula(){
	return matricula;
}

void Funcionario::setNome(string n){
	nome = n;
}

string Funcionario::getNome(){
	return nome;
}

void Funcionario::setSalario(float sal){
	if(sal < 0){
		cout << "Erro no salario" << endl;
	}else{
		salario = sal;
	}
}

float Funcionario::getSalario(){
	return salario;
}
