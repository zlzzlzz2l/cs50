#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *s = get_string("s : ");
    char *t = malloc(strlen(s) + 1);

    for(int i = 0, n = strlen(s); i < n + 1; i++){
        t[i] = s[i];
    }

    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);
}
