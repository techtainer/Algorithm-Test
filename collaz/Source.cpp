//1937�� Collatz�� ����� ���� ����� �� ������,
//�Էµ� ���� ¦�� ��� 2�� ������,
//Ȧ����� 3�� ���ϰ� 1�� ���� ����,
//����� ���� ���� ���� �۾��� 1�� �� ������ �ݺ��� ��� ��� ���� 1�� �ȴٴ� �����Դϴ�.
//
//���� ���, �Էµ� ���� 6 �̶��
//6 -> 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1 �� �Ǿ�
//�� 8�� ���� 1�� �˴ϴ�.
//collatz �Լ��� ����� �Էµ� ���� �� �� ���� 1 �� �Ǵ��� ��ȯ�ϸ� �˴ϴ�.
//��, 500���� �ݺ��ص� 1�� ���� �ʴ´ٸ� - 1 �� ��ȯ�ϸ� �˴ϴ�.

#include<iostream>
#include<string>

using namespace std;

int function(const string &input)
{
	int result = 0;
	int	tmpNum = stoi(input);

	while (tmpNum != 1)
	{
		if (tmpNum % 2 == 0)
			tmpNum /= 2;
		else
		{
			tmpNum *= 3;
			tmpNum++;
		}
		cout << tmpNum << endl;
		result++;

		if(result == 500) 
		{ 
			result = -1;
			break;
		}
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