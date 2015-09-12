#include "WeightedQuickUnionH.h"

WeightedQuickUnionH::WeightedQuickUnionH(int n)
{
	title = "Weighted Quick Union Based on Height: \n";
	for (int i = 0; i < n; i++)
	{
		id.push_back(i);
		height.push_back(1);
	}
}

int WeightedQuickUnionH::find(int a)
{
	while (a != id[a])
	{
		a = id[a];
	}
	return a; // the root
}

void WeightedQuickUnionH::Union(int a, int b)
{
	int aRoot = find(a);
	int bRoot = find(b);
	if (aRoot != bRoot)
	{

		if (height[aRoot] > height[bRoot])
		{
			id[bRoot] = aRoot;
		}
		else if (height[bRoot] > height[aRoot])
		{
			id[aRoot] = bRoot;

		}
		else
		{
			id[aRoot] = bRoot;
			height[bRoot]++;
		}

	}

}

std::vector<int> WeightedQuickUnionH::getID()
{
	return id;
}
