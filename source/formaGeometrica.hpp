#include <iostream>
using namespace std;

#ifndef formaGeometrica_hpp
#define formaGeometrica_hpp

class FormaGeometrica{
	public:
		FormaGeometrica();
		virtual float calcularArea() = 0;
		float getArea();
		void setArea(float area);
	private:
		float area;
};

#endif