
#ifndef context_hpp
#define context_hpp

#include "context_interface.hpp"
#include "transient_parameters.hpp"
#include "configuration.hpp"

class Context : public ContextInterface
{
private:
  Configuration *configuration_;
  TransientParameters *transientParameters_;

public:
  Context(Configuration *config, TransientParameters *tp) : configuration_(config),
							   transientParameters_(tp)
  {

  }

  Configuration* getConfiguration()
  {
    return configuration_;
  }

  TransientParameters* getTransientParameters()
  {
    return transientParameters_;
  }
  

};

#endif
