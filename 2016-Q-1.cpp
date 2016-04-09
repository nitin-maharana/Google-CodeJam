/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>
#include <string>

using namespace std;

void findDigits(int n, int& sum, int& flag)
{
	sum += n;

	string str = to_string(sum);

	for(char i : str)
		flag |= (1 << (i-'0'));
}

int main(void)
{
	int t, n, flag, sum;

	cin >> t;

	for(int i = 1; i <= t; i++)
	{
		cin >> n;
		flag = 0;

		if(n == 0)
		{
			cout << "Case #" << i << ": INSOMNIA" << endl;
			continue;
		}

		sum = 0;
		while((flag + 1) != 1024)
			findDigits(n, sum, flag);

		cout << "Case #" << i << ": " << sum << endl;
	}

	return 0;
}