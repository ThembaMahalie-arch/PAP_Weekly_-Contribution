#include <stdio.h>

int main() {

    double totalRevenue; 
    double totalExpenses;
    double balance;
    

    printf("Municipal Budget Calculator\n\n");


    printf("Please No Spaces \n");
    printf("Enter Total Revenue: ");
    scanf("%lf", &totalRevenue);
    printf("Enter Total Expenses: ");
    scanf("%lf", &totalExpenses);

    // Calculation //

    balance = totalRevenue - totalExpenses;
    printf("------------------------\n");
    printf("Calculated Balance \n");
    printf("------------------------\n");
    printf("Total Revenue: %.2lf\n", totalRevenue);
    printf("Total Expenses: %.2lf\n", totalExpenses);
    printf("Balance: %.2lf\n", balance);


    

return 0;
}

