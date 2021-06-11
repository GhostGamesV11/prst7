#include <stdio.h>
#include <stdlib.h>

void przepisz(char *n1, char *n2)
{
    strcpy(n2, n1);
}

void przepiszw(wchar_t *n3, wchar_t *n4)
{
    wcscpy(n4, n3);
}

int main()
{
    char n1[] = "bagno";
    char n2[6] = "";
    wchar_t n3[] = L"mleczny";
    wchar_t n4[30] = L"";
    printf("%s\n%s\n", n1, n2);
    przepisz(&n1, &n2);
    printf("%s\n%s\n", n1, n2);
    printf("===========================\n");
    printf("%ls\n%ls\n", n3, n4);
    przepiszw(&n3, &n4);
    printf("%ls\n%ls\n", n3, n4);
    return 0;
}
