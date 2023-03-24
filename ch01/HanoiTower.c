#include <stdio.h>
// n은 원판의 개수, a는 출발지 변수, b는 경유지 변수, c는 도착지 변수
void HanoiTower(int n, char a, char b, char c) { 
	if (n == 1) 
		printf("원판 %d, %c -> %c\n", n, a,c); //여기서 n은 원판번호
	else {
		HanoiTower(n - 1, a, c, b);
		printf("원판 %d, %c -> %c\n", n, a, c); //여기서 n은 원판번호
		HanoiTower(n - 1, b, a, c);
	}
}
int main(void) {
	int n = 8; //원판의 개수

	HanoiTower(n, 'A', 'B', 'C');
	return 0;

}