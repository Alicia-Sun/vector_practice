CXX = g++
CXXFLAGS = -Wall -g

OBJS = main.o vector.o

main: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o main

main.o: main.cpp vector.h
	$(CXX) $(CXXFLAGS) -c main.cpp

vector.o: vector.cpp vector.h
	$(CXX) $(CXXFLAGS) -c vector.cpp

clean:
	rm -f *.o main
