#include <stdio.h>
#include <string.h>

/*
* Struct = collection of related members ("variables")
            they can be of different data types
            listed under one name in a block of memory
            very similar to classes in other languages (but no methods)
*/

struct Player
{
    char name[12];
    int score;
}; 

int main()
{ 
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Collins");     //we use this function when we have an array of characters
    player1.score = 4;

    strcpy(player2.name, "Kimotho");
    player2.score = 5;

    printf("%s\t", player1.name);
    printf("%d\n", player1.score);

    printf("%s\t", player2.name);
    printf("%d\n", player2.score);

    return 0;
}