#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "boolean.h"
/*
 * function prototype
 */
// 버블 정렬 알고리즘
void bubbleSort(int value[], int count);

// 배열에서 index가 x인 값과 y인 값의 위치를 서로 바꾸는 알고리즘
void swap(int value[], int x, int y);

int main() {
    int value[8] = {80, 50, 70, 10, 60, 20, 40, 30};
    int count = sizeof(value) / sizeof(int);
    
    bubbleSort(value, count);

    return 0;
}

// 오름 차순으로 버블(bubble) 정렬
void bubbleSort(int value[], int count) {
    // 임시로 index를 저장할 변수
    int temp = 0;

    // 버블(bubble) 정렬 알고리즘
    for(int i = 0; i < count; i++) {
        for(int j = 0; j < count - 1; j++) {
            if(value[j] > value[j + 1]) {
                swap(value, j, j + 1);
            }
        }
        // 1회 정렬된 이후의 배열 요소 출력
        for(int k = 0; k < count; k++)
            printf("%d   ", value[k]);
        printf("\n");
    }
}

// 배열에서 x와 y의 자리를 바꾼다.
void swap(int value[], int x, int y) {
    int temp;
    temp = value[y];
    value[y] = value[x];
    value[x] = temp;
}