to compile this program:
`g++ -c -o calculator.o Calculator.cpp `

`g++ -c -o main.o main.cpp `

link them together
`g++ -o calc main.o calculator.o -lm`

to execute the program:
`./calc`