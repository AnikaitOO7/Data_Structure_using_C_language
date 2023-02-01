#include <iostream>

using namespace std;

int main(){
	int size;
 	cout << "Enter the size of Array = ";
 	cin >> size;

	int array[size];

	for (int i = 0; i < size; i++){

		cout << "Enter " << i+1 << " element = ";
		cin >> array[i];
	}
	for (int i = 0; i < size; i++){

		cout << "Element " << i+1 << " = " << array[i] << endl;
	
	}
	return 0;
}