#include <iostream>
#include "Figura.h"
#include "Circulo.h"
#include "Rectangulo.h"
#include <typeinfo>
#include <vector>
using namespace std;
int main(){

	//Figura* figura=new Circulo(10);
	Figura* figura=new Rectangulo(10,20);
	cout<<figura->toString()<<" Su area es: "<<figura->getArea();
	cout<<endl;
	vector <Figura*>miVector;
	delete miVector[0];

	delete figura;

	return 0;
}
