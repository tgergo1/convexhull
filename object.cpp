#include "object.h"

unsigned short object_type::id_cntr = 0;

object_type::object_type(){
  id==id_cntr++;
}
