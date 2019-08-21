
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int x;

	do
	{
		cin >> x;

	} while ( x <= 0 );

	while ( x >= 0 )
	{
		cout << x << "\n";
		x--;
	}
}
