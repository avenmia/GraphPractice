all: graph.o vertex.o main.cpp 
	g++ -std=c++11 graph.o vertex.o main.cpp -o graph

graph.o: graph.cpp graph.h vertex.o
	g++ -c -std=c++11 graph.cpp -o graph.o

vertex.o: vertex.cpp vertex.h
	g++ -c -std=c++11 vertex.cpp -o vertex.o