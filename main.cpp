#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	const int NUM_MAX = 99;
	printf("�����v�������ׂ鐔�𓖂Ă܂��傤�B\n");
	printf("���̐���1�`%d�̂����ꂩ�̐����ł��B\n", NUM_MAX);

	srand((unsigned int)time(NULL));
	int _correctAns = rand() % NUM_MAX + 1;
	
	int _ans;
	int _count = 0;
	while (1)
	{
		_count++;
		printf("���̐��́H�@");
		scanf("%d", &_ans);
		if (_ans > _correctAns) printf("�Ⴂ�܂��B�����菬���Ȑ��ł��B\n");
		else if(_ans < _correctAns) printf("�Ⴂ�܂��B������傫�Ȑ��ł��B\n");
		else
		{
			printf("�����ł��B���Ȃ���%d��œ��Ă܂����B", _count);
			break;
		}
	}

	return 0;
}