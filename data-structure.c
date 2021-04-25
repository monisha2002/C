#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char empname[30];
    int empno;
    int age;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=20;
 
    Employee employees[n];
 
    //Taking each employee detail as input
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].empname);
        //Age
        printf("Age: ");
        scanf("%d",&employees[i].age);
		//Number
        printf("Number: ");
        scanf("%d",&employees[i].empno);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
        
 
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t\t: ");
        printf("%s \n",employees[i].empname);
 
        printf("Age \t\t: ");
        printf("%d \n",employees[i].age);
 		
 		printf("Phone Number \t: ");
 		printf("%d \n",employees[i].empno);
 		
        printf("Salary \t\t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
