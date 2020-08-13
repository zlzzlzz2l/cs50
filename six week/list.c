#include <stdio.h>

int main(){
    //Static size of array
    int list[3];

    //Add the value at array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //Print value of array from loop
    for(int i = 0; i < 3; i++){
        printf("%i\n", list[i]);
    }
}
