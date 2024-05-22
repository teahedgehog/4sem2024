all: main

main: main_KCgen.o parser_KCgen.o solver_KCgen.o
 g++ -o main_KCgen main_KCgen.o parser_KCgen.o solver_KCgen.o

main.o: main_KCgen.cpp
 g++ -c main_Kcgen.cpp

parser.o: parser_KCgen.cpp
 g++ -c parser_KCgen.cpp

solver.o: solver_KCgen.cpp
 g++ -c solver_KCgen.cpp

clean:
 rm -f *.o main_KCgen

