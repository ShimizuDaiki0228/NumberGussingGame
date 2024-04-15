#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("私が思い浮かべる数を当てましょう。\n");
	printf("その数は1～99のいずれかの整数です。\n");

	srand((unsigned int)time(NULL));
	int _correctAns = rand() % 99 + 1;
	
	int _ans;
	int _count = 0;
	while (1)
	{
		_count++;
		printf("その数は？　");
		scanf("%d", &_ans);
		if (_ans > _correctAns) printf("違います。それより小さな数です。\n");
		else if(_ans < _correctAns) printf("違います。それより大きな数です。\n");
		else
		{
			printf("正解です。あなたは%d回で当てました。", _count);
			break;
		}
	}

	return 0;
}