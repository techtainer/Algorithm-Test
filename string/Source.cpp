// 문자열 s의 길이가 4혹은 6이고, 숫자로만 구성되어 있는 함수
// s가 "a234"면 false, "1234"면 true
// s는 길이가 1이상, 8이하인 문자열
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