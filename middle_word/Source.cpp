//�ܾ� s�� ��� ���ڸ� ��ȯ�ϴ� �Լ�, solution�� ����� ������.
//
//�ܾ��� ���̰� ¦����� ��� �� ���ڸ� ��ȯ�ϸ� �˴ϴ�.
//
//���ѻ��� : s�� ���̰� 1�̻�, 100������ ��Ʈ���Դϴ�.
//
//	����� ����.
//	�Է�->���
//	"abcde" -> "c"
//	"qwer" -> "we"

#include<iostream>
#include<string>

using namespace std;

string function(const string &input)
{
	string result;

	if (input.size() % 2 == 0)
	{
		result.push_back(input[(input.size() / 2)-1]);
		result.push_back(input[(input.size() / 2)]);
	}
	else
	{
		result.push_back(input[input.size() / 2]);
	}

	return result;
}

int main()
{
	string input;

	cin >> input;

	cout << function(input) << endl;
	return 0;
}