#include <iostream>
#include <float.h>

using namespace std;

#include <stdio.h>

int main(void)
{
    float R;
    printf("R:");
    scanf("%f", &R);

    float L = 2 * 3.14 * R;
    printf("V:%f\n", L);

    float S = 3.14 * R * R;
    printf("S:%f\n", S);

    return 0;
}