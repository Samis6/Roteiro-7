#include <iostream>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"


using namespace std;

int main(){

    int Base, Altura, Raio;
	string Figurx;

	cout << "Este programa calcula a area de Figuras geometricos" << endl;



	while(true){


	cout << "Qual solido voce deseja calcular a area:" << endl;
	cin >> Figurx;

	if(Figurx == "Quadrado" || Figurx == "quadrado"){

	cout << "Digite a base do quadrado?" << endl;
	cin >> Base;
	cout << "Digite a altura do quadrado?" << endl;
	cin >> Altura;

	Quadrado Qua(Figurx, Base, Altura);


	cout << " A area do " << Q.getNome() << " e : " << Q.calcularArea() << endl;
	}

	else if(Figurx == "Triangulo" || Figurx == "triangulo"){
	cout << "Digite a base do triangulo?" << endl;
	cin >> b;
	cout << "Digite a altura do triangulo?" << endl;
	cin >> h;

	Triangulo T(Figurx, b, h);

	cout<<"A area do "<< T.getNome() << " e : " << T.calcularArea() << endl;

	} else if (Figurx == "Circulo" || Figurx == "circulo"){

	cout << "Digite o raio do seu circulo?" << endl;
	cin >> r;

	Circulo C(Figurx, r);

	cout<<"A area do "<< C.getNome() << " e : " << C.calcularArea() << endl;




	}else{
		cout<<"OBG POR USAR NOSSO PROGRAMA"<<endl;
		return 1;
	}

	}





	return 0;
}
