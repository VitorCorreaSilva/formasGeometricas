#include "formaGeometrica.hpp"

#ifndef triangulo_hpp
#define triangulo_hpp

class Triangulo : public FormaGeometrica{
	public:
		Triangulo();
		Triangulo(float base, float altura);
		float calcularArea();
		float getBase();
		float getAltura();
		float getArea();
		void setBase(float base);
		void setAltura(float altura);
		void setArea(float area);
	private:
		float base;
		float altura;
		float area;
};

#endif