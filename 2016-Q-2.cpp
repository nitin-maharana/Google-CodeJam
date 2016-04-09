/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int t;
	string s;
	int result;
	bool flag;

	cin >> t;

	for(int i = 1; i <= t; i++)
	{
		cin >> s;
		
		result = 0;
		
		if(s[0] == '+')
			flag = true;
		else
			flag = false;

		for(char j : s)
		{
			if(flag)
			{
				if(j == '-')
				{
					flag = false;
					result++;
				}
			}
			else
			{
				if(j == '+')
				{
					flag = true;
					result++;
				}
			}
		}

		if(!flag)
			result++;

		cout << "Case #" << i << ": " << result << endl;
	}

	return 0;
}