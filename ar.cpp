#include<iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int irand(int a, int b) {
	return a + rand() % (b - a + 1);
}

void F(int* arr, int N) {
	long int minim = 1000000000;
	int index;
	for (int i = 0; i < N; i++) {
		if (arr[i] < minim) {
			minim = arr[i];
			index = i;
		}
	}
	cout << "Minimum elememt: " << minim << endl;
	cout << "Index of element: " << index << endl;
	cout << "Adress of element: " << &minim << endl;
}

int main() {
	int N = 100;
	int* arr = new int[N];

	srand(time(NULL));

	for (int i = 0; i < N; i++) {
		arr[i] = irand(1, 20);
		cout << arr[i] << " ";
	}
	cout << endl;

	F(arr, 10);
	
	
	delete[] arr;
	return 0;
}

