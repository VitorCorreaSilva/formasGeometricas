#include "formaGeometrica.hpp"
#include <math.h>

#ifndef quadrado_hpp
#define quadrado_hpp

class Quadrado : public FormaGeometrica{
	public:
		Quadrado();
		Quadrado(float lado);
		float calcularArea();
		float getLado();
		float getArea();
		void setLado(float lado);
		void setArea(float area);
	private:
		float lado;
		float area;
};

#endif