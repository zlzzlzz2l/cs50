#include <stdio.h>
const int N = 3;
int main(){

    int score[N];
    score[0] = 72;
    score[1] = 23;
    score[2] = 33;

    printf("Avaerage : %i\n",(score[0] + score[1] + score[2])/N);
}
