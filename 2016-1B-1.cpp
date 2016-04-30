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

void findEachDigit(string& input, string& result, string digit, char number)
{
	size_t index;

	index = input.find(digit[0]);

	while(index != string::npos)
	{
		result += number;

		input.erase(index, 1);

		for(int i = 1; i < digit.length(); i++)
		{
			index = input.find(digit[i]);
			input.erase(index, 1);
		}

		index = input.find(digit[0]);
	}
}

void letsCalculate(string& input, string& result)
{
	findEachDigit(input, result, "ZERO", '0');
	findEachDigit(input, result, "WTO", '2');
	findEachDigit(input, result, "XSI", '6');
	findEachDigit(input, result, "UFOR", '4');
	findEachDigit(input, result, "GEIHT", '8');
	findEachDigit(input, result, "ONE", '1');
	findEachDigit(input, result, "THREE", '3');
	findEachDigit(input, result, "FIVE", '5');
	findEachDigit(input, result, "VSEEN", '7');
	findEachDigit(input, result, "NINE", '9');
}

int main(void)
{
	int t;
	string input, result;

	cin >> t;

	for(int i = 1; i <= t; i++)
	{
		result = "";

		cin >> input;

		letsCalculate(input, result);

		sort(result.begin(), result.end());

		cout << "Case #" << i << ": " << result << endl;
	}

	return 0;
}