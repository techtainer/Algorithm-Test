// 자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 리턴
// n이 23456이면 [6,5,4,3,2]
// n은 10,000,000,000이하인 자연수

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long long input, tmp;
	vector<int> result;

	cin >> input;
	
	while (true)
	{
		tmp = input;
		tmp = tmp % 10;
		result.push_back(tmp);
		input = input / 10;

		if (input == 0)
			break;
	}

	for (int i = 0; i<result.size(); i++)
		cout << result[i] << " ";
	cout << endl;

	return 0;
}