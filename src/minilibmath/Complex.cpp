//
//  Created by Oleh Kurachenko
//         aka soll_nevermind aka okurache
//  on 2018-01-31T23:17:30Z as a part of KMA_OOP_Preprocessing
//  
//  copying code from GitHub doesn't make you smarter,
//  better ask me oleh.kurachenko@gmail.com , I'm ready to help
//  
//  checkout my GitHub https://github.com/OlehKurachenko
//  rate, CV & contacts http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//  
#include "Complex.h"

Complex& Complex::operator+=(const Complex &that) {
	this->_re += that._re;
	this->_im += that._im;
	return *this;
}

Complex& Complex::operator-=(const Complex &that) {
	this->_re -= that._re;
	this->_im -= that._im;
	return *this;
}

Complex& Complex::operator*=(const Complex &that) {
	long double temp_im(this->_im * that._re + this->_re * that._im);
	this->_re = this->_re * that._re - this->_im * that._im;
	this->_im = temp_im;
	return *this;
}

Complex& Complex::operator/=(const Complex &that) {
	long double that_absolute_val_squared(that._re * that._re + that._im * that._im);
	long double temp_im((this->_im * that._re - this->_re * that._im) / that_absolute_val_squared);
	this->_re = (this->_re * that._re + this->_im * that._im) / that_absolute_val_squared;
	this->_im = temp_im;
	return *this;
}
