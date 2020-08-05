#include <cs50.h>
#include <stdio.h>
#include <string.h>
typedef  struct{
    string name;
    string number;
} person; //person이라는 자료형이 생긴 것이다.

int main(){
    person people[4];

    people[0].name = "EMMA";
    people[0].number = "010-7265-5123";

    people[1].name = "RODRIGO";
    people[1].number = "010-2222-3333";

    people[2].name = "BRAIN";
    people[2].number = "010-2222-1111";

    people[3].name = "DAVID";
    people[3].number = "010-2222-2222";

    for(int i = 0; i < 4; i++){
        if(strcmp(people[i].name, "EMMA") == 0){
            printf("%s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
