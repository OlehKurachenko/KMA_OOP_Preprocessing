//
//  Created by Oleh Kurachenko
//         aka soll_nevermind aka okurache
//  on 2018-02-01T11:36:02Z as a part of KMA_OOP_Preprocessing
//  
//  copying code from GitHub doesn't make you smarter,
//  better ask me oleh.kurachenko@gmail.com , I'm ready to help
//  
//  checkout my GitHub https://github.com/OlehKurachenko
//  rate, CV & contacts http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//  
#include "minilibmath/Complex.h"
#include "minilibmath/minilibmath.h"

/**
 * This main function is written for presentation purposes, that is why
 * it never communicated with OS, and it's result are unused
 * @return exitcode
 */
int main() {
	Complex a, b(34), c(2, -3);
	Complex d(a);
	Complex e(a + c);

	Complex t(minilib::power(c, 6));
	Complex t2(minilib::power(45, 23));
	d += 15;
	b = a + 56 + c;
	return 0;
}
