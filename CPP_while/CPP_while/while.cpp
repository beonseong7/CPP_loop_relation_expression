#include<iostream>
const int ArSize = 20;
int main() {
	using namespace std;
	char name[ArSize];
	cout << "���� �̸��� �Է��Ͻʽÿ�: ";
	cin >> name;
	cout << "������ ���� �̸��� ���ٿ� ���ھ�\n";
	cout << "ASII �ڵ�� �Բ� ǥ���ϸ� �̷����ϴ�. \n";
	int i = 0;
	while (name[i] != '\0') {// ���๮�ڰ� ���ö����� �ݺ�
		cout << name[i] << ": " << int(name[i]) << endl; // �ش� ��ġ�� ���ڸ� �ƽ�Ű�ڵ�� ��ȯ
		i++;
	}
	return 0;
}