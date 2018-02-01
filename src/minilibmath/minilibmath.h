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
#ifndef KMA_OOP_PREPROCESSING_MINILIBMATH_H
#define KMA_OOP_PREPROCESSING_MINILIBMATH_H

namespace minilib {
	extern const unsigned sqrt_accuracy;

	long double sqrt(const long double n);

	template <typename T>
	T power(const T val, const unsigned pow) {
		T temp_val(val);
		T res(1);
		unsigned temp_pow(pow);
		while (temp_pow) {
			if (temp_pow & 1)
				res *= temp_val;
			temp_val *= temp_val;
			temp_pow >>= 1;
		}
		return (res);
	}
}

#endif //KMA_OOP_PREPROCESSING_MINILIBMATH_H
