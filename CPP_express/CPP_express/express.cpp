#include<iostream>
int main() {
	using namespace std;
	int x;

	cout << "���� ǥ���� x= 100�� ���� ";
	cout << (x = 100) << endl; //x�� 100 ����
	cout << "���� x�� ���� " << x << endl;
	cout << "���� ǥ���� x < 3 �� ��������";
	cout << (x < 3) << endl;
	cout << "���� ǥ���� x > 3�� ��������";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha); // �⺻������ bool���� int������ ��ȯ�ϴ� C++����� ����
	cout << "���� ǥ���� x < 3�� bool����";
	cout << (x < 3) << endl; // false �� 0�� �ǹ�
	cout << "���� ǥ���� x > 3�� bool����";
	cout << (x > 3) << endl; // true �� 1�� �ǹ�
	return 0;
}