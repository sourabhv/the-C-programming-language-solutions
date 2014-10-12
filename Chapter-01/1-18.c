#include <stdio.h>
#define MAXLINE 1000

int _getline(char dest[], int limit);

int main() {
    int len;
    char line[MAXLINE];

    while((len = _getline(line, MAXLINE)) > 0)
        if (line[0] != '\n' && line[0] != '\0')
            printf("Line: %s", line);

    return 0;
}

int _getline(char dest[], int limit) {
    int c, i, starting = 1;

    for(i = 0; i < limit - 2 && (c = getchar()) != EOF && c != '\n'; i++)
        dest[i] = c;

    while(dest[i-1] == ' ' || dest[i-1] == '\t')
        i--;
    if (c == '\n')
        dest[i++] = c;

    dest[i] = '\0';
    return i;
}
