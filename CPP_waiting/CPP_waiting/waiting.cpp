#include<iostream>
#include<ctime>

int main() {
	using namespace std;
	cout << "���� �ð��� �ʴ����� �Է��Ͻʽÿ�: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC; // �����ð��� �ý��� ���� Ŭ�� ���� ��ȯ
	cout << "ī��Ʈ�� �����մϴ�.\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		; // ��ȯ�� Ŭ�ϼ���ŭ ��ٸ���
	cout << "����\a\n";
	return 0;
}