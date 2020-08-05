#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(){
    
    string num0 = get_string("");
    string num1 = get_string("");
    char temp;

    int number1 = strlen(num0);
    int number2 = strlen(num1);

    for (int i=0; i < number1; i++){
        for (int j=0; j < number1 - i - 1; j++ ){
            if (num0[j] > num0[j+1]){
                temp = num0[j];
                num0[j] = num0[j+1];
                num0[j+1] = temp;
            }
        }
    }

    for (int i=0; i < number2; i++){
        for (int j=0; j < number2 - i - 1; j++ ){
            if (num1[j] > num1[j+1]){
                temp = num1[j];
                num1[j] = num1[j+1];
                num1[j+1] = temp;
            }
        }
    }

    if(strcmp(num0, num1) == 0){
        printf("출력값 : True\n");
    }
    else printf("출력값 : False\n");
}
