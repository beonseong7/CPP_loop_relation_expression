#include<iostream>
#include<string>
int main() {
	using namespace std;
	string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++) { //word ���� mate�� �ƴϸ� ��� �ݺ�
		cout << word << endl;
		word[0]=ch;
	}
	cout << "������ ���� �Ŀ� �ܾ�� " << word << "�Դϴ�.\n";
	return 0;
}