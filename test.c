#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *line = "/*abc\n123\nefg*/";
    
    char *test = strdup(line);
    line++;
    printf("test: %s\n", test);

}