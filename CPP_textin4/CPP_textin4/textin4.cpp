#include<iostream>
int main() {
	using namespace std;
	int ch;
	int count = 0;

	while ((ch = cin.get()) != EOF) {//false���ƴ� EOF�� �״�� ����� ctrl+ z�� Ȯ���Ҽ��ִ�.
		cout.put(char(ch));
		++count;
	}
	cout << count << "���ڸ� �о����ϴ�.\n";
	return 0;
}