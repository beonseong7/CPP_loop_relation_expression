#include<iostream>
#include<string>
int main() {
	using namespace std;
	cout << "�ܾ� �ϳ��� �Է��Ͻʽÿ�: ";
	string word;
	cin >> word;

	for (int i = word.size() - 1; i >= 0; i--) //i�� word�� ũ�⸸ŭ �ʱ�ȭ�ϰ� 1�� �����ϸ鼭 word�� �� ���ĺ����� ������� ����Ѵ�.
		cout << word[i];
	cout << "\n����.\n";
	return 0;
}