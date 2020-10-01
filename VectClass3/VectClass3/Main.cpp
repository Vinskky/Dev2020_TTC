#include <iostream>
#include <stdio.h>
#include "vect3.h"

int main()
{
	//constructors
	std::cout << "constructors for 4 types of vectors" << std::endl;
	vect3<float> v1;
	vect3<float> v2(1.0f, 2.0f, 3.0f);
	vect3<float> v3(v1);
	vect3<float> v4(4.0f, 3.0f, 2.0f);
	v1.PrintVector();
	v2.PrintVector();
	v3.PrintVector();
	v4.PrintVector();
	//operator +=
	std::cout << "vect2 += vect4" << std::endl;
	v2 += v4;
	v2.PrintVector();
	//operator -=
	std::cout << "vect4 -= vect2" << std::endl;
	v4 -= v2;
	v4.PrintVector();
	//operator ==
	std::cout << "operator == for vect1 and vect3" << std::endl;
	if (v1 == v3)
		std::cout << "vect1 & vect3 are equals" << std::endl;

	//operator +
	std::cout << "operator + with a new vector (4,5,2) " << std::endl;
	vect3<float> a(4.0f, 5.0f, 2.0f);
	a = v1 + v2;
	a.PrintVector();
	std::cout << "vect4 normalized" << std::endl;
	v4.Normalize();
	a.PrintVector();
	std::cout << "vect4 normalized set to 0" << std::endl;
	a.Zero();
	a.PrintVector();
	std::cout << "cheking if IsZero() method works" << std::endl;
	if (a.IsZero())
		std::cout << "vector a its (0,0,0)" << std::endl;
	std::cout << "distance between vect2 and vect4" << std::endl;
	double distance = v2.DistanceTo(v4);
	std::cout << distance << std::endl;

	getchar();
	return 0;
}
