#include <iostream>

#include "model1.hpp"
#include "model2.hpp"

#include "configuration.hpp"
#include "context.hpp"

#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void main()
{
  Model1 *model1 = new Model1();
  Model2 *model2 = new Model2();

  vector<ModelInterface *> models;
  models.push_back(model1);
  models.push_back(model2);

  Configuration *config = new Configuration();
  TransientParameters *tp = new TransientParameters();
  ContextInterface *context = new Context(config, tp);

  vector<ModelInterface *>::iterator itr;
  for (itr = models.begin(); itr != models.end(); ++itr)
    (*itr)->setup(context);

  for (itr = models.begin(); itr != models.end(); ++itr)
    (*itr)->run();

  for (itr = models.begin(); itr != models.end(); ++itr)
    (*itr)->close();

  delete config;
  delete tp;
  delete model1;
  delete model2;
  delete context;

}
