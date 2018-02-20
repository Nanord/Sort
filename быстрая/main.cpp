#include <iostream>

void quickSort(int *a, int N);

int main(int argc, char const *argv[])
{
	int a[] = {8,6,4,2,7,3,1};
	int N = 7;
	quickSort(a, N);
	for (int i = 0; i < 7; ++i)
	{
		std::cout << a[i];
	}

	return 0;
}

void quickSort(int *a, int N)
{
	int i = 0, j = N - 1;
	int temp, p;
	p = a[N/2];
	do 
	{
		while(a[i] < p) i++;
		while(a[j] > p) j--;
		if(i <= j) 
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	} while(i <= j);
	if(j > 0) quickSort(a, i);
	if(N > i) quickSort(a + i, N-i);
}