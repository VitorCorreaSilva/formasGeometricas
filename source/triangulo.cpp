#include "triangulo.hpp"

Triangulo::Triangulo(){}

Triangulo::Triangulo(float base, float altura){
	this->base = base;
	this->altura = altura;
}

float Triangulo::calcularArea(){
	return (base * altura) / 2;
}

float Triangulo::getBase(){
	return base;
}

float Triangulo::getAltura(){
	return altura;
}

float Triangulo::getArea(){
	return area;
}

void Triangulo::setBase(float base){
	this->base = base;
}

void Triangulo::setAltura(float altura){
	this->altura = altura;
}

void Triangulo::setArea(float area){
	this->area = area;
}