/*
https://www.acmicpc.net/problem/10807

문제: 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.

* 입력:
첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 둘째 줄에는 정수가 공백으로 구분되어져있다. 셋째 줄에는 찾으려고 하는 정수 v가 주어진다. 입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.

* 출력:
첫째 줄에 입력으로 주어진 N개의 정수 중에 v가 몇 개인지 출력한다.

* 예제 입력 1:
11
1 4 1 2 4 2 4 2 3 4 4
2

* 예제 출력 1:
3

* 예제 입력 2:
11
1 4 1 2 4 2 4 2 3 4 4
5

* 예제 출력 2:
0
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num, find;
    int count = 0;

    scanf("%d", &num);

    int *arr = (int *)malloc(sizeof(int) * num);

    for (int i = 0; i <= num; i++)
    {
        if (i == num)
        {
            scanf("%d", &find);
            for (int j = 0; j < num; j++)
            {
                if (find == arr[j])
                {
                    count++;
                }
            }
        }

        else
        {
            scanf("%d", &arr[i]);
        }
    }
    printf("%d", count);

    free(arr);

    return 0;
}
