
#ifndef model1_hpp
#define model1_hpp

#include "model_interface.hpp"

#include <iostream>

class Model1 : public ModelInterface
{
public:
  virtual void setup(ContextInterface *context) 
  {
    std::cout << "Model1::setup" << std::endl;
  }

  virtual void run()
  {
    std::cout << "Model1::run" << std::endl;
  }

  virtual void close()
  {
    std::cout << "Model1::close" << std::endl;
  }

};

#endif
