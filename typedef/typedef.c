#include <stdio.h>

typedef struct
{
    char name[25];
    char password[12];
    int id;
} user;

int main()
{
    // typedef = reserved keyword that gives an existing datatye a 'nickname'

    user user1 = {"Collins", "password123", 123456789};
    user user2 = {"Kimotho", "password321", 987654321};

    printf("%s\t\t", user1.name);
    printf("%s\t", user1.password);
    printf("%d\n", user1.id);

    printf("\n");

    printf("%s\t\t", user2.name);
    printf("%s\t", user2.password);
    printf("%d\n", user2.id);

    return 0;
}