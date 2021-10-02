
#include <string.h>
#include <stdlib.h>
#include "employee.h"
int main(void)
{
    //defined in employeeSearchOne.c
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char* nameToFind);
    PtrToEmployee searchEmployeeByPhoneNumber(const Employee table[], int sizeTable, char* phoneNumberToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);

    // defined in employeeTable.c
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr;
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "734-555-5309");
    if (matchPtr != NULL)
        printf("Employee phone number '734-555-5309' is in record %d\n", matchPtr - EmployeeTable);
    else
        printf ("Employee phone number is NOT found in the record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 4.55);
    if (matchPtr != NULL)
        printf("Employee salary of 4.55 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee salary is NOT found in the record\n");
}