all: obj/main.o obj/test.o
	g++ obj/main.o obj/test.o -o main.exe


obj/main.o: src/main.cpp
	g++ -c src/main.cpp -o obj/main.o

obj/test.o: src/test.cpp
	g++ -c src/test.cpp -o obj/test.o