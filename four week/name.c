#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(){
    string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};

    for(int i = 0; i < 4; i++){
        if(strcmp(names[i], "EMMA") == 0){
            printf("Found\n");
            return 0; //참이라면 이 때 종료를 할 것이다.
        }
    }
    printf("Not found\n");
    return 1;
}
