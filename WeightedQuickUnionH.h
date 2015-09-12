#ifndef WEIGHTEDQUICKUNIONH_H
#define WIGHTEDQUICKUNIONH_H
#include <iostream>
#include <vector>
#include <string>
class WeightedQuickUnionH
{
private:
	std::vector<int> height;
	std::vector<int> id;
public:
	std::string title;
	WeightedQuickUnionH(int n);
	int find(int a);
	void Union(int a, int b);
	std::vector<int> getID();

};

#endif

