CXX = g++
CXXFLAGS = -Wall -Wextra

all: primo vetor matriz

primo: primo.cpp
	$(CXX) $(CXXFLAGS) -o primo primo.cpp

vetor: vetor.cpp
	$(CXX) $(CXXFLAGS) -o vetor vetor.cpp

matriz: matriz.cpp
	$(CXX) $(CXXFLAGS) -o matriz matriz.cpp

clean:
	rm -f primo vetor matriz
