#include<iostream>
int main() {
	using namespace std;
	cout << "�� 5���� �հ�� ����� ���մϴ�.\n";
	cout << "�� 5���� �Է��Ͻʽÿ�.\n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++) { // i ����5�� �ʰ��Ҷ����� �ݺ�  
		cout << "�� " << i << ": ";
		cin >> number; //number�� �Է¹ޱ�
		sum += number; // number�� ���� sum�� ����
	}
	cout << "�� 5���� ��� �ԷµǾ����ϴ�.\n";
	cout << "�Է��� �� 5���� �հ�� " << sum << "�Դϴ�.\n";
	cout << "�Է��� �� 5���� ����� " << sum / 5 << "�Դϴ�.\n";
	cout << "�����մϴ�.\n";
	return 0;
}