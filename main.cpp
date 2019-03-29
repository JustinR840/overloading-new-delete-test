#include <iostream>
#include <fstream>

#include "dynamicArray.h"


using namespace std;


int main()
{
	fstream input("words_alpha.txt");

	if(input.fail())
	{
		cout << "failed to open words_alpha.txt" << endl;
		return 0;
	}

	DynamicArray words;

	string temp;
	while(input >> temp)
	{
		words.append(temp);
	}


	cout << words.length() << endl;
	
	/*
	int i = 0;
	while(words.length() > 10)
	{
		if(i % 1000 == 0)
		{
			cout << words.at(0) << endl;
		}
		i++;
		words.remove(words.at(0));
	}
	*/
	
	return 0;
}
