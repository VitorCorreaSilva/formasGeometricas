#include "formaGeometrica.hpp"
#include <math.h>

#ifndef circulo_hpp
#define circulo_hpp
#define PI 3.14

class Circulo : public FormaGeometrica{
	public:
		Circulo();
		Circulo(float raio);
		Circulo(float raio, float circunferencia);
		float calcularArea();
		float calcularCircunferencia();
		float getRaio();
		float getCircunferencia();
		float getArea();
		void setRaio(float raio);
		void setCircunferencia(float circunferencia);
		void setArea(float area);
	private:
		float raio;
		float circunferencia;
		float area;
};

#endif