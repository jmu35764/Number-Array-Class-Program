#include "NumberArray.h"
#include <iostream>

using namespace std;

NumberArray::NumberArray(int size = MAX_SIZE)
{
	a_size = size;
	
	data = new double[size];

	for (int i = 0; i < size; i++)
	{
		data[i] = 0;
	}

}

/*/NumberArray::~NumberArray();
{
	delete data[];
}*/

void NumberArray::setNumber(int index, double value)
{
	if (index >= 0 && index < a_size)
	{
		data[index] = value;
	}

	else
	{
		cout << "Invalid Index Input" << endl;
	}
}

double NumberArray::getNumber(int index)
{
	if (index >= 0 && index < a_size)
	{
		return data[index];
	}

	else
	{
		cout << "Placeholder for static default value" << endl;
	}
}