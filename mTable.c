#include <stdio.h>

#pragma warning ( disable : 4996 )

void main(void)
{
	int n = 0, dan = 0;
	while (1)
	{
		printf("원하는 메뉴를 입력하세요\n 1.구구단 전부 출력 2.원하는 구구단 출력 3. 종료");
		scanf("%d", &n);

		if (n == 1)
		{
			for (int i = 2; i < 10; i+=3)
			{
				for (int j = 1; j < 10; j++)
				{
					for (int k = i; k < i + 3; k++)
					{
						if (k == 10)
							break;
						printf("%2d X %2d = %2d ", k, j, k * j);
					}
					printf("\n");
				}
				printf("\n");
			}
		}
		else if (n == 2)
		{
			printf("원하는 구구단 출력\n");
			scanf("%d", &dan);
			for (int i = 1; i < 10; i++)
			{
				printf("%d X %d = %d\n", dan, i, dan * i);
			}
		}
		else if (n == 3)
			break;
	}
}