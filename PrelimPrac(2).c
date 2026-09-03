#include <stdio.h>

int main(){

    int seconds, minutes, hours, days = 0;
    
    printf("Enter the number of seconds to compute for minutes, hours, and days: ");
    scanf("%d", &seconds);
    printf("\n");

    minutes = seconds/60;
    hours = minutes/60;
    days = hours/24;

    printf("%d seconds = %d minute(s)\n", seconds, minutes);
    printf("%d seconds = %d hour(s)\n", seconds, hours);
    printf("%d seconds = %d day(s)\n", seconds, days);
    
    
    return 0;
}
