#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(){
    string s = get_string("INPUT: ");
    printf("Output : ");
    for(int i = 0, n = strlen(s); i < n; i++){
        printf("%c", s[i]);
    }
    printf("\n");
}
