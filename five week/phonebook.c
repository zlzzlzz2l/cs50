#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(){
    //Open file
    FILE *file = fopen("phonebook.csv", "a");

    //Get string from user
    char *name = get_string("Name : ");
    char *number = get_string("Number : ");

    //Print (write) strings to file
    fprintf(file, "%s, %s\n", name, number);

    //Close file
    fclose(file);
}
