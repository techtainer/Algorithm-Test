// ���ڿ� s�� ���̰� 4Ȥ�� 6�̰�, ���ڷθ� �����Ǿ� �ִ� �Լ�
// s�� "a234"�� false, "1234"�� true
// s�� ���̰� 1�̻�, 8������ ���ڿ�
#include <iostream>
#include<string>

using namespace std;

int main()
{
	string input;
	int size;
	bool result = true;

	cin >> input;
	size = input.size();
	if ( size == 4 || size == 6)
	{
		for (int i=0;i<size; i++)
		{
			if (!(input[i] >= '0' && input[i] <= '9'))
			{
				result = false;
				break;
			}
		}

		if (result == false)
			cout << "False" << endl;
		else
			cout << "True" << endl;
	}

	return 0;
}