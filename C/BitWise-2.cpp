#include  <bits/stdc++.h>
using namespace std;

long long binary(long long numeric)
{
	long long int binary {0};
	long long int i {0};
	while(numeric != 0)
	{
		binary += ((numeric%2)*pow(10,i));
		++i;
		numeric /= 2;
	}
	return binary;
}

long long numeric(long long binary)
{
	long long int numeric {0};
	long long int i {0};
	while(binary != 0)
	{
		numeric += ((binary%10)*pow(2,i));
		++i;
		binary /= 10;
	}
	return numeric;
}

int main(void)
{
	int n, k;
	cin >> n >> k;
	int g;
	zzzzzz
}