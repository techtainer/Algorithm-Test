// 전화번호 문자열이 주어졌을때 전화번호 뒷 4자리를 제외한 나머지 숫자는 *으로 가린 문자열을 리턴.
// 전화번호 길이는 4이상 20이하.

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