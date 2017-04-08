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

int main(void)
{
	int t;
	string input, result;
	string::iterator start, end;
	unsigned long long int j, k, len;

	cin >> t;

	for(int i = 1; i <= t; i++)
	{
		cin >> input;
		len = input.length();

		for(j = len-1ull; j > 0ull; j--) {
			if(input[j-1ull] > input[j]) {
				for(k = j; k < len && input[k] != '9'; k++)
					input[k] = '9';

				input[j-1ull] = input[j-1ull]-1;
			}
		}

		start = input.begin();

		while((*start) == '0')
			start++;

		end = input.end();

		result.assign(start, end);

		cout << "Case #" << i << ": " << result << endl;
	}

	return 0;
}
