// �ڿ��� n�� ������ �� �ڸ� ���ڸ� ���ҷ� ������ �迭 ���·� ����
// n�� 23456�̸� [6,5,4,3,2]
// n�� 10,000,000,000������ �ڿ���

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