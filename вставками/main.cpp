#include <iostream>

void sort(int* a);

int main(int argc, char const *argv[])
{
	int i;
	int *a = new int[4];
	for (i = 0; i < 5; ++i)
	{
		std::cin >> a[i];
	}
	sort(a);
	for (i = 0; i < 5; ++i)
	{
		std::cout << a[i] << "_";
	}
	
	return 0;
}

void sort(int* a)
{
	for (int i = 0; i < 5; ++i)
	{
		int key = a[i];
		
	}
}