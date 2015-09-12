#include "WeightedQuickUnion.h"

WeightedQuickUnion::WeightedQuickUnion(int n)
{
	title = "Weighted Quick Union: \n";
	for (int i = 0; i < n; i++)
	{
		id.push_back(i);
		size.push_back(1);
	}
}

int WeightedQuickUnion::find(int a)
{
	
	while (a != id[a])
	{
		a = id[a];
		
	}
	return a; // the root
}

void WeightedQuickUnion::Union(int a, int b)
{
	int aRoot = find(a);
	int bRoot = find(b);
	if (aRoot!=bRoot)
	{
	
		//Based on Size
		if (size[aRoot]>size[bRoot])
		{
			id[bRoot] = aRoot;
			size[aRoot] += size[bRoot];
	
		}
		else 
		{	
			id[aRoot] = bRoot;
			size[bRoot] += size[aRoot];
		
		}
		
	}
	
}

std::vector<int> WeightedQuickUnion::getID()
{
	return id;
}