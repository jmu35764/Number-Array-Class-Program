
#ifndef NUMARRAY_H
#define NUMARRAY_H

class NumberArray
{
private:

	int a_size;
	double *data = nullptr;
	static const int MAX_SIZE = 12;

public:
	NumberArray(int size = MAX_SIZE);

	~NumberArray();

	void setNumber(int index, double value);

	double getNumber(int index) const;

	double getMin() const;

	double getMax() const;

	double getAverage() const;

	void Print() const;
};

#endif // !NUMARRAY_h
