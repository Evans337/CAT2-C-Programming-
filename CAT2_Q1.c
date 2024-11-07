/*
ref:CT101/G/23738/24
*/
#include <stdio.h>
#include<string.h>
struct employee {
char name[25];
int id;
char department [20];
float salary;
char email [50];
}employee1;
int main(){
strcpy(employee1.name,"John Doe");
employee1.id=12345;
strcpy(employee1.department,"Human resources");
employee1.salary=55000.50;
strcpy(employee1.email, "john.doe@company.com");
printf ("Enter name =%s",employee1.name);
printf ("Enter id=%i",employee1.id);
printf ("Enter department=%s",employee1.department );
printf ("Enter salary=%f",employee1.salary);
printf ("Enter email=%s",employee1.email);
return 0;
}
