CXX = g++
CXXFLAGS = -Wall -g

OBJS = main.o vector.o

main: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o main

main.o: main.cpp v0/vector.h
	$(CXX) $(CXXFLAGS) -c main.cpp

vector.o: v0/vector.cpp v0/vector.h
	$(CXX) $(CXXFLAGS) -c v0/vector.cpp

clean:
	rm -f *.o main
