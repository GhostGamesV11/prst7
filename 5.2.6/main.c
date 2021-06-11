#include <stdio.h>
#include <stdlib.h>

void kopiujn(char *nap1, char *nap2, int n)
{
    strncpy(nap2, nap1, n);
}

void kopiujnw(wchar_t *nap1, wchar_t *nap2, int n)
{
    wcsncpy(nap2, nap1, n);
}

int main()
{
    char n1[] = "bagienny";
    char n2[15] = "";
    wchar_t n3[] = L"mleczny";
    wchar_t n4[30] = L"";
    printf("%s\n%s\n", n1, n2);
    kopiujn(&n1, &n2, 4);
    printf("%s\n%s\n", n1, n2);
    printf("===========================\n");
    printf("%ls\n%ls\n", n3, n4);
    kopiujnw(&n3, &n4, 3);
    printf("%ls\n%ls\n", n3, n4);
    return 0;
}
