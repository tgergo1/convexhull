#include "pointset_type.h"

pointset_type::pointset_type(){
  points.clear();
}

pointset_type::pointset_type(pointset_type& in){
  this->points=in.points;
}

pointset_type::~pointset_type(){
  
}

void pointset_type::add_point(vector_type in){
  points.push_back(in);
}

pointset_type pointset_type::generate_convex_hull(){
  pointset_type convex_hull;
  return convex_hull;
}
