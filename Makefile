main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

poem: poem.o
	g++ -o poem poem.o


funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h

poem.o: poem.cpp

clean:
	rm -f main.o funcs.o tests.o poem.o
