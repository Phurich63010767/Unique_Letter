#include<iostream>
using namespace std;

void unique(int i,int s,string x)
{
	while (i < s)
	{
		char* p1 = &x[i];
		if (i == 0)
		{
			cout << x[0];
		}
		if (i > 0)
		{
			if (x[i] != x[i - 1])
			{
				cout << *p1;
			}
		}
		i++;
	}
}

int main()
{
	int s, i = 0;
	string x;
	cout << "Enter letters or numbers: ";
	cin >> x;
	s = x.size();
	cout << "Unique: ";
	unique(i,s,x);

	return 0;
}