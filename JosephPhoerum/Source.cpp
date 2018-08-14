#include <iostream>
#include <limits>
#include <Windows.h>

using namespace std;

int FindMaxPower(int number);


#define MAXNUMBER 513

int main()
{
	cout << "PA | BS" << endl;
	for (int i = 1; i < MAXNUMBER; i++)
	{
		int maxPowerTest = FindMaxPower(i);
		int finalValue;
		int remainder = (i - maxPowerTest);

		if (maxPowerTest == i / 2 || i == 2)
			finalValue = 1;
		else
			finalValue = (remainder * 2) + 1;
		cout << i << " | " << finalValue << endl;
	}
}

int FindMaxPower(int number)
{
	int currentPower = 1;
	while (currentPower < number)
	{
		currentPower *= 2;
	}

	if (currentPower == 1)
		return 0;
	else
		return currentPower / 2;
}