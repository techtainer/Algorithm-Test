//array의 각 element 중 divisor로 나누어 떨어지는 값을
//오름차순으로 정렬한 배열을 반환하는 함수, solution을 구현.
//divisor로 나누어 떨어지는 element가 하나도 없다면 배열에 - 1을 담아 반환하면 됩니다.
//
//제한사항
//arr은 자연수를 담은 배열이고
//정수 i, j에 대해 i ≠ j 이면 arr[i] ≠ arr[j] 입니다.
//divisor는 자연수입니다.
//array는 길이 1 이상인 배열입니다.
//
//예시.
//arr->divisor -> return
//[5, 9, 6, 20] -> 5 ->[5, 20]
//[1, 2, 3] -> 10 ->[-1]
//[3, 5, 7, 1, 2, 9] -> 1 ->[1, 2, 3, 5, 7, 9]
//[8, 4, 5, 2, 1] -> 2 ->[2, 4, 8]

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const vector<int> input = { 3,5,7,1,2,9 };
const int divor = 1;

void divider(const vector<int> &arr, const int &dev)
{
	vector<int> result;

	for (auto &e : arr)
	{
		if (e%dev == 0) result.push_back(e);
	}

	if (result.empty()) result.push_back(-1);

	for (auto &e : result)
		cout << e << " ";
	cout << endl;

	std::sort(result.begin(), result.end());

	for (auto &e : result)
		cout << e << " ";
	cout << endl;

}

int main()
{
	divider(input, divor);

	return 0;
}