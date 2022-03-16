# Automata_simulator
Input
a1, a2, a3, a4
b1, b2
q0, q1


b1,q1 | b2,q2 | b1,q0 | b2,q1
b1,q1 | b2,q2 | b1,q0 | b2,q1


Where:
A={a1, a2, a3, a4} - input alphabet,
B={b1, b2} - output alphabet,
Q={q0, q1} - state alphabet.

This program reads the characters from the input tape and outputs new characters on the output tape according to the delta and lambda functions of the automata. The output is the final tape and the final state. You can use this to test wheter your automata works correctly.
Configuration format is described above.
You can see an example [here](https://github.com/sona13asatryan/Automata_simulator/blob/main/config.txt). This automata checks whether the input corresponds to a valid email, if yes the output tape contains only zeros and the final state is f.

