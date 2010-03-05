
#ifndef model2_hpp
#define model2_hpp

#include "model_interface.hpp"

#include <iostream>

class Model2 : public ModelInterface
{
public:
  virtual void setup(ContextInterface *context) 
  {
    std::cout << "Model2::setup" << std::endl;
  }

  virtual void run()
  {
    std::cout << "Model2::run" << std::endl;
  }

  virtual void close()
  {
    std::cout << "Model2::close" << std::endl;
  }

};

#endif
