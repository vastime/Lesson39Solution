#include     <iostream> 				
#include "util.h"
#include <ctime>
#include "sort.h"
using namespace std;

#define SIZE 20

int main() {

	srand(time(NULL));

	int array[SIZE];

	init(array, SIZE,0,100);

	cout << "array before bubble sort: " << convert(array,SIZE) << endl;
	bubble_sort(array, SIZE);
	
	cout << "array after bubble sort: " << convert(array, SIZE) << endl;

	

	return 0;
}
