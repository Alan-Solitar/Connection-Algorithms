#ifndef WEIGHTEDQUICKUNION_H
#define WIGHTEDQUICKUNION_H
#include <iostream>
#include <vector>
#include <string>
class WeightedQuickUnion
{
private:

	std::vector<int> id;
	std::vector<int> size; //Based on Size
public:
	std::string title;
	WeightedQuickUnion(int n);
	int find(int a);
	void Union(int a, int b);
	std::vector<int> getID();

};

#endif

