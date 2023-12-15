#include <stdio.h>

struct Student {
    char name[50];
    int mathMarks;
    int scienceMarks;
    int englishMarks;
};

int calculateTotalMarks(struct Student student) {
    return student.mathMarks + student.scienceMarks + student.englishMarks;
}

int main() {
    struct Student students[3];

    for (int i = 0; i < 3; ++i) {
        printf("Enter name for student %d:\n", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of maths for student %d:\n", i + 1);
        scanf("%d", &students[i].mathMarks);
        printf("Enter marks of science for student %d:\n", i + 1);
        scanf("%d", &students[i].scienceMarks);
        printf("Enter marks of english for student %d:\n", i + 1);
        scanf("%d", &students[i].englishMarks);
    }

    printf("\nTotal Marks for Each Student:\n");
    for (int i = 0; i < 3; ++i) {
        int totalMarks = calculateTotalMarks(students[i]);
        printf("%s: %d\n", students[i].name, totalMarks);
    }

    return 0;
}