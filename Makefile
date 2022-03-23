CXX=g++
CXXFLAGS=-g -std=c++14 -Wall -pedantic -O3
BIN=build/bench

SRC=$(wildcard *.cpp)
OBJ=$(SRC:%.cpp=%.o)

all: $(OBJ)
	mkdir -p build
	$(CXX) -o $(BIN) $^

%.o: %.c
	$(CXX) $@ -c $<

clean:
	rm -f *.o
	rm $(BIN)