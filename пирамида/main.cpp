#include <iostream>

struct heap
{
	int heap_size;
	int length;
	int *x;
};

int Left(int i);

int Right(int i);

void Max_Heapify(heap a, int i);

void Build_Max_Heap(heap a);

void Print_heap(heap a);

void Heapsort(heap a);

int main(int argc, char const *argv[])
{
	heap a;
	a.x =new int[4];
	for (int i = 0; i < 5; ++i)
	{
		std::cin >> a.x[i];
		a.length++;
	}
	Heapsort(a);
	Print_heap(a);
	return 0;
}

void Build_Max_Heap(heap a)
{
	a.heap_size = a.length;
	for (int i = a.length / 2; i > 0; --i)
	{
		Max_Heapify(a,i);
	}
}

int Left(int i)
{
	return (2*i);
}

int Right(int i)
{
	return (2*i - 1);
}

void Max_Heapify(heap a, int i)
{
	int largest;
	int l = Left(i);
	int r = Right(i);
	if(l <= a.heap_size && a.x[l] > a.x[i])
	{
		largest = l;
	}
	else largest = i;
	if(r <=a.heap_size && a.x[r] > a.x[largest])
	{
		largest = r;
	}
	if (largest != i)
	{
		int cur = a.x[i];
		a.x[i] = a.x[largest];
		a.x[largest] = cur;
		Max_Heapify(a, largest);
	}
}

void Print_heap(heap a)
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << a.x[i];
	}
	
}

void Heapsort(heap a)
{
	Build_Max_Heap(a);
	for (int i = a.length; i > 1; --i)
	{
		int cur = a.x[1];
		a.x[1] = a.x[i];
		a.x[i] = cur;
		Max_Heapify(a, 1);
	}
}