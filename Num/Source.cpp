//���ӵ� �ڿ��� ������ � ���ڸ� ǥ���ϴ� ����� �������� �Դϴ�.
//
//������� �ڿ��� 15��
//1 + 2 + 3 + 4 + 5 = 15
//4 + 5 + 6 = 15
//7 + 8 = 15
//15 = 15
//�� ǥ���� �����մϴ�.
//
//���ڸ� �Է¹޾� ���ӵ� ���� ǥ���� �� �ִ� ���̽��� ������
//
//��ȯ�ϴ� expression �Լ��� �ϼ��ϸ� �˴ϴ�.
//
//15�� ������ 4�� ��ȯ�ϸ� �˴ϴ�.
#include<iostream>
#include<string>

using namespace std;

int function(const string &input)
{
	int result = 0;
	int tmpNum = stoi(input);
	int tmpTarget=1;
	int tmpAdder = tmpTarget;
	int tmpAdder2 = tmpTarget;

	while (true)
	{
		if (tmpAdder > tmpNum)
		{
			tmpTarget++;
			tmpAdder = tmpTarget;
			tmpAdder2 = tmpTarget;
		}
		if (tmpAdder == tmpNum)
		{
			result++;
			tmpTarget++;
			tmpAdder = tmpTarget;
			tmpAdder2 = tmpTarget;
			cout << "----------------" << endl;
		}
		if (tmpTarget >= tmpNum)
		{
			break;
		}
		tmpAdder2++;
		cout << tmpAdder << "+" << tmpAdder2 << " " << tmpTarget << endl;
		tmpAdder = tmpAdder + tmpAdder2;
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