#include "quickUnion.h"

quickUnion::quickUnion(int n)
{
	title = "Quick Union: \n";
	for (int i = 0; i < n; i++)
	{
		id.push_back(i);
	}
}

int quickUnion::find(int a) //return root
{
	while (a!=id[a])
	{
		a = id[a];
	}
	return a;

}

void quickUnion::Union(int a, int b)
{
	int aRoot = find(a);
	int bRoot = find(b);
	if (aRoot!=bRoot)
	{
		id[aRoot] = bRoot;
	}
}

std::vector<int> quickUnion::getID()
{
	return id;
}