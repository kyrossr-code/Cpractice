#include <stdio.h>

int main(){

    int studID, studAGE = 0;
    float studHEIGHT, quiz1, quiz2 = 0.0f;
    float sum, average = 0.0f;

    printf("Student ID Number: ");
    scanf("%d", &studID);
    printf("Student Age: ");
    scanf("%d", &studAGE);
    printf("Enter your height in meters: ");
    scanf("%f", &studHEIGHT);
    printf("Enter first quiz score: ");
    scanf("%f", &quiz1);
    printf("Enter second quiz score: ");
    scanf("%f", &quiz2);
    printf("\n");

    sum = quiz1 + quiz2;
    average = sum/2;

    printf("Students ID Number is: %d\n", studID);
    printf("Students Age is: %d\n", studAGE);
    printf("Student height is: %.2fm\n", studHEIGHT);
    printf("Students first quiz score is %.2f and second quiz score is %.2f, which totals to %.2f and an average of %.2f\n", quiz1, quiz2, sum, average);
    
    return 0;

}