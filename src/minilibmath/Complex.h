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
#ifndef KMA_OOP_PREPROCESSING_COMPLEX_H
#define KMA_OOP_PREPROCESSING_COMPLEX_H

#include "minilibmath.h"

/**
 * This class isn't perfect and could have more inline methods (all "*="-like operator, for ex.),
 * but they were written like that because of main purpose of this project - to show how
 * preprocessor works
 */
class Complex {
public:
	inline Complex(const long double re = 0.0l, const long double im = 0.0l):
			_re(re),
			_im(im)
	{ }

	inline Complex(const Complex &that):
			_re(that._re),
			_im(that._im)
	{ }

	inline Complex&operator=(const Complex &that) {
		this->_re = that._re;
		this->_im = that._im;
	}

	inline ~Complex() { }

	inline long double& re() {
		return this->_re;
	}

	inline long double& im() {
		return this->_im;
	}

	inline const long double& re() const {
		return this->_re;
	}

	inline const long double& im() const {
		return this->_im;
	}

	Complex& operator+=(const Complex &that);

	Complex& operator-=(const Complex &that);

	Complex& operator*=(const Complex &that);

	Complex& operator/=(const Complex &that);

	inline long double abs() const {
		return minilib::sqrt(this->_re * this->_re + this->_im * this->_im);
	}
private:
	long double _re;
	long double _im;
};

inline Complex operator+(const Complex &one, const Complex &another) {
	Complex temp(one);
	return temp += another;
}

inline Complex operator-(const Complex &one, const Complex &another) {
	Complex temp(one);
	return temp -= another;
}

inline Complex operator*(const Complex &one, const Complex &another) {
	Complex temp(one);
	return temp *= another;
}

inline Complex operator/(const Complex &one, const Complex &another) {
	Complex temp(one);
	return temp /= another;
}

#endif //KMA_OOP_PREPROCESSING_COMPLEX_H
