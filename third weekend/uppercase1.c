#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

int main(){
    string s = get_string("Before : ");
    printf("After : ");
    for(int i = 0, n = strlen(s); i < n; i++){
            printf("%c",toupper(s[i]));
    }
    printf("\n");
}
