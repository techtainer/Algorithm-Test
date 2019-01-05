//1937년 Collatz란 사람에 의해 제기된 이 추측은,
//입력된 수가 짝수 라면 2로 나누고,
//홀수라면 3을 곱하고 1을 더한 다음,
//결과로 나온 수에 같은 작업을 1이 될 때까지 반복할 경우 모든 수가 1이 된다는 추측입니다.
//
//예를 들어, 입력된 수가 6 이라면
//6 -> 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1 이 되어
//총 8번 만에 1이 됩니다.
//collatz 함수를 만들어 입력된 수가 몇 번 만에 1 이 되는지 반환하면 됩니다.
//단, 500번을 반복해도 1이 되지 않는다면 - 1 을 반환하면 됩니다.

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