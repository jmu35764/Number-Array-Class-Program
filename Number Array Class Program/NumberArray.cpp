#include "NumberArray.h"
#include <iostream>

using namespace std;

NumberArray::NumberArray(int size)
{
	a_size = size;
	
	//data = nullptr;
	data = new double[size];

	for (int i = 0; i < size; i++)
	{
		data[i] = 0;
	}

}

NumberArray::~NumberArray()
{
	delete[] data;

	cout << "Memory has been deallocated" << endl;
}

void NumberArray::setNumber(int index, double value)
{
	if (index >= 0 && index < a_size)
	{
		data[index] = value;
	}

	else
	{
		cout << "Invalid Index Input" << endl;
		data[index] = 0;
	}
}

double NumberArray::getNumber(int index) const
{
	if (index >= 0 && index < a_size)
	{
		return data[index];
	}

	else
	{
		//cout << "Placeholder for static default value" << endl;
		return 0.0;
	}
}


double NumberArray::getMin() const
{
	double min_val = data[0];

	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (data[i] < min_val)
		{
			min_val = data[i];
		}
	}

	return min_val;
}

double NumberArray::getMax() const
{
	double max_val = data[0];

	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (data[i] < max_val)
		{
			max_val = data[i];
		}
	}

	return max_val;
}

double NumberArray::getAverage () const
{
	double sum = 0;
	double avg_val;

	for (int i = 0; i < MAX_SIZE; i++)
	{
		sum =+ data[i];
	}

	avg_val = sum / MAX_SIZE;

	return avg_val;

}

void NumberArray::Print() const
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		cout << data[i] << endl;
	}
}