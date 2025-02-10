#include <stdio.h>

int main() {
    int age;
    int income;
    int tol;
    scanf("%d",&age);
    scanf("%d",&income);
    scanf("%d",&tol);
 if( age<30 || ((age>=30 && age<=50) && income>75000 && tol ==3) || (age>50 && income>75000 && tol==3) ){
  printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
}
     else if (((age >= 30 && age <= 50) && income <=75000 && tol == 2) ||
               ((age >= 30 && age <= 50) && income>75000 && (tol==1 || tol==2))    ){
                 printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
               }
    else if(age>50  || (  income<=30000 && (tol==1 || tol==2))  ){
      printf("Low Risk Portfolio: Suitable for conservative investments.");
    }

      return 0;
}