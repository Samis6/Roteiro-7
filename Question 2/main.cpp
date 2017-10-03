#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

int main(){
	int matr=1, op;
	float salario=1, percentual=1;
	string nome;


	while(true){
		Funcionario Funcionario1(matr, nome, salario);
		Consultor Consultor1(nome, matr, salario, percentual);


		cout << "Que ação voce quer fazer?" << endl;
		cout << "(1) Adicionar Funcionario" << endl;
		cout << "(2) Adicionar 10% no salario do Funcionario" << endl;
		cout << "(3) Adicionar um percentual no salario" << endl;
		cout << "(4) Consultar Funcionario" << endl;
		cout << "(5) Sair" << endl;
		cin >> op;


		if(op == 1){
			cout << "Qual o nome do funcionario?" << endl;
			cin >> nome;
			cout << "Qual o numero de matricula do funcionario?" << endl;
			cin >> matr;
			cout << "Qual o salario deste funcionario (em R$)" << endl;
			cin >> salario;
		}

		if(op == 2){
			cout << "O salario do Funcionario com 10% de acrescimo sera:" << endl;
			cout << Consultor1.getSalario() << endl;
			salario = Consultor1.getSalario();
		}

		if(op == 3){
			cout << "Quantos % de aumento voce quer dar ao funcionario?" << endl;
			cin >> percentual;
			cout << "O salario com reajuste de " << percentual << "%, foi de: " << endl;
			cout << "R$" << Consultor1.getSalario(percentual) << endl;
			salario = Consultor1.getSalario(percentual);
		}

		if(op == 4){
			cout << "Dados do funcionario adicionado." << endl;
			cout << "Nome:       " << Funcionario1.getNome() << endl;
			cout << "Matricula:  " << Funcionario1.getMatricula() << endl;
			cout << "Salario: R$ " << Funcionario1.getSalario() << endl;
		}

		if(op == 5){
			return 1;
		}

	}
	return 0;
}
