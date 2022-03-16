#include <iostream>
#include <fstream>
#include "Automata.h"

int main() {
  Automata automata = Automata("config.txt");
  std::string line;
  
  std::ifstream fin("example.txt");
  // In the given example if the input is a valid email then the output tape contains only zeros and the final state is f.
  while(std::getline(fin,line)) {
    std::cout << line << std::endl;
    auto_out a = automata.run(line);
    std::cout << a.out_tape << " " << a.state << std::endl;
  }
  

}
