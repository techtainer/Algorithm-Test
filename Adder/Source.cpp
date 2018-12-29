// 자연수 N이 주어지면 N의 각 자릿수의 합을 구해서 리턴하는 함수
// i.e. N = 2345 이면 2+3+4+5=14

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