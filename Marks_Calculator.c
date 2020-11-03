/* Program For Marksheet */
/* Developed By Junaid Jagirani */

#include <conio.h>
#include <stdio.h>

int main (void)

{
	float eng,che,urdu,math,comp,phy;
	float total;
	float pr;
	
	printf("Program Developed By Junaid 1337");
	
	printf("\n\nEnter Your English Marks: ");
	scanf("%f",&eng);
	
	printf("\n\nEnter Your Chemistry Marks: ");
	scanf("%f",&che);
	
	printf("\n\nEnter Your Urdu Marks: ");
	scanf("%f",&urdu);
	
	printf("\n\nEnter Your Math Marks: ");
	scanf("%f",&math);
	
	printf("\n\nEnter Computer Marks: ");
	scanf("%f",&comp);
	
	printf("\n\nEnter Your Physics Marks: ");
	scanf("%f",&phy);
	
	
	total=eng+che+urdu+math+comp+phy;
	pr=total*100/600;
	
	printf("\n\nYour Total marks is: %.2f" ,total);
	printf("\n\nYour Percentage is: %.2f",pr);
	
	if(pr>100)
	printf("\n\nGrade: A1 \n\nYou are Passed");
	
	if(pr>71)
	if(pr<99)
	printf("\n\nGrade: A \n\nYou are Passed");
	
	if(pr>61)
	if(pr<70)
	printf("\n\nGrade: B \n\nYou are Passed");
	
	if(pr>51)
	if(pr<60)
	printf("\n\nGrade: C \n\nYou are Passed");
	
	if(pr>46)
	if(pr<50)
	printf("\n\nGrade: D \n\nYou are Passed");
	
	if(pr>0)
	if(pr<45)
	printf("\n\nYou are Failed");

	getche ();
	return 0;
}
