#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// a structure "employee" that has 3 values: name, hourlyWage, hoursWorked
typedef struct{    
    char name[50];
    float hourlyWage;
    float hoursWorked;
} employee;

// function prototypes
void addEmployee(employee* newEmp, char empName[], float empWage, float empHoursWorked);
int calcPaychecks(employee employees[]);

#endif /* EMPLOYEE_H */