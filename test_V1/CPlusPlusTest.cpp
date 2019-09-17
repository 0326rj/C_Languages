#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <climits>
#include <typeinfo>

#define INT_MIN -32768

using namespace std;


double power(double x, double n)
{
	double tmp = 1.0;
	for ( int i = 1; i <= n; i++ )
	{
		tmp *= x;
	}
	return tmp;
}

double power2( double x, double n )
{
	double tmp = 1.0;
	while ( n-- > 0 )
	{
		tmp *= x;
	}
	return tmp;
}

int main()
{
	double x, n;
	cin >> x; cin >> n;
	
	cout << power2( x, n ) << '\n';
}