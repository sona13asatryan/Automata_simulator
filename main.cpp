#include <iostream>
#include <fstream>
#include "Automata.h"

int main() {
  Automata automata = Automata("config.txt");
  std::string line;
  
  std::ifstream fin("example.txt");
  // If the input is a valid email there is no one in the string, if there is a 1, than the mail is incorrect.
  while(std::getline(fin,line)) {
    std::cout << line << std::endl;
    auto_out a = automata.run(line);
    std::cout << a.out_tape << " " << a.state << std::endl;
  }
  

}
