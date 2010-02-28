
#ifndef model1_hpp
#define model1_hpp

#include "model_interface.hpp"

class Model1 : public ModelInterface
{
public:
  virtual void setup(Context &context) 
  {}

  virtual void run()
  {}

  virtual void close()
  {}

};

#endif
