#include<iostream>
#include<cstring>
int main() {
	using namespace std;
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++) { //ch�� a���� ���� ���������� �ƽ�Ű�ڵ�� �Ѵܾ �ø���. �׷��ٰ� word���� mate�� for���� �����Ѵ�.
		cout << word << endl;
		word[0] = ch;
	}
	cout << "������ ���� �Ŀ� �ܾ�� " << word << "�Դϴ�.\n";
	return 0;
}