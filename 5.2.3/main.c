#include <stdio.h>
#include <stdlib.h>

int porownaj(char *n1, char *n2)
{
    if(strcmp(n1, n2) == 0)
        return 1;
    return 0;
}

int porownajw(wchar_t *n3, wchar_t *n4)
{
    if(wcscmp(n3, n4) == 0)
        return 1;
    return 0;
}

int main()
{
    char n1 = "bagno";
    char n2 = "bagno";
    wchar_t n3[] = L"mleczny";
    wchar_t n4[] = L"mleczny";
    printf("%d\n", porownaj(&n1, &n2));
    printf("%d\n", porownajw(&n3, &n4));
    return 0;
}
