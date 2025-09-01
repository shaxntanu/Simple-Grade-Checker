#include<stdio.h>
#include<math.h>

int main(){
    int marks;
    scanf("%d", &marks);
    if(100>=marks && marks>=90){
        printf("your grade is A");
    }
        else if (90>=marks && marks>=80){
            printf("youre grade is B");
        }
            else if (80>=marks && marks>=70){
                printf("your grade is C");
            }
                else if (70>=marks  && marks>=60){
                    printf("your grade is D");
                }
                    else if (60>=marks  && marks>=50){
                        printf("your grade is E");
                    }
                        else if (50>marks){    
                        printf("you are FAIL");
                        }
    else{
        printf("invalid input");
    }
    return 0;
}