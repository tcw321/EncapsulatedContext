
#ifndef context_interface_hpp
#define context_interface_hpp

#include "configuration.hpp"

class ContextInterface
{

public:

  virtual Configuration* getConfiguration() = 0;
  virtual ~ContextInterface()
  {}

};

#endif
