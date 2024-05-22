all: main

main: main_KSgen.o parser_KSgen.o solver_KSgen.o
 g++ -o main_KSgen main_KSgen.o parser_KSgen.o solver_KSgen.o

main.o: main_KSgen.cpp
 g++ -c main_KSgen.cpp

parser.o: parser_KSgen.cpp
 g++ -c parser_KSgen.cpp

solver.o: solver_KSgen.cpp
 g++ -c solver_KSgen.cpp

clean:
 rm -f *.o main_KSgen

