CXX = clang++
CXXFLAGS = -Wall -Werror -std=c++11

BINARY = test
SOURCES = cards deck

export BINARY
export SOURCES

all:
	$(CXX) $(CXXFLAGS) -o  $(BINARY) -c $(SOURCES)

test: all
	./$(BINARY)

.PHONY: clean

clean:
	rm $(BINARY)
