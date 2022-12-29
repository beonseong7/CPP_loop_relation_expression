#include<iostream>
const int ArSize = 16;
int main() {
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL; // �ش� �迭�� ù��° �ڸ��� �ι�° �ڸ��� 1�� �ʱ�ȭ
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1]; // �ش� i��° �迭�� i-1��° ���� i�� ���Ѱ��� �ִ´�.(���丮��)
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;
	return 0;
}