/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <list>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <cmath>

using namespace std;

struct senators
{
	char party;
	int count;
};

bool descending(struct senators s1, struct senators s2)
{
	if(s1.count > s2.count)
		return true;
	else
		return false;
}

bool checkMajority(struct senators* input, int n, int c)
{
	for(int i = 1; i < n; i++)
		if(input[i].count > c)
			return false;

	return true;
}

int main(void)
{
	int t, n, count;
	senators input[26];

	cin >> t;

	for(int i = 1; i <= t; i++)
	{
		cin >> n;

		count = 0;

		for(int j = 0; j < n; j++)
		{
			cin >> input[j].count;
			input[j].party = 'A' + j;
			count += input[j].count;
		}

		string result = "";

		while(count)
		{
			sort(input, input+n, descending);

			if(input[0].count)
			{
				result += input[0].party;
				input[0].count--;
				count--;
			}

			sort(input, input+n, descending);

			if(input[0].count && checkMajority(input, n, (count-1)/2))
			{
				result += input[0].party;
				input[0].count--;
				count--;
			}

			if(count)
				result += " ";
		}

		cout << "Case #" << i << ": " << result << endl;
	}

	return 0;
}
