#ifndef SUPERARRAY
#define SUPERARRAY
#include <vector>
using namespace std;
class SuperIntArray
{
private:
	int* nums;
	int numberOfNums;
	
public:
	SuperIntArray(int nums [], int size);
	SuperIntArray(int nums);
	SuperIntArray(vector<int> nums);
	~SuperIntArray();

	int getNums(int nums);
	int getNumOfNums(int numberOfNums);

	void setNums(int *newnum, int size);
	

	void add(int num);
	int get(int index);
	void change(int index, int newNum);
	double getMean();
	int getMax();
	int getMin();

	static int getMax(int nums[], int size);
	static int getMin(int nums[], int size);
	static int getMean(int nums[], int size);

	
	SuperIntArray(const SuperIntArray& other);
	
};
#endif
