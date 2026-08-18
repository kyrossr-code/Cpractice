#include <stdio.h>
int main(void) {

    float jeepride, triride, snackcost, drinkcost, schoolsupply, totalcost, basemoney = 0.0f;
    float transportationcost, foodcost;
    
    printf("Enter your current money: ");
    scanf("%f", &basemoney);

    printf("Enter Jeepney ride fare: ");
    scanf("%f", &jeepride);

    printf("Enter Tricycle ride fare: ");
    scanf("%f", &triride);  

    printf("Enter Snack cost: ");
    scanf("%f", &snackcost);

    printf("Enter Drink cost: ");
    scanf("%f", &drinkcost);

    printf("Enter School supply cost: ");
    scanf("%f", &schoolsupply);
    printf("\n");

    jeepride *= 2;
    triride *= 2;
    totalcost = jeepride + triride + snackcost + drinkcost + schoolsupply;
    transportationcost = jeepride + triride;
    foodcost = snackcost + drinkcost;
    basemoney -= totalcost;
    
    printf("Transportation cost: %.2f\n", transportationcost);
    printf("Food cost: %.2f\n", foodcost);
    printf("School supply cost: %.2f\n", schoolsupply);
    printf("Total cost: %.2f\n", totalcost);
    printf("Remaining money: %.2f\n", basemoney);
    return 0;
}