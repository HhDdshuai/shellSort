#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int elemType;
//希尔排序
/*通过增量递减排序，减少关键字移动次数*/
void shellSort(elemType a[],int n){
    int temp;
    for(int gap = n/2;gap > 0;gap /= 2){ //gap之前的关键字均是其所在有序序列的第一个关键字
        for(int i = gap;i < n;i++){
            temp = a[i];
            int j;
            for(j = i;j >= gap && a[j - gap] > temp;j -= gap)
                a[j] = a[j - gap];
            a[j] = temp;
        }
    }
}

int main()
{
    elemType a[] = {0,899,565,68,78,12,9,3,848,925,802,94,454,6465,756,
    5165,87,325,148,699,789,122,784,124,34,588,7,54,697,101,130};
    int len = sizeof(a)/sizeof(elemType);
    shellSort(a,len);
    for(int i = 0;i < len;i++)
        printf("%d ",a[i]);
    return 0;
}
