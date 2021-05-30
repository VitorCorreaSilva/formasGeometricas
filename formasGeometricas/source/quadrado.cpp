#include "quadrado.hpp"

Quadrado::Quadrado(){}

Quadrado::Quadrado(float lado){
	this->lado = lado;
}

float Quadrado::calcularArea(){
	return pow(lado, 2);
}

float Quadrado::getLado(){
	return lado;
}

float Quadrado::getArea(){
	return area;
}

void Quadrado::setLado(float lado){
	this->lado = lado;
}

void Quadrado::setArea(float area){
	this->area = area;
}