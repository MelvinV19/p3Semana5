#ifndef FIGURA_H
#define FIGURA_H
#include <string>
using namespace std;

class Figura{
	private:
	public:
		virtual double getArea()=0;
		virtual double getPerimetro()=0;
		virtual string toString()=0;
};



#endif
	
