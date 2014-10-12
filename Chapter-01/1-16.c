#include <stdio.h>
#define MAXLINE 1000

int _getline(char dest[], int limit);
void copy(char to[], char from[]);

int main() {
    int len, max, templen;
    char line[MAXLINE], longest[MAXLINE], temp[MAXLINE];

    max = 0;

    while((len = _getline(line, MAXLINE)) > 0) {
        // find real length
        if (line[len-1] != '\n') {
            while((templen = _getline(temp, MAXLINE)) > 0) {
                len += templen; // length of rest of parts of line
                if (temp[templen-1] == '\n') {
                    break;
                }
            }
        }
        // find max line
        if (len > max) {
            max = len;
            copy(longest, line);
        }
        printf("Length: %d\n", len - 1);
    }
    if (max > 0)
        printf("\nLongest line was of length %d\nLine: %s", max, longest);

    return 0;
}

int _getline(char dest[], int limit) {
    int c, i;

    for(i = 0; i < limit - 2 && (c = getchar()) != EOF && c != '\n'; i++) {
        dest[i] = c;
    }
    if (c == '\n') {
        dest[i] = c;
        i++;
    }
    dest[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i = 0;
    while((to[i] = from[i]) != '\0')
        i++;
}
