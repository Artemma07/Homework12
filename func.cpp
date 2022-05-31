#include "func.h" 
int Complex::module() {
	return sqrt(pow(re, 2) + pow(im, 2));
}

bool Complex::operator >(const Complex& second) {
	return this->module() > (sqrt(pow(second.re, 2) + pow(second.im, 2)));
}

ostream& operator <<(ostream& first, const Complex& second) {
	first << second.re << " " << second.im;
	return first;
}