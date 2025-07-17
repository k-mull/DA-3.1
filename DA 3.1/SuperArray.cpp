#include "SuperArray.h"
#include <vector>
SuperIntArray::SuperIntArray(int nums[], int size)
{
	numberOfNums = size;
	this->nums = new int[size];
	for (int i = 0; i < size; i++)
	{
		this->nums[i]= nums[i];
	};

}
SuperIntArray::SuperIntArray(int nums)
{
	numberOfNums = 0;
	*this->nums = nums;
}
SuperIntArray::SuperIntArray(vector<int> num){
	numberOfNums = num.size();
	nums = new int[numberOfNums];
	for (int i = 0; i < numberOfNums; i++) {
		nums[i] = num[i];
	}
}
SuperIntArray::~SuperIntArray()
{
	delete[] nums;
}

int SuperIntArray::getNums(int num)
{
	
	if (num >= 0 && num < numberOfNums) 
	{
		return nums[num];
	}
}
int SuperIntArray::getNumOfNums(int numberOfNums)
{
	return numberOfNums;
}

void SuperIntArray::setNums(int* newNums, int size) 
{
	delete[] nums;
	numberOfNums = size;
	nums = new int[size];
	for (int i = 0; i < size; i++)
	{
		nums[i] = newNums[i];
	}
}


void SuperIntArray::add(int num)
{
	int* newnums = new int[numberOfNums + 1];
	for (int i = 0; i < numberOfNums; i++) 
	{
		newnums[i] = nums[i];
	}
	newnums[numberOfNums] = num;
	delete[] nums;
	nums = newnums;
	numberOfNums++;
}
int SuperIntArray::get(int index)
{
	
	if (index >= 0 && index < numberOfNums)
		return nums[index];
	
}
void SuperIntArray::change(int index, int newNum)
{
	//nt newNum;
	if (index >= 0 && index < numberOfNums)
		nums[index] = newNum;
}

double SuperIntArray::getMean()
{
	int sum = 0;

	for (int i = 0; i < numberOfNums; i++) {
		sum += nums[i]; 
	}

	return (sum/(numberOfNums*1.0));
}
int SuperIntArray::getMax()
{
	int maxNum = nums[0];
	for (int i = 1; i < numberOfNums; ++i)
	{
		if (nums[i] > maxNum)
		maxNum = nums[i];
		
	}
		return maxNum;
	
}
int SuperIntArray::getMin()
{
	int minNum = nums[0];
	for (int i = 0; i < numberOfNums; i++)
	{
		if (nums[i] < minNum)
			minNum = nums[i];
	}	
	return minNum;

}


int SuperIntArray::getMax(int nums[], int size)
{
	int minNum = nums[0];
	for (int i = 0; i < size; i++)
	{
		if (nums[i] < minNum)
			minNum = nums[i];
	}
	return minNum;
}
 
 int SuperIntArray::getMin(int nums[], int size)
{
	 int minNum = nums[0];
	 for (int i = 0; i < size; i++)
	 {
		 if (nums[i] < minNum)
			 minNum = nums[i];
	 }
	 return minNum;
}
 int SuperIntArray::getMean(int nums[], int size)
 {
	 int sum = 0;
	 for (int i = 0; i < size; ++i)
		 sum += nums[i];
	 return static_cast<double>(sum) / size;
 }

