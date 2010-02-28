#include <iostream>

#include "runner.hpp"
#include "model1.hpp"
#include "model2.hpp"

#include "configuration.hpp"
#include "context.hpp"

void main()
{
  Runner runner;
  Model1 *model1 = new Model1();
  Model2 *model2 = new Model2();
  Configuration *config = new Configuration();

  runner.add(model1);
  runner.add(model2);
  Context context(config);
  


}
