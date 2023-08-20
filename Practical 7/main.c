#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int v;
    char s[80], s1[80], s2[80];

    printf("Enter nuber from 1 till 5: ");
    scanf("%d", &v);

    switch (v)
    {
    case 1:
        
        printf("Enter string: ");
        scanf("%s", &s);

        s[strcspn(s, "\n")] = '\0';
        int len = strlen(s);
        printf("Result: ");
        for (int i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
        }

        break;

    case 2:

        printf("Enter string: ");
        scanf("%s", &s);

        int nn = 0;
        for (int i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            nn++;
        }
        }
        printf("Result: %d", nn);

        break;

    case 3:

        printf("Enter string: ");
        scanf("%s", &s);

        int ln = 0;
        for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i]) && isascii(s[i])) {
            ln++;
        }
        }
        printf("Result: %d", ln);

        break;
    
    case 4:

        printf("Enter string: ");
        scanf("%s", &s);

        for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
        s[i] = tolower(s[i]);
        }
    }
    printf("Result: %s", s);

        break;

    case 5:

        printf("Enter string: ");
        scanf("%s", &s);

        printf("Enter string 1: ");
        scanf("%s", &s1);

        printf("Enter string 2: ");
        scanf("%s", &s2);

        int ls1 = strlen(s1) - 1;
        int ls2 = strlen(s2) - 1;

        for (int i = 0; s[i] != '\0'; i++) {
        if (strstr(&s[i], s1) == &s[i]) {
            memcpy(&s[i], s2, ls2);
            i += ls2 - 1;
        }
    }
    printf("Result: %s", s);

        break;
    
    default:

        printf("Wrong number!");

        break;
    }

    return 0;
}