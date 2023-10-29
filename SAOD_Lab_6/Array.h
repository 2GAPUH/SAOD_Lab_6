#pragma once
#include <iostream>
using namespace std;

class Array
{
private:
	float* array = nullptr;
	int size = 0;
	int seed = 0;
	float GetRandoNum(int min, int max);

public:
	Array(int size);
	void Init();
	void Print();
	void Sort();
	void RandomInit();
};

