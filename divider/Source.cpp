//array�� �� element �� divisor�� ������ �������� ����
//������������ ������ �迭�� ��ȯ�ϴ� �Լ�, solution�� ����.
//divisor�� ������ �������� element�� �ϳ��� ���ٸ� �迭�� - 1�� ��� ��ȯ�ϸ� �˴ϴ�.
//
//���ѻ���
//arr�� �ڿ����� ���� �迭�̰�
//���� i, j�� ���� i �� j �̸� arr[i] �� arr[j] �Դϴ�.
//divisor�� �ڿ����Դϴ�.
//array�� ���� 1 �̻��� �迭�Դϴ�.
//
//����.
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