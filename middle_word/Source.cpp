//단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요.
//
//단어의 길이가 짝수라면 가운데 두 글자를 반환하면 됩니다.
//
//제한사항 : s는 길이가 1이상, 100이하인 스트링입니다.
//
//	입출력 예시.
//	입력->출력
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