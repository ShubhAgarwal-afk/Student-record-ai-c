#include<stdio.h>
#include<strings.h>
#include<stdlib.h>

struct student {
int SAP_ID;
long long int Roll_No;
char name[60];
long long int Phone_No;
char Email_Id[45];
int Year;
int Semester[8];
float SGPA[8];
}


int addStudent(){
struct Student *s=NULL;
int count =0 ,capacity =0;
char choice;
  do{
  if(count==capacity) {
  capacity =(capacity==0)?2:capacity*2;
  struct student *temp = realloc(s,capacity*sizeof(struct student));
  if (temp==NULL) {
  printf("--------error--------");
  free(s);
  return 0;
  }
  s=temp;
  }
  
printf("\nStudent %d\n",count+1);
printf("SAP ID:");
scanf("%d\n",&s[count].SAP_ID);
printf("Roll no.:");
scanf("%lld\n",&s[count].Roll_No);
printf("Name:");
scanf("%s\n",&s[count].name);  
printf("Phone no.:");
scanf("%lld\n",&s[count].Phone_No);
printf("Email Id:");
fgets(s[count].Email_Id,sizeof(s[count].Email_Id),stdin);
printf("Year:");
scanf("%d\n",&s[count].Year);


for(int i=1;i<Semester;i--)
{printf("Semester:");
scanf("%d\n",&s[count].Semester);
printf("SGPA of Semester %d:",i);
scanf("%d",&s[count].SGPA[i-1]);}

count++;

printf("Add another student?(Y/N):");
scanf("%c",&choice);

}while(choice =='Y');
 
return 0;
}

