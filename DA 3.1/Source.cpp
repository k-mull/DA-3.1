#include <iostream>
#include <vector>
#include "HighLander.h"
#include "SuperArray.h"
using namespace std;
int main()
{
	HighLander HighLander1, HighLander2;
	cout << HighLander1.speak() << endl; 
	cout << HighLander1.status() << endl; 


	int newArrNums[] = {1, 2, 3, 4, 5, 6};
    SuperIntArray arr1(newArrNums, 6);
   vector<int> vec = { 10, 20, 30 };
    SuperIntArray arr2(vec);

    arr1.add(6);
    arr1.change(2,10);
    arr2.add(7);
    arr2.change(2, 10);
    cout << "\nMean: " << arr1.getMean()
        << "\nMax: " << arr1.getMax()
        << "\nMin: " << arr1.getMin() << endl;

    SuperIntArray copy = arr1;

    


    cout << arr1.getNums(0) << arr1.getNums(1)
        << arr1.getNums(2) <<
        arr1.getNums(3) << arr1.getNums(4) <<
        arr1.getNums(5) <<
        arr1.getNums(6) << endl; 

    cout << copy.getNums(0) << copy.getNums(1)
        << copy.getNums(2) <<
        copy.getNums(3) << copy.getNums(4) <<
        copy.getNums(5) <<
        copy.getNums(6) << endl;
}
