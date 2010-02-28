
#ifndef runner_hpp
#define runner_hpp

#include "model_interface.hpp"

class Context;

#include <vector>

class Runner
{
private:
  std::vector<ModelInterface *> models_;

public:
  Runner()
  {}

  void add(ModelInterface *model)
  {
    models_.push_back(model);
  }
  void setup(Context *context)
  {

  }

  void run()
  {
  }
  void finish();

};

#endif
