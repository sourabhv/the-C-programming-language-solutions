#include <stdio.h>
#define MAXLINE 1000

int _getline(char dest[], int limit);
void copy(char to[], char from[]);

int main() {
    int len, max, templen;
    char line[MAXLINE], temp[MAXLINE];

    while((len = _getline(line, MAXLINE)) > 0) {
        // find real length
        if (line[len-1] != '\n')
            while((templen = _getline(temp, MAXLINE)) > 0) {
                len += templen; // length of rest of parts of line
                if (temp[templen-1] == '\n')
                    break;
            }

        if (len > 80)
            printf("%s", line);
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

void copy(char to[], char from[]) {
    int i = 0;
    while((to[i] = from[i]) != '\0')
        i++;
}
