#ifndef QUICKFIND_H
#define QUICKFIND_H
#include <vector>
#include <iostream>
#include <string>

class quickfind
{
private: 
	std::vector<int> id;
public:
	std::string title;
	quickfind(int n);
	int find(int a);
	void Union(int a, int b);
	std::vector<int> getID();
};
#endif 
