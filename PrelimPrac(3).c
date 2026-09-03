#include <stdio.h>

int main(){

    int qTV, qVCR, qREMOTEC, qCDp, qTAPEr = 0;
    float subtotal, total, tax = 0.0f;
    float TVcost, VCRcost, REMOTECcost, CDpcost, TAPErcost = 0.0f;
    float TV = 400.00;
    float VCR = 220.00;
    float RemoteC = 35.20;
    float CDp = 300.00;
    float TAPEr = 150.00;

    printf("How mant TVs were sold?: ");
    scanf("%d", &qTV);
    printf("How mant VCRs were sold?: ");
    scanf("%d", &qVCR);
    printf("How mant Remote Controllers were sold?: ");
    scanf("%d", &qREMOTEC);
    printf("How mant CDs were sold?: ");
    scanf("%d", &qCDp);
    printf("How mant Tape Recorders were sold?: ");
    scanf("%d", &qTAPEr);
    printf("\n");

    TVcost = qTV * TV;
    VCRcost = qVCR * VCR;
    REMOTECcost = qREMOTEC * RemoteC;
    CDpcost = CDp * qCDp;
    TAPErcost = TAPEr * qTAPEr;
    subtotal = TVcost + VCRcost + REMOTECcost + CDpcost + TAPErcost;
    tax = subtotal * 0.0825;
    total = subtotal + tax;

    printf("-----------------------------------------------------------------------------------------\n");
    printf("QTY           DESCRIPTION    \t        UNIT PRICE    \t     TOTAL PRICE\n");
    printf("---           -----------    \t        ----------    \t     -----------\n");
    printf("%d      \t       TV            \t            400.00       \tPhp %.2f\n", qTV, TVcost);
    printf("%d      \t       VCR           \t            220.00       \tPhp %.2f\n", qVCR, VCRcost);
    printf("%d      \t       REMOTE CTRLR  \t             35.20       \tPhp %.2f\n", qREMOTEC, REMOTECcost);
    printf("%d      \t       CD PLAYER     \t            300.00       \tPhp %.2f\n", qCDp, CDpcost);
    printf("%d      \t       TAPE RECORDER \t            150.00       \tPhp %.2f\n", qTAPEr, TAPErcost);
    printf("                             \t                             ------------\n");
    printf("                             \t              SUBTOTAL   \tPhp  %.2f\n", subtotal);
    printf("                             \t              TAX        \tPhp  %.2f\n", tax);
    printf("                             \t              TOTAL      \tPhp  %.2f\n", total);


    return 0;
}