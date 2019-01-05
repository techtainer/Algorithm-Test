//�Ǻ���ġ ����
//F(0) = 0, F(1) = 1 �϶�,
//2 �̻��� n�� ���Ͽ�
//F(n) = F(n - 1) + F(n - 2) �� ����Ǵ� ��ȭ�� �Դϴ�.
//
//2 �̻��� n�� �ԷµǾ��� ��,
//fibonacci �Լ��� �����Ͽ� n��° �Ǻ���ġ ���� ��ȯ�ϸ� �˴ϴ�.
//
//F(3) = 2
//F(15) = 610
//�� ����ϸ� �˴ϴ�.

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