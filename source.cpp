#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v(20);
	unsigned long long value;
	size_t len{0};

	cin >> value;

	while (value != 0)
	{
		v[len] = value % 10;
		value /= 10;
		len++;
	}

	sort(v.begin(), v.end());

	for (size_t i{ v.size() - len }; i < v.size(); i++)
		cout << v[i];

	cout << endl;

	int tmp{ v[0] };
	for (size_t i{ len + 1 }; i < v.size(); i++)
	{
		if (v[i] > tmp)
		{
			cout << v[i];
			tmp = v[i];
		}
	}

	return 0;
}
