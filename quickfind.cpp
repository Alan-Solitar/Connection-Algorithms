#include "quickfind.h"

quickfind::quickfind(int n)
{
	title = "Quick Find: \n";
	for (int i = 0; i < n; i++)
	{
		id.push_back(i);
	}
}

int quickfind::find(int a)
{
	return id[a];
}

void quickfind::Union(int a, int b)
{
	int aID = id[a];
	int bID = id[b];
	if (aID!=bID)
	{
		for (int i = 0;i<id.size();i++)
		{
			if (id[i] == bID)
			id[i] = aID;
		}
	}
}

std::vector<int> quickfind::getID()
{
	return id;
}