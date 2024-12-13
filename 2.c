#include <stdio.h>
#include <string.h>

// Function to read a string
void read(char *s) {
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';  // Remove trailing newline
}

// Function to copy one string into another
void strcopy(char *s1, char *s2) {
    int i;
    for (i = 0; s2[i] != '\0'; i++)
        s1[i] = s2[i];
    s1[i] = '\0';
}

// Function to match and replace a pattern in a string
int matchnreplace(char *str, char *pat, char *rep) {
    char ans[100];
    int i = 0, m = 0, c = 0, j = 0, flag = 0, k;

    while (str[c] != '\0') {
        if (str[m] == pat[i]) {
            i++;
            m++;
            if (pat[i] == '\0') {
                flag = 1;
                for (k = 0; rep[k] != '\0'; k++, j++)
                    ans[j] = rep[k];
                c = m;  // Update `c` to the end of the matched pattern
            }
        } else {
            i = 0;
            c++;
            m = c;
            ans[j] = str[c - 1];
            j++;
        }
    }

    // Copy the remaining part of the string
    while (str[c] != '\0') {
        ans[j++] = str[c++];
    }

    ans[j] = '\0';
    strcopy(str, ans);
    return flag;
}

int main() {
    char str[100], pat[20], rep[20];
    int flag = 0;

    printf("Enter the string: ");
    read(str);

    printf("Enter the pattern: ");
    read(pat);

    printf("Enter the replacement string: ");
    read(rep);

    flag = matchnreplace(str, pat, rep);

    if (flag == 1)
        printf("The updated string is: %s\n", str);
    else
        printf("The pattern was not found.\n");

    return 0;
}
