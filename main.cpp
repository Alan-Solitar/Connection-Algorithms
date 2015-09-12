#include <iostream>
#include "quickfind.h"
#include "quickUnion.h"
#include "WeightedQuickUnion.h"
#include "WeightedQuickUnionH.h"

using std::cin;
using std::cout;

template<class temp>
void connectionAlgorithms(temp &t); // will run find and union on each algorithm as needed
void printVector(std::vector<int> v);
int main()
{	
	
	int n; // number of nodes
	int a, b;
	cout << "How many nodes?: ";
	cin >> n;
	quickfind qf(n);
	quickUnion qu(n);
	WeightedQuickUnion wqu(n);
	WeightedQuickUnionH wquh(n);

	connectionAlgorithms(qf);  //Quick Find
	connectionAlgorithms(qu);  //Quick Union
	connectionAlgorithms(wqu); //Weighted Quick Union
	connectionAlgorithms(wquh); //Weighted Quick Union Based on height
}

template<class temp>
void connectionAlgorithms(temp &t)
{
	
	int a, b, counter=0;
	char choice;
	cout << t.title << std::endl;
	cout << "Enter two nodes to see if they are connected.\n"
		"If not they will be connected." << std::endl;
	while ((cin >> a >> b))
	{
		if (t.find(a) == t.find(b))
		{
			cout << a << " and " << b << " are connected. " << std::endl;

		}
		else
		{
			cout << "No connection. Will connected. ";
			t.Union(a, b);
			cout << a << " and " << b << " are connected." << std::endl;
		}
			
		printVector(t.getID());
		
		counter++;
		//prompt user to end algorithm and move onto the next one.
		if (counter % 5 == 0)
		{
			cout << "Finish this algorithm and move onto the next? y/n" 
				"\nYou will be asked again in 5 steps" << std::endl;
			cin >> choice;
			if (choice == 'y')
				break;
		}

		
	}
}

void printVector(std::vector<int> v)
{
	//Prints indexes of array
	for (int i = 0; i < v.size(); i++) 
	{
		cout << i << " ";
	}
	std::cout << std::endl;
	
	//Prints values of array
	for (auto &i : v)   
	{
		cout << i << " ";
	}
	cout << std::endl;
}