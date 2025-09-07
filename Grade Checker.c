#include<stdio.h>

int main() {
    printf("Welcome to the GRADE CHECKER\n");
    int marks;
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("your grade is A");
    }
    else if (marks >= 80 && marks < 90) {
        printf("your grade is B");
    }
    else if (marks >= 70 && marks < 80) {
        printf("your grade is C");
    }
    else if (marks >= 60 && marks < 70) {
        printf("your grade is D");
    }
    else if (marks >= 50 && marks < 60) {
        printf("your grade is E");
    }
    else if (marks < 50 && marks >= 0) {
        printf("you are FAIL");
    }
    else {
        printf("invalid input");
    }
    printf("Thank You for using the GRADE CHECKER\nMade by Shantanu");
    return 0;
}

