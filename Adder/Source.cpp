// �ڿ��� N�� �־����� N�� �� �ڸ����� ���� ���ؼ� �����ϴ� �Լ�
// i.e. N = 2345 �̸� 2+3+4+5=14

#include<iostream>

using namespace std;

int output(int in)
{
	int tmp = in;
	int total = 0;

	while (tmp != 0)
	{
		total = total + (tmp % 10);
		tmp = tmp / 10;
	}

	return total;
}

int main()
{
	int input;

	cin >> input;

	cout << output(input) << endl;

	return 0;
}