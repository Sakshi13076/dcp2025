int main() {
    char s[] = "   Hello   world   this  is   C language   ";
    int n = strlen(s);

    int end = n - 1;

    while (end >= 0) {
       
        while (end >= 0 && s[end] == ' ')
            end--;

        if (end < 0) break;

        int start = end;
        while (start >= 0 && s[start] != ' ')
            start--;

       
        for (int i = start + 1; i <= end; i++)
            printf("%c", s[i]);

        
        if (start > 0)
            printf(" ");

        end = start - 1;
    }

    return 0;
}
