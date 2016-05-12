#include <stdio.h>
#include <stdlib.h>

int main() {
	int V[10];

	for (int i = 0; i < 10; i++) {
		printf("Digite um numero inteiro:");
		scanf_s("%d", &V[i]);
	}

	printf("\n");
	for (int i = 0; i + 1 < 10; i++) {
		if (V[i] % V[i + 1] == 0) {
			printf("%d, ", V[i]);
		}
		else {
			printf("O, ");
		}
	}
	printf("O\n\n");
	system("pause");
	return 0;
}