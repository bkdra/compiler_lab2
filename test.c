#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char a[100] = "hello";
    char b[100] = "hello";
    printf("%d", strcmp(a, b));
}