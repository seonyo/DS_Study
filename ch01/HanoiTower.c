#include <stdio.h>
// n�� ������ ����, a�� ����� ����, b�� ������ ����, c�� ������ ����
void HanoiTower(int n, char a, char b, char c) { 
	if (n == 1) 
		printf("���� %d, %c -> %c\n", n, a,c); //���⼭ n�� ���ǹ�ȣ
	else {
		HanoiTower(n - 1, a, c, b);
		printf("���� %d, %c -> %c\n", n, a, c); //���⼭ n�� ���ǹ�ȣ
		HanoiTower(n - 1, b, a, c);
	}
}
int main(void) {
	int n = 8; //������ ����

	HanoiTower(n, 'A', 'B', 'C');
	return 0;

}