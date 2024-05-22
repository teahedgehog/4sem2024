all: main

main: main_tsp.o parser_tsp.o solver_tsp.o
 g++ -o main_tsp main_tsp.o parser_tsp.o solver_tsp.o

main.o: main_tsp.cpp
 g++ -c main_tsp.cpp

parser.o: parser_tsp.cpp
 g++ -c parser_tsp.cpp

solver.o: solver_tsp.cpp
 g++ -c solver_tsp.cpp

clean:
 rm -f *.o main_tsp
