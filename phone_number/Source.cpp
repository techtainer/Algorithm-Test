// ��ȭ��ȣ ���ڿ��� �־������� ��ȭ��ȣ �� 4�ڸ��� ������ ������ ���ڴ� *���� ���� ���ڿ��� ����.
// ��ȭ��ȣ ���̴� 4�̻� 20����.

#include<iostream>
#include<string>

using namespace std;

string output(string input)
{
	for (int i=0;i<(input.size()-4);i++)
	{
		input[i] = '*';
	}

	return input;
}

int main()
{
	string input;
	int length;

	cin >> input;
	length = input.size();

	if (length > 4 && length < 20)
		cout << output(input) << endl;
	else
		cout << "Out of range" << endl;

	return 0;
}