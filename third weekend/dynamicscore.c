#include <stdio.h>
#include <cs50.h>
float average(int length, int array[]);
int main(){
    int n = get_int("Number of scores : ");

    int score[n];

    for(int i = 0; i < n; i++){
        score[i] = get_int("Score %i: ",i + 1);
    }
    printf("Average : %.1f\n", average(n, score));
}

float average(int length, int array[]){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += array[i];
    }
    return sum / (float)length;
}
