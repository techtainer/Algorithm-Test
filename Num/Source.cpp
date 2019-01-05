//연속된 자연수 합으로 어떤 숫자를 표현하는 방법이 여러가지 입니다.
//
//예를들어 자연수 15는
//1 + 2 + 3 + 4 + 5 = 15
//4 + 5 + 6 = 15
//7 + 8 = 15
//15 = 15
//로 표현이 가능합니다.
//
//숫자를 입력받아 연속된 수로 표현할 수 있는 케이스의 개수를
//
//반환하는 expression 함수를 완성하면 됩니다.
//
//15가 들어오면 4를 반환하면 됩니다.
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