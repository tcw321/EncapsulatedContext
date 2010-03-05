
#ifndef context_hpp
#define context_hpp

#include "context_interface.hpp"
#include "configuration.hpp"

class Context : public ContextInterface
{
private:
  Configuration *configuration_;

public:
  Context(Configuration *config) : configuration_(config)
  {

  }

  Configuration* getConfiguration()
  {
    return 0;
  }
  

};

#endif
