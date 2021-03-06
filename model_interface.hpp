
#ifndef model_interface_hpp
#define model_interface_hpp

#include "context.hpp"

class ModelInterface
{
private:
  
public:
  virtual ~ModelInterface()
  {}

  virtual void setup(ContextInterface *context) = 0;
  virtual void run() = 0;
  virtual void close() = 0;
};

#endif
