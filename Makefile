CC=g++
OUTPUT=main
RM=rm
VERSION=-std=c++11

main: main.o system.o error.o
	$(CC) main.o error.o -o $(OUTPUT) $(VERSION)

main.o: main.cpp 
	$(CC) -c main.cpp -o main.o $(VERSION)

system.o: system.h
	$(CC) -c main.cpp -o main.o $(VERSION)

error.o: error.cpp error.h
	$(CC) -c error.cpp -o error.o $(VERSION)

clean:
	$(RM) *.o $(OUTPUT)

run:
	./$(OUTPUT)