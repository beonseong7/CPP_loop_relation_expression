#include<iostream>
#include<string>

int main() {
	using namespace std;
	cout << "�ܾ �ϳ� �Է��Ͻʽÿ�: ";
	string word;
	cin >> word;

	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j) // word���� �������� �ϳ��� temp�� �־  word�պ��� ������ΰ��� �ִ´�. �ܾ ���� �����Ѵٰ� �����ϸ�ȴ�.
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\n����.\n";
	return 0;
}