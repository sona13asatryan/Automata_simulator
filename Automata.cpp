#include "Automata.h"

Automata::Automata(std::string automata_config_file) {
  
  std::ifstream fin(automata_config_file); //reading file
  std::string line; 
  std::getline(fin, line);// reading line by line
  for (int i = 0; i < line.size(); i=3 + i) {
    input+=line[i];
  } // creating input string
  
  std::getline(fin, line);
  for (int i = 0; i<line.size(); i=3 + i) {
    output+=line[i];
  } // creating output string
  
  std::getline(fin, line);
  for (int i = 0; i<line.size(); i=3 + i) {
    state+=line[i];
  } // creating state string
  
  current_state = state[0];
  
  char a, b, x;
  
  for (int i=0; i < state.size(); i++ ) {
    for (int j=0; j < input.size(); j++) {
      fin >> a >> x >> b >> x;
      table[std::make_pair(state[i], input[j])] = std::make_pair(b,a);
    }
  } //reading the configuration table
  
}

Automata::auto_out Automata::run(std::string in_tape) {
  std::string out_tape;
  current_state = state[0]; //reseting start state for every input line
  for (int i=0; i < in_tape.size(); i++) {
    std::pair<char,char> lambda_delta =     table[std::make_pair( current_state,in_tape[i])]; //every step creating the pair of the read symbol and current state to "move" in our table
    out_tape += lambda_delta.second; //adding the the symbol mapped from the read one
    current_state = lambda_delta.first; //updating the current state
  }
  
  return auto_out(out_tape,current_state); //returning final tape and final state 
}
