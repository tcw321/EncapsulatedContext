
#ifndef configuration_hpp
#define configuration_hpp

class Configuration
{
public:
  virtual ~Configuration()
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

