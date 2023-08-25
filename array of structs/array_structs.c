#include <stdio.h>

struct Student
{
    char name[12];
    float gpa;
};

int main()
{
    struct Student student1 = {"Collins", 3.0};
    struct Student student2 = {"Kimotho", 2.0};
    struct Student student3 = {"Caroline", 2.5};
    struct Student student4 = {"Phill", 3.5};

    struct Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }

    return 0;
}