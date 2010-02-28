
#ifndef context_hpp
#define context_hpp

#include "configuration.hpp"

class Context
{
private:
  Configuration *configuration_;

public:
  Context(Configuration *config) : configuration_(config)
  {

  }

  Configuration* getConfiguration();
  

};

#endif
