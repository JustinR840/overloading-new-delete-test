#include <iostream>


using namespace std;

class DynamicArray2
{
	public:
		DynamicArray2();
		~DynamicArray2();

		int length();
		string& at(int index);
		void append(string& value);
		void remove(string& value);
	private:
		string* array;
		int size;
		int capacity;
};
