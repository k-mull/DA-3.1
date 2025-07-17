#ifndef HIHGLANDER
#define HIGHLANDER
#include <iostream>
using namespace std;
class HighLander
{
private:
	string name;
	static int count;
public:
	HighLander();
	HighLander(string name);
	~HighLander();
	static string speak();
	string status();
	

};
#endif

