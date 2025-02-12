#include     <iostream> 				
#include "util.h"
#include <ctime>
#include "sort.h"
using namespace std;

#define SIZE 20

int main() {



	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	init(array, SIZE, -10, 10);

	cout << "array before bubble sort: " << convert(array, SIZE) << endl;
	
	selected_sort(array, SIZE);

	cout << "array after bubble sort: " << convert(array, SIZE) << endl;



	return 0;
}
