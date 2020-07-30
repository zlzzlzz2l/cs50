#include <stdio.h>
#include <cs50.h>
#include <string.h>
void memu(string);

int main(void){
    string day = get_string("요일을 입력하세요. : "); //사용자로부터 요일을 입력받는다.
    memu(day); //요일 비교 후, 메뉴 출력 함수
}
void memu(string choose){
    //월 ~ 일까지 string type으로 변수를 선언했다.
    string mon = "월요일";
    string tue = "화요일";
    string wed = "수요일";
    string thu = "목요일";
    string fri = "금요일";
    string sat = "토요일";
    string sun = "일요일";

    //사용자로부터 입력받은 요일과 string type을 비교 후, 출력한다.
    if(strcmp(choose, mon) == 0) printf("%s : 청국장\n", mon);
    else if(strcmp(choose, tue) == 0) printf("%s : 비빔밥\n", tue);
    else if(strcmp(choose, wed) == 0) printf("%s : 된장찌개\n", wed);
    else if(strcmp(choose, thu) == 0) printf("%s : 칼국수\n", thu);
    else if(strcmp(choose, fri) == 0) printf("%s : 냉면\n", fri);
    else if(strcmp(choose, sat) == 0) printf("%s : 소불고기\n", sat);
    else if(strcmp(choose, sun) == 0) printf("%s : 오삼불고기\n", sun);
}
