#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student {
int SAP_ID;
long long int Roll_No;
char name[60];
long long int Phone_No;
char Email_Id[45];
int Year;
int Semester;
float SGPA[8];
float CGPA;
}
struct student *s=NULL;
int count =0 ,capacity =0;

int addStudent(){

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
scanf("%d",&s[count].SAP_ID);
printf("Roll no.:");
scanf("%lld",&s[count].Roll_No);
printf("Name:");
scanf("%s",&s[count].name);  
printf("Phone no.:");
scanf("%lld",&s[count].Phone_No);
printf("Email Id:");
fgets(s[count].Email_Id,sizeof(s[count].Email_Id),stdin);
printf("Year:");
scanf("%d",&s[count].Year);
printf("current Semester:");
scanf("%d",&s[count].Semester);

for(int i=1;i<=s[count].Semester;i++)
{printf("SGPA of Semester %d:",i);
scanf("%f",&s[count].SGPA[i-1]);}

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
scanf("%d",&r);

for(int i=0;i<count;i++) {
if(s[i].SAP_ID ==r) {
printf("\n-------Student Found with SAP ID %d-------\n",r);
printf("Name:%s\n",s[i].name);
printf("Roll no.:%lld\n",s[i].Roll_No);
printf("Year:%d\n",s[i].Year);
printf("current Semester:%d\n",s[i].Semester);
printf("Phone no.:%lld\n",s[i].Phone_No);
printf("Email Id:%s\n",s[i].Email_Id);
for(int i=1;i<=s[i].Semester;i++){printf("SGPA of semester %f:%d\n",i,s[i].SGPA[i-1]);}
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
		    for(int j=1;j<=s[count].Semester;j++) {
				int total =0; 
				total+=s[i].SGPA[i-1];
			}
			printf("CGPA till Semester %d of Student with SAP ID %d is:%f\n",s[count].Semester,s[count].SAP_ID,s[count].CGPA);
	}
}
void DisplayAllRecords() {
	int count_ =0;
	for(int i=0;count_<count;count_++) {
printf("\nStudent %d\n",count_+1);
printf("SAP ID:%d\n",s[count_].SAP_ID);
printf("Roll no.:%lld\n",s[count_].Roll_No);
printf("Name:%s\n",s[count_].name);  
printf("Phone no.:%lld\n",s[count_].Phone_No);
printf("Email Id:%s\n",s[count_].Email_Id);
printf("Year:%d\n",s[count_].Year);
printf("current Semester:%d\n",s[count_].Semester);
for(int i=1;i<=s[count_].Semester;i++)
{printf("SGPA of Semester %d:%f",i,s[count_].SGPA[i-1]);
}

}
}

void deleteStudent(){
	int r;
	printf("Enter the SAP ID:");
	scanf("%d",&r);
	int k=0;
	for(int i=0;i<count;i++){
		if(s[i].SAP_ID ==r){
			k=i;
		break;}
	}
	if(k==0) printf("Student not found.\n");
	else{
		for(int j=i;j<count -1;j++)
		{s[j]=s[j+1];}
		count--;
  printf("Record deleted.\n");
	}
}

void DisplayAscendingNumber() {
	struct student temp;
	
	if(count==0) {
		printf("No record found.\n");
		return;
	}
	
	struct Student *t = malloc(count * sizeof(struct Student));
	if(t==NULL) {
		printf("Memory allocation failed!\n");
		return;
	}
	for(int i=0;i<count;i++) 
		t[i]=s[i];
	
	for(int i=0;i<count-1;i++)
		for(int j=0;j<count -1-i;j++)
			if(t[j].SAP_ID >t[j+1].SAP_ID) {
				temp = t[j]; 
				t[j]=t[j+1];
				t[j+1] =temp;
			}
			printf(" ");
			
			free(t);
}
 void DisplayAscendingName() {
struct Student temp;

if(count==0) {
printf("No records found.\n");
return;
}
struct Student *t = malloc(count * sizeof(struct Student));
if(t == NULL) {
printf("Memory allocation failed!\n");
return ;
}
for(int i=0;i<count;i++)
t[i]=s[i];

for(int i=0;i<count-1;i++)
    for(int j=0;j<count-i-1;j++)
        if(strcmp(t[j].name,t[j+1].name)>0) {
               temp=t[j];
		       t[j]=t[j+1];
         	   t[j+1]=temp;
		}
		free(t);
 }
void CGPAavg() {
	
for(int i=1;i<=4;i++)
     { float total =0;
          for(int j=0;j<count;j++)
		      {	if(s[j].Year==i)
                  {    total+=s[j].CGPA;
			             q++;
                  }					  
}
printf("The Average CGPA of %d Year Students:%f",total/q);

}
}

int main() {
	int choice;
	
	do{
		printf("\n========STUDENT RECORD & MANAGEMENT SYSTEM========\n");
		printf("1. Add Student\n");
		printf("2. display all Student\n");
		printf("3. Display in Increasing order of SAP Id\n");
		printf("4.Display in Increasing order of Name\n");
		printf("5. Search and Display record of Student\n");
		printf("6.Delete a student Record\n");
		printf("7.Calculation of CGPA of student till his current Semester\n");
		printf("8.Calculation of Average CGPA of all year student\n");
		printf("9.Exit\n");
		
		printf("Enter your choice:");
		
		if(scanf("%d",&choice) != 1) {
			while(getchar() != '\n'){
			choice =0;}
		}
		switch(choice) {
		    case 1: addStudent();break;
			case 2:DisplayAllRecords();break;
			case 3:DisplayAscendingNumber();break;
			case 4:DisplayAscendingName();break;
            case 5: SearchAndDisplay();	break;
            case 6:deleteStudent(); break;
	        case 7:CGPA()	;   break;
		    case 8:CGPAavg();  break;
			case 9:printf("Exiting.....\nHave Wonderful day ahead"); break;
			default:printf("Invalid Choice! Try again.\n");
		}
	}while(choice !=9);
	
	free(s);
	return 0;
}
			
			
	
	
