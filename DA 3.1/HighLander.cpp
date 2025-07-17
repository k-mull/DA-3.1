#include "HighLander.h"
#include <string>
int HighLander::count = 0;
HighLander::HighLander()
{
	name = "Bart";
	count++;
}
HighLander::HighLander(string name) 
{
	this->name = name;

}
HighLander::~HighLander()
{
	count--;
}
string HighLander::speak()
{
	return "There can only be one. But now there are " + to_string(count);
}
string HighLander::status()
{
	if (count == 1)
		return "immortal";
	if (count > 1)
		return "murderous";
}
