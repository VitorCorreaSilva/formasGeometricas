#include <iostream>
#include "circulo.hpp"
#include "quadrado.hpp"

using namespace std;

int main()
{
	Circulo circulo(2);
	circulo.setArea(circulo.calcularArea());
	
	cout << circulo.getArea() << endl;
	cout << "===============" << endl;

	Quadrado quadrado(4);
	quadrado.setArea(quadrado.calcularArea());

	cout << quadrado.getArea() << endl;
	cout << "===============" << endl;



	return 0;
}