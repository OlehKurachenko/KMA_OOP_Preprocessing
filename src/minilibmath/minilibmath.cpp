//
//  Created by Oleh Kurachenko
//         aka soll_nevermind aka okurache
//  on 2018-01-31T23:52:15Z as a part of KMA_OOP_Preprocessing
//  
//  copying code from GitHub doesn't make you smarter,
//  better ask me oleh.kurachenko@gmail.com , I'm ready to help
//  
//  checkout my GitHub https://github.com/OlehKurachenko
//  rate, CV & contacts http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//  
#include "minilibmath.h"

const unsigned minilib::sqrt_accuracy(25);

/**
 * Simplest algorithm, called Babylonian method
 * @param n
 * @return sqrt(n) - square root of n.
 */
long double minilib::sqrt(const long double n) {
	if (n < 0 || n == -1.0 / 0.0 || n == 1.0 / 0.0 || n != n)
		return (0.0 / 0.0);

	unsigned cnt(sqrt_accuracy);
	long double temp(n);

	while (cnt-- > 0)
		temp = (temp + n / temp) / 2;
	return temp;
}