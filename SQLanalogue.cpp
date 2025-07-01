#include "SQLanalogue.hpp"

#include <string>
#include <vector>
#include <sstream>

void SQLanalogue::requestVerification(const std::string &request){

}

void SQLanalogue::createDataBase(const std::string& dataType){
  std::vector<std::string> tokens;
  std::string token;
  std::istringstream tokenStream(dataType);
  while (std::getline(tokenStream, token, ' ')) {
      tokens.push_back(token);
  }

  for(const std::string data : tokens){
    switch (*data.c_str()) {
      case "INT": 
    
  }
}
