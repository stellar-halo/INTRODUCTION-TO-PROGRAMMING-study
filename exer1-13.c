//#include <stdio.h>
//
//int main() {
//	int ch = 0;
//	int len = 0;
//	int max = 0;
//	int num[30] = { 0, };
//	while ((ch = getchar()) != EOF) {
//		if ((ch == ' ') || (ch == '\n')) {
//			if (max <= len)
//				max = len;
//			num[len] = (num[len] + 1);
//			len = 0;
//		}
//		else {
//			len++;
//		}		
//	}
//	if (max <= len)
//		max = len;
//	num[len] = (num[len] + 1);
//
//	for (int idx = 1; idx <= max; idx++) {
//		printf("%d ", idx );
//		for (int tmp = 0; tmp < num[idx]; tmp++)
//			printf("*");
//		printf("\n");
//	}
//}