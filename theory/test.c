#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	// !(A && B) || ( (A && C) && !(B || !C) )
	int A;
	int B;
	int C;
A=0;
B=0;
printf("%d\n",(A && !B));
B=1;
printf("%d\n",(A && !B));
A=1;
B=0;
printf("%d\n",(A && !B));
B=1;
printf("%d\n",(A && !B));

// A     B     C     result
// -------------------------
// 0     0     0       ?
// 0     0     1       ?
// 0     1     0       ?
// 0     1     1       ?
// 1     0     0       ?
// 1     0     1       ?
// 1     1     0       ?
// 1     1     1       ?
	int a[] = {0,0,0,0,1,1,1,1};
	int b[] = {0,0,1,1,0,0,1,1};
	int c[] = {0,1,0,1,0,1,0,1};
	for (int i = 0; i<8;i++){
		A = a[i];
		B = b[i];
		C = c[i];
		printf("index: %d result: %d\n",i,!(A && B) || ( (A && C) && !(B || !C) ) );
	}
	return 0;
}
