#include "enums.h"

class object_type{
  static unsigned short id_cntr;
  unsigned short id;
public:
  object_type();
  virtual ~object_type();
  virtual double span_to(span_type direction)=0;

};
