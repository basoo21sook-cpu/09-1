#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SIZE 5

int main(void)
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 3, 4, 5};
    int flag_same = 1;   // 같다고 가정하고 시작

    for (i = 0; i < SIZE; i++)
    {
        if (a[i] != b[i])
        {
            flag_same = 0;   // 다르면 플래그 변경
            printf(" %i-th element is diff.\n", i);
        }
    }
	printf("are a and b the same? %i\n",flag_same);
    return 0;
}

