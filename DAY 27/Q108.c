#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    int m1, m2, m3;
    int total;
    float percentage;
};

int main()
{
    struct Student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks of 3 Subjects: ");
    scanf("%d%d%d", &s.m1, &s.m2, &s.m3);

    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3.0;

    printf("\n------ Marksheet ------\n");
    printf("Roll No    : %d\n", s.roll);
    printf("Name       : %s\n", s.name);
    printf("Total      : %d\n", s.total);
    printf("Percentage : %.2f%%\n", s.percentage);

    if (s.percentage >= 35)
        printf("Result     : PASS\n");
    else
        printf("Result     : FAIL\n");

        return 0;