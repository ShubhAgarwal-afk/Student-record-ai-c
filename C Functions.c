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
float CGPA[8]
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
printf("current Semester:");
scanf("%d\n",&s[count].Semester);

for(int i=1;i<s[count].Semester;i++)
{printf("SGPA of Semester %d:",i);
scanf("%d",&s[count].SGPA[i-1]);}

count++;

printf("Add another student?(Y/N):");
scanf("%c",&choice);

}while(choice =='Y');
 
return 0;
}

void SearchAndDisplay()
{ int r ,found;
char again;

do {
found =0;
printf("\nEnter the SAP ID to search:");
scanf("%d\n",&r);

for(int i=0;i<count;i++) {
if(s[i].SAP_ID ==r) {
printf("\n-------Student Found with SAP ID %d-------\n",r);
printf("Name:%s\n",s[i].name);
printf("Roll no.:%lld\n",s[i].Roll_no);
printf("Year:%d\n",s[i].Year);
printf("current Semester:%d\n",s[i].Semester);
printf("Phone no.:%lld\n",s[i].Phone_No);
printf("Email Id:%s\n",s[i].Email_Id);
for(int i=1;i<s[count].Semester;i++){printf("SGPA of semester %d:%d\n",i,s[i].SGPA[i-1]);}
found=1;
break;
}
}
if(found==0)
   printf("Student with The given SAP Id not found.\n");
   
   printf("\nDo You Want to search Another Student?(y/n):");
   scanf("%c",&again);
   } while(again =='y');
  
  }
  
void CGPA() {
	for(int i=1;i<count;i++) {
		    for(j=1;j<s[count].Semester;j++) {
				int total =0 
				total+=s[i].SGPA[i-1];
			}
			printf("CGPA till Semester %d of Student with SAP ID %d is:%f\n",s[count].Semester,s[count].SAP_ID,s[count].CGPA);
	}
}
	
  

