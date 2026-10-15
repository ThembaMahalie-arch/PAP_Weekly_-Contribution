#include <Stdio.h>

int main (){

    float  salary,Housing_Allowance,Transport_Allowance,Tax,Gross_Salary,Net_Salary;

printf("-------Employee Salary Calculator------\n");

printf("Please Enter Salary: ");
scanf("%f", &salary);
printf("Enter housing allowance: ");
scanf("%f", &Housing_Allowance);
printf("Enter transport allowance: ");
scanf("%f", &Transport_Allowance);
printf("Enter tax: ");
scanf("%f", &Tax);

// Calculation //
Gross_Salary = salary + Housing_Allowance + Transport_Allowance;
Net_Salary = Gross_Salary - Tax;
printf("\nGross Salary: %.2f\n", Gross_Salary);
printf("Net Salary: %.2f\n", Net_Salary);


return 0 ;
}