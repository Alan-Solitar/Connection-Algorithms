#ifndef QUICKUNION_H
#define QUICKUNION_H
#include <vector>
#include <string>

class quickUnion
{
private:
	std::vector<int> id;
public:
	std::string title;
	quickUnion(int n);
	int find(int a);
	void Union(int a, int b);
	std::vector<int> getID();
	


};
#endif 


