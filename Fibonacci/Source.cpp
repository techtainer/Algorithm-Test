//피보나치 수는
//F(0) = 0, F(1) = 1 일때,
//2 이상의 n에 대하여
//F(n) = F(n - 1) + F(n - 2) 가 적용되는 점화식 입니다.
//
//2 이상의 n이 입력되었을 때,
//fibonacci 함수를 제작하여 n번째 피보나치 수를 반환하면 됩니다.
//
//F(3) = 2
//F(15) = 610
//을 출력하면 됩니다.

#include<iostream>
#include<string>

using namespace std;

int function(const string &input)
{
	int result = 0;
	int tmpNum = stoi(input);
	int *arr = new int[tmpNum + 1];
	arr[0] = 0;
	arr[1] = 1;
	
	for (int i = 2; i <= tmpNum; i++)
		arr[i] = arr[i - 1] + arr[i - 2];

	result = arr[tmpNum];

	delete[] arr;

	return result;
}

int main()
{
	string input;

	cin >> input;

	cout << function(input) << endl;
	return 0;
}