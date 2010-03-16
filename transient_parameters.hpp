
#ifndef transient_parameters_hpp
#define transient_parameters_hpp

class TransientParameters
{
public:
  virtual ~TransientParameters()
  {}

  bool has_value(const std::string &name)
  {
    return true;
  }

  int operator[](const std::string &name)
  {
    return 1;
  }

private:

};

#endif

