#ifndef POINTSET_TYPE
#define POINTSET_TYPE

#include <vector>
#include "vector_type.h"

class pointset_type{
  std::vector<vector_type> points;
public:
  pointset_type();
  pointset_type(pointset_type&);
  ~pointset_type();
  void add_point(vector_type);
  pointset_type generate_convex_hull();
};

#endif
