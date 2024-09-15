#include <stdio.h>
struct student {
    int rollNo;
    char name[50];
    float marks[3];
};

int main() {
    struct student s;
    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks in three subjects: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &s.marks[i]);
    }
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks in three subjects: ");
    for (int i = 0; i < 3; i++) {
        printf("%.2f ", s.marks[i]);
    }
    printf("\n");

    return 0;
}
