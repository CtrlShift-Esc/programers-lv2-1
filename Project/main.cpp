#include <string>
#include <vector>
#include <sstream>
//#include <algorithm>

using namespace std;

string solution(string s) {
	string answer = "";
	stringstream ss(s);
	string out;
	int min = 9999999, max = -9999999;
	while (getline(ss, out, ' '))
	{
		int idx = 0;
		if (out[0] == '-')
			idx = 1;

		int n = stoi(out.substr(idx, out.length()));
		if (idx)
			n *= -1;
		if (min > n)
			min = n;
		if (max < n)
			max = n;
	}
	answer += to_string(min);
	answer += " ";
	answer += to_string(max);

	return answer;
}

void main()
{
	//test
	//auto ret = solution("-1 -2 -3 -4");
}