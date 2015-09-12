all:
	g++ -o dynamic main.cpp quickfind.cpp quickUnion.cpp WeightedQuickUnion.cpp WeightedQuickUnionH.cpp -std=c++11
	./dynamic
