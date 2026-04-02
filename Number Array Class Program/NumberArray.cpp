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