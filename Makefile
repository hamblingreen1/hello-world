# Makefile for program hello-world

# Turn on debugging
CXXFLAGS=-g

hello-world:hello-world.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:hello-world
	rm $^

run:hello-world
	./$^
