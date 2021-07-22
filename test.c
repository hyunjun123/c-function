#include<stdio.h>

int main() {

	int a,b,c,d;
	printf("31게임하기\n");


	for(int i=0; i>31; i++) {

		scanf("%d",&a);
		scanf("%d",&b);

		i = a+b;
	        c = a+a;
		d = b+b;	


	if (i>31) {

		if (c>d) {

			printf("A win\n");
		}
		else {
			printf("B win\n");
		}
	}
    }
}
