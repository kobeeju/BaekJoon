/*
https://www.acmicpc.net/problem/1977

문제: M과 N이 주어질 때 M이상 N이하의 자연수 중 완전제곱수인 것을 모두 골라 그 합을 구하고 그 중 최솟값을 찾는 프로그램을 작성하시오. 예를 들어 M=60, N=100인 경우 60이상 100이하의 자연수 중 완전제곱수는 64, 81, 100 이렇게 총 3개가 있으므로 그 합은 245가 되고 이 중 최솟값은 64가 된다.

* 입력:
첫째 줄에 M이, 둘째 줄에 N이 주어진다. M과 N은 10000이하의 자연수이며 M은 N보다 같거나 작다.

* 출력:
M이상 N이하의 자연수 중 완전제곱수인 것을 모두 찾아 첫째 줄에 그 합을, 둘째 줄에 그 중 최솟값을 출력한다. 단, M이상 N이하의 자연수 중 완전제곱수가 없을 경우는 첫째 줄에 -1을 출력한다.

* 예제 입력 1:
60
100

* 예제 출력 1:
245
64

* 예제 입력 2:
75
80

* 예제 출력 2:
-1
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Answer1(int m, int n)
{
    int index = 0;
    int arr[100] = {0};

    for (int i = m; i <= n; i++)
    {
        double s = sqrt(i);
        int si = (int)s;

        if (s > si && s < si + 1)
            continue;
        else
        {
            arr[index] = s;
        }
        index++;
    }

    int sum = 0;
    int min = arr[0];
    for (int i = 0; i <= index; i++)
    {
        sum += pow(arr[i], 2);
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("%d\n%d", sum, min);
}

void Answer2(int m, int n)
{
    /*
     *
     */
    int count = 0;
    int *arr;
    for (int i = 1; i <= 100; i++)
    {
    }
}

int main(int argc, char const *argv[])
{
    /*
     * 생각 1: 'math.h' 라이브러리의 'sqrt()' 함수를 이용한다.
     * 생각 2: M과 N은 10000 이하의 자연수이므로 1 ~ 100까지의 자연수의 제곱수가 해당 범위 안에 들어가는지 반복문을 통해 검사한다.
     */
    int m, n;
    scanf("%d %d", &m, &n);
    Answer1(m, n);

    return 0;
}
