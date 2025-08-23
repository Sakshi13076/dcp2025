#include <stdio.h>


char* longestCommonPrefix(char strs[][100], int n) {
    static char prefix[100];
    int i, j;

    
    for (i = 0; strs[0][i] != '\0'; i++) {
        char c = strs[0][i];
        for (j = 1; j < n; j++) {
            
            if (strs[j][i] == '\0' || strs[j][i] != c) {
                prefix[i] = '\0';
                return prefix;
            }
        }
        prefix[i] = c;
    }
    prefix[i] = '\0';
    return prefix;
}

int main() {
    int n, i;
    char strs[100][100];

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", strs[i]);
    }

    char* ans = longestCommonPrefix(strs, n);
    if (ans[0] == '\0')
        printf("Longest Common Prefix: \"\"\n");
    else
        printf("Longest Common Prefix: %s\n", ans);

    return 0;
}
