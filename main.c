#include <stdio.h>
#define SIZE 4   // 배열의 크기 정의


void square_array(int a[], int size);
void print_array(int a[], int size);

int main(void)
{
    int list[SIZE] = {1, 2, 3, 4};

    print_array(list, SIZE);   
    square_array(list, SIZE);
    print_array(list, SIZE);  

    return 0;
}

// 각 원소를 제곱하는 함수
void square_array(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        a[i] = a[i] * a[i];  // 원본 배열 값이 실제로 변경됨
}

// 배열 출력 함수
void print_array(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%3d", a[i]);
    printf("\n");
}

