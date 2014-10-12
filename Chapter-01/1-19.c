#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int _getline(char dest[], int limit);
void copy(char to[], char from[]);
void reverse(char arr[], int len);

int main() {
    int len;
    char line[MAXLINE];

    while((len = _getline(line, MAXLINE)) > 0) {
        reverse(line, line[len-1] == '\n' ? len - 2 : len - 1);
        printf("Line: %s", line);
    }

    return 0;
}

int _getline(char dest[], int limit) {
    int c, i;

    for(i = 0; i < limit - 2 && (c = getchar()) != EOF && c != '\n'; i++)
        dest[i] = c;

    if (c == '\n')
        dest[i++] = c;
    dest[i] = '\0';
    return i;
}

void reverse(char arr[], int len) {
    int i;
    for(i = 0; i <= len / 2; i++)
        arr[i] = arr[i] + arr[len - i] - (arr[len - i] = arr[i]);
}
