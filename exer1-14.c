//#include <stdio.h>
//
//int main() {
//	int c ;
//	int alpha[25] = {0};
//	while ((c = getchar())!= EOF) {
//		if (c >= 65 && c <= 90)
//			alpha[c - 65] = alpha[c - 65] + 1;
//		else if(c >= 97 && c <= 122)
//			alpha[c - 97] = alpha[c - 97] + 1;
//	} 
//
//	for (int i = 0; i <= 25; i++) {
//		printf("%c ", i + 65);
//
//		for (int j = 1; j <= alpha[i]; j++)
//			printf("*");
//		printf("\n");
//	}
//
//	return 0;
//}
