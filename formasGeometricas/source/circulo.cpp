#include "circulo.hpp"

Circulo::Circulo(){}

Circulo::Circulo(float raio){
	this->raio = raio;
}

Circulo::Circulo(float raio, float circunferencia){
	this->raio = raio;
	this->circunferencia = circunferencia;
}

float Circulo::calcularArea(){
	return PI * pow(raio,2); 
}

float Circulo::calcularCircunferencia(){
	return 2 * PI * raio;
}

float Circulo::getRaio(){
	return raio;
}

float Circulo::getCircunferencia(){
	return circunferencia;
}

float Circulo::getArea(){
	return area;
}

void Circulo::setRaio(float raio){
	this->raio = raio;
}

void Circulo::setCircunferencia(float circunferencia){
	this->circunferencia = circunferencia;
}

void Circulo::setArea(float area){
	this->area = area;
}