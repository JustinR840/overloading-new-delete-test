#include "dynamicArray2.h"


DynamicArray2::DynamicArray2()
{
	array = new string[10];
	size = 0;
	capacity = 10;
}


DynamicArray2::~DynamicArray2()
{
	delete [] array;
}

int DynamicArray2::length()
{
	return size;
}

string& DynamicArray2::at(int index)
{
	if(index >= 0 && index < size)
	{
		return array[index];
	}
	else
	{
		cerr << "index " << index << " is out of bounds" << endl;
		exit(1);
	}
}

void DynamicArray2::append(string& value)
{
	if(size == capacity)
	{
		// Do resizing
		capacity *= 2;
		string* tmp = new string[capacity];
		for(int i = 0; i < size; i++)
		{
			tmp[i] = array[i];
		}

		delete [] array;
		array = tmp;
	}

	array[size] = value;
	size++;
}

void DynamicArray2::remove(string& value)
{
	for(int i = 0; i < size; i++)
	{
		if(array[i] == value)
		{
			for(int j = i; j < size - 1; j++)
			{
				array[j] = array[j + 1];
			}

			size--;

			if(size < capacity / 2.0)
			{
				capacity *= 0.8;

				if(capacity < 10)
				{
					capacity = 10;
				}

				string* tmp = new string[capacity];
				for(int k = 0; k < size; k++)
				{
					tmp[k] = array[k];
				}

				delete [] array;
				array = tmp;
			}

			return;
		}
	}
}
