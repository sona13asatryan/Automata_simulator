#include <string>
#include <fstream>
#include <map>

//auto_out is a class,which is used to output the final tape and the final state; 
class auto_out {
public:
  std::string out_tape;
  char state;

  auto_out(){};
  auto_out(std::string o, char s) {
    out_tape = o;
    state = s;
  }
};


//Automata is the main class;
class Automata : protected auto_out {
public:
  Automata (std::string );
  auto_out run(std::string in_tape);

private:
  std::string input; // input alphabet
  std::string output; // output alphabet
  std::string state; // state alphabet
  std::map < std::pair<char,char> , std::pair<char, char> > table; // configuration table
  char current_state;
};    
