#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int player = 0, computer = 0;
	int num = 0;
	int brea=0;
	srand((unsigned)time(NULL));


	printf("┌──────────────────┐\n");
	printf("│  배스킨라빈스31 게임 │\n");
	printf("└──────────────────┘\n\n");
	printf(" GAME START!\n");
	printf("※ 1부터 3까지의 수를 입력하시오.\n");


	while (1)
	{
		printf("\n[사용자] 몇 개의 수를 입력하겠습니까? : ");
		scanf("%d", &player);

		if (player > 3 || player <= 0)
		{
			printf("※ 1부터 3까지의 숫자만 입력하시오\n\n");
			continue;
		}

		for (int i = 1; i <= player; i++)
		{
			num++;
			if (num <= 31)
			{
				printf("%d ", num);
			}
		}
			if (num >= 31)
			{
				printf("\n★★★ computer win! ★★★\n");
				brea = 1;
				break;
			}

			computer = (rand() % 3 + 1);
			printf("\n[컴퓨터] :  %d\n", computer);

			for (int i = 0; i < computer; i++)
			{
				num++;
				if (num <= 31)
				{
					printf("%d ", num);
				}
			}
				if (num >= 31)
				{
					printf("\n★★★ player win! ★★★\n");
					brea = 1;
					break;
				}
		if (brea == 1)
		{
			break;
		}
	}
	return 0;



}


printf("집에서만 하기");
