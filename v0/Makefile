cxx := g++

CXXFLAGS := -Wall -g

TARGET := main

all: $(TARGET)

$(TARGET): main.o
	$(CXX) $(CXXFLAGS) $^ -o $@

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(TARGET) *.o
 