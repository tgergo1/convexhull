#include "vector_type.h"

vector_type::vector_type() {
  x = y = z = 0;
}

vector_type::vector_type(double x0, double y0, double z0 = 0) {
  x = x0;
  y = y0;
  z = z0;
}

vector_type vector_type::operator*(double a) {
  return vector_type(x*a, y*a, z*a);
}

vector_type vector_type::operator/(double a) {
  return vector_type(x/a, y/a, z/a);
}

vector_type vector_type::operator+(const vector_type& v) {
  return vector_type(x+v.x, y+v.y, z+v.z);
}

vector_type vector_type::operator-(const vector_type& v) {
  return vector_type(x-v.x, y-v.y, z-v.z);
}

double vector_type::operator*(const vector_type& v) {
  return (x*v.x + y*v.y + z*v.z);
}

vector_type vector_type::operator%(const vector_type& v) {
  return vector_type(y*v.z - z*v.y, z*v.x - x*v.z, x*v.y - y*v.x);
}

inline bool vector_type::operator==(const vector_type& other){
  return (this->x==other.x && this->y==other.y);
}

inline bool vector_type::operator!=(const vector_type& other){
  return !(*this == other);
}

double vector_type::length() {
  return std::sqrt(x*x + y*y + z*z);
}

vector_type vector_type::norm() {
  return vector_type(x/length(), y/length(), z/length());
}
