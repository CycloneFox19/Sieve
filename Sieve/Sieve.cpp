#include <iostream>
using namespace std;

int main()
{
	bool bNums[500];
	for (int i = 0; i < 500; ++i)
	{
		bNums[i] = true;
	}
	for (int i = 1; i < 500; ++i)
	{
		if (bNums[i])
		{
			for (int j = 2 * i + 1; j < 500; j += i + 1)
			{
				bNums[j] = false;
			}
		}
		else
		{
			continue;
		}
	}
	for (int i = 0; i < 499; ++i)
	{
		if (bNums[i + 1]) cout << i + 2 << endl;
	}
}