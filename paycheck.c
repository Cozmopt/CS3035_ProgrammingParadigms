#include "paycheck.h"

// driver
int main(void){
    //size of array is greater than number of employees being added to show the loop
    //will only print defined employees
    int numEmps = 5;
    //allocate memory for array 
    employee* employees = malloc(sizeof(employee) * numEmps);
    //iterate employees
    addEmployee(&employees[0], "Bob Smith", 21, 21);
    addEmployee(&employees[1], "Sue Joens", 22.30, 12);
    addEmployee(&employees[2], "Carlos Suarez", 21.55, 15);

    //print data
    calcPaychecks(employees);
    //deallocate memory from array
    free(employees);

    return 0;
}

// a function that creates a struct instance of an employee
void addEmployee(employee* newEmp, char empName[], float empWage, float empHoursWorked){
    strcpy(newEmp->name, empName);
    newEmp->hourlyWage = empWage;
    newEmp->hoursWorked = empHoursWorked;
}
// a method to go through an array of employees, calculate total pay, print all data
int calcPaychecks(employee employees[]){
    //counter
    int i=0;
    float total = 0;
    do{
        //calc total pay for employee
        float totalPay = employees[i].hourlyWage * employees[i].hoursWorked;
        //print data
        printf("%s", employees[i].name);
        printf(", wage $%.2f", employees[i].hourlyWage);
        printf(", hours %.2f", employees[i].hoursWorked);
        printf(", total pay: $%.2f\n", totalPay);
        i++;
        total += totalPay;
    }while (employees[i].hourlyWage > 0);

    printf("Average paycheck: $%.2f", total/i);
    return 0;
}
