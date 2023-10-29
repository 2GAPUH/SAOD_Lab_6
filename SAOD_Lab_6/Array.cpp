#include "Array.h"

float Array::GetRandoNum(int min, int max)
{

	return float(min + (std::rand() % (max - min + 1)));
}

Array::Array(int size)
{
	while (true)
	{
		this->size = size;
		if (size > 1 && size < 1000) break;
		cout << "Invalid value!";
		cout << "Enter array size: ";
		cin >> size;
	}
	system("cls");
	array = new float[size];
}

void Array::Init()
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter array[" << i << "]: ";
		cin >> array[i];
	}
}

void Array::RandomInit()
{
	seed = time(NULL);
	srand(seed);
	for (int i = 0; i < size; i++)
	{
		array[i] = GetRandoNum(0, 50) / GetRandoNum(0, 50);
	}
}

void Array::Print()
{
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}

void Array::Sort()
{
	int max = 0;
	float buf = 0;
	for (int i = 0; i < size; i++)
	{
		max = i;
		for (int j = i + 1; j < size; j++)
			if (array[max] > array[j])
				max = j;
			
		if (max != i)
		{
			buf = array[i];
			array[i] = array[max];
			array[max] = buf;
		}
	}
}


