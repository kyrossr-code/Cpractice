#include <stdio.h>

int main(){

    char vehicle_type;
    char vehicle_name[10];
    int hour_in, min_in, hour_out, min_out;
    int time_hours, time_min;
    int adjusted_hour;
    float total_charge;

    //input
    printf("Enter type of vehicle (C, B, T): ");
    scanf("%c", &vehicle_type);
    printf("Enter Hour vehicle entered lot (0-24): ");
    scanf("%d", &hour_in);
    printf("Enter Minute vehicle entered lot (0-60): ");
    scanf("%d", &min_in);
    printf("Enter Hour vehicle left lot (0-24): ");
    scanf("%d", &hour_out);
    printf("Enter Minute vehicle left lot (0-60): ");
    scanf("%d", &min_out);
    printf("\n");

    //seperates the display variable, from the variable that is processed to avoid mixed values
    int display_hour_out = hour_out;
    int display_min_out = min_out;

    // minute condition where it adds 60 if minute in is greater than out
    if (min_out < min_in){
        min_out += 60;
        hour_out -= 1;
    }
    //process conditions to get the durations of hours and minutes
    time_hours = hour_out - hour_in;
    time_min = min_out - min_in;

    // if conditions where it adds 1 to the leaving hour value if min is greater than 0
    if (time_min > 0){
        adjusted_hour = time_hours + 1;
    } else {
        adjusted_hour = time_hours;
    }

    switch (vehicle_type){
        case 'C': case 'c':
            sprintf(vehicle_name, "Car");
            if (adjusted_hour <= 3){
                total_charge = 0.00;
            } else {
                total_charge = (adjusted_hour - 3) * 1.50;
            }
            break;
        case 'T': case 't':
            sprintf(vehicle_name, "Truck");
            if (adjusted_hour <= 2){
                total_charge = 1.00;
            } else {
                total_charge = (2 * 1.00) + (adjusted_hour - 2) * 2.00; 
            }
            break;
        case 'B': case 'b':
            sprintf(vehicle_name, "Bus");
            if (adjusted_hour <= 1){
                total_charge = 2.00;
            } else {
                total_charge = (adjusted_hour - 1) * 3.70;
            }
            break;
            
            default:
            sprintf(vehicle_name, "Unknown");
            total_charge = 0.00;
            break;
    }

    // 5. Print formatted output
    printf("------------------------------\n");
    printf("\n-----PARKING LOT CHARGE-----\n\n");
    printf("------------------------------\n");
    printf("Type of vehicle:   %s\n", vehicle_name);
    printf("TIME-IN:           %02d:%02d\n", hour_in, min_in);
    printf("TIME-OUT:          %02d:%02d\n", display_hour_out, display_min_out);
    printf("------------------------------\n");
    printf("PARKING TIME:      %02d:%02d\n", time_hours, time_min);
    printf("ROUNDED TOTAL:     %d\n", adjusted_hour);
    printf("\nTOTAL CHARGE:      $%.2f\n", total_charge);
    printf("------------------------------");

    return 0;
}