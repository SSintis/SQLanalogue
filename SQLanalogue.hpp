#pragma once

#include <string>

struct SQLdata{
  int x;
};

class SQLanalogue {
public:
  void requestVerification(const std::string& request);
  void createDataBase(const std::string& dataType);

private:

};
