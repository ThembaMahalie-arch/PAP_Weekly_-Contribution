#include <stdio.h>

int main() {

   char municipalityName[50];
   char mayorName[50];
   int population;

   // User Interface //
   printf("Municipality Financial Management System\n\n");

   printf("Enter Municipal Name: ");
   scanf("%49s", municipalityName);
   printf("Enter Mayor Name: ");
   scanf("%49s", mayorName);
   printf("Enter Population: ");
   scanf("%d", &population);

   // Displaying the information //
   printf("Municipality Report: \n");
   
   printf("Municipality Name: %s\n", municipalityName);
   printf("Mayor Name: %s\n", mayorName);
   printf("Population: %d\n", population);

   

  
   return 0;
}