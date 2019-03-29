#include <iostream>


using namespace std;

class DynamicArray
{
	public:
		DynamicArray();
		~DynamicArray();

		int length();
		string& at(int index);
		void append(string& value);
		void remove(string& value);
	private:
		string* array;
		int size;
		int capacity;
};
