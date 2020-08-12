#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(){
    string s = get_string("s : ");
    string t = s;

    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);
}
