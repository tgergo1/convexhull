#ifndef VECTOR_TYPE
#define VECTOR_TYPE

#include <cmath>

struct vector_type {
	double x, y, z;
	vector_type();
	vector_type(double x0, double y0, double z0);
	vector_type operator*(double a);
	vector_type operator/(double a);
	vector_type operator+(const vector_type& v);
	vector_type operator-(const vector_type& v);
	double operator*(const vector_type& v);
	vector_type operator%(const vector_type& v);
	inline bool operator==(const vector_type& other);
	inline bool operator!=(const vector_type& other);
	double length();
	vector_type norm();
};

#endif
