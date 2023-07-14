#include <iostream>
#include <string>
#pragma warning (disable: 4996)
using namespace std;

//function insertion Sort
inline void insertionSort(int Arr[], int number)
{
	for (register int j = 2; j <= number; j++)
	{
		register int key = Arr[j];
		register int i = j - 1;

		while (j >= 0 && Arr[i] > key)
		{
			Arr[i + 1] = Arr[i];
			i--;
		}

		Arr[i + 1] = key;
	}
}

//function to read array 
inline void read(int* Arr, int size)
{
	cout << endl << "read an elements in the array " << endl;
	for (int k = 1; k <= size; ++k)
	{
		cout << "enter number(" << k << "): ";
		cin >> Arr[k];
	}
}

//function to print Array 
inline void printArray(int Arr[], int number)
{
	for (register int i = 1; i <= number; i++)
		cout << Arr[i] << "	";
}


int main(void)
{
	int size;
	cout << endl << "Enter the size of the array :";
	cin >> size;
	int* array = new int[size];
	read(array, size);
	cout << endl << endl << "sorting array using (insertion Sort) " << endl;
	insertionSort(array, size);
	printArray(array, size);
	cout << endl; 
}