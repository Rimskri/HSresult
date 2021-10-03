#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,total;
	int beng,eng,bioo,math,phys,chemm,capp,css,statt,beng1,eng1,bioo1,mathh1,phys1,chemm1,capp1,css1,statt1;
		printf("enter your best 4 marks of madhyamik out of 100  ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	total=a+b+c+d;
	float s,ar;
	s=ceil((total*32.00)/400.0);
ar=ceil((total*28.00)/400.0);
		printf("\nenter marks for 11 out of 70/80 :  ");
		printf("\nenter your marks of bengali for 11  ");
		scanf("%d",&beng);
		float b1;
		b1=ceil(48.0*beng/80.0);
			printf("\nenter your marks of english for 11  ");
			scanf("%d",&eng);
				float e1;
		e1=ceil(48.0*eng/80.0);
	printf("\nenter your marks of math for 11  ");
		scanf("%d",&math);
				float m1;
		m1=ceil(48.0*math/80.0);
printf("\nenter your marks of physics for 11  ");
		scanf("%d",&phys);
			float phy1;
		phy1=ceil(42.0*phys/70.0);
	printf("\nenter your marks of chemistry for 11  ");
		scanf("%d",&chemm);
			float chem1;
		chem1=ceil(42.0*chemm/70.0);
	printf("\nfor 12 practical out of30/20 : ");
printf("\nenter your marks of bengali for 12  ");
		scanf("%d",&beng1);
			printf("enter your marks of english for 12 ");
			scanf("%d",&eng1);
			printf("enter your marks of math for 12 ");
		scanf("%d",&mathh1);
			printf("enter your marks of physics for 12  ");
		scanf("%d",&phys1);
			printf("enter your marks of chemistry for 12  ");
		scanf("%d",&chemm1);
		
		float bengali,english,matth,physics,chemistry,statistic,computersc,computerapp,biology;
		bengali=ceil(ar+b1+beng1);
		english=ceil(ar+e1+eng1);
		matth=ceil(ar+ m1 + mathh1);
		physics=ceil(s+phy1+phys1);
		chemistry=ceil(s+chem1+chemm1);
		int min,max,i,x;
		int *ptr;
		printf("\n 1 for math,physics,chemistry,biology");
		printf("\n 2 for math,physics,chemistry,statistic");
		printf("\n 3 for math,physics,chemistry,computer science");
		printf("\n 4 for math,physics,chemistry,computer application");
			printf("\nenter any number 1 to 4...");
			scanf("%d",&x);
			if(x==1)
			{
				printf("\nenter your marks of biology for 11 written exam ");
		scanf("%d",&bioo);
				float bio1;
		bio1=ceil(42.0*bioo/70.0);
		printf("enter your marks of biology for 12 practical  ");
		scanf("%d",&bioo1);
			biology=ceil(s+bio1+bioo1);
				ptr=(int *)malloc(4*sizeof(int));
			ptr[0]=matth;
			ptr[1]=physics;
			ptr[2]=chemistry;
			ptr[3]=biology;
			min=ptr[0];
	 for(i=0;i<4;i++)
 { 
   if(min>ptr[i])
   {  
    min=ptr[i];
	} }
   max=ptr[0]+ptr[1]+ptr[2]+ptr[3]-min;
    int hstotal1;
hstotal1=bengali+english+max;
printf("\ntotal number is %d",hstotal1);
free(ptr);
}
else if (x==2)
{
printf("\nenter your marks of statistics for 11 written exam ");
		scanf("%d",&statt);
				float stat1;
		stat1=ceil(42.0*statt/70.0);
			printf("enter your marks of statistics for 12 practical  ");
		scanf("%d",&statt1);
			statistic=ceil(s+stat1+statt1);
	ptr=(int *)malloc(4*sizeof(int));
	ptr[0]=matth;
			ptr[1]=physics;
			ptr[2]=chemistry;
			ptr[3]=statistic;
	 	min=ptr[0];
	 for(i=0;i<4;i++)
 { 
   if(min>ptr[i])
   {  
    min=ptr[i];
	} }
   max=ptr[0]+ptr[1]+ptr[2]+ptr[3]-min;
int hstotal2;
hstotal2=bengali+english+max;
printf("\ntotal number is %d",hstotal2);free(ptr);
}
else if (x==3)
{		printf("\nenter your marks of computer science for 11 written exam ");
		scanf("%d",&css);
				float cs1;
		cs1=ceil(42.0*css/70.0);
		printf("enter your marks of computer science for 12 practical");
		scanf("%d",&css1);
		computersc=ceil(s+cs1+css1);
	ptr=(int *)malloc(4*sizeof(int));
	ptr[0]=matth;
			ptr[1]=physics;
			ptr[2]=chemistry;
			ptr[3]=computersc;
		min=ptr[0];
	 for(i=0;i<4;i++)
 { 
   if(min>ptr[i])
   {  
    min=ptr[i];
	} }
   max=ptr[0]+ptr[1]+ptr[2]+ptr[3]-min;
int hstotal3;
hstotal3=bengali+english+max;
printf("\nTotal number is %d",hstotal3);free(ptr);}
else if (x==4)
{
	printf("\nenter your marks of computer app for 11 written exam ");
		scanf("%d",&capp);
				float c1;
		c1=ceil(42.0*capp/70.0);
			printf("enter your marks of computer app for 12 practical");
		scanf("%d",&capp1);
		computerapp=ceil(s+c1+capp1);
		
		
			ptr=(int *)malloc(4*sizeof(int));
	ptr[0]=matth;
			ptr[1]=physics;
			ptr[2]=chemistry;
			ptr[3]=computerapp;
		min=ptr[0];
	 for(i=0;i<4;i++)
 { 
   if(min>ptr[i])
   {  
    min=ptr[i];
	} }
   max=ptr[0]+ptr[1]+ptr[2]+ptr[3]-min;
int hstotal4;
hstotal4=bengali+english+max;
printf("\ntotal number is %d",hstotal4); free(ptr);
}
else
{
	printf("please enter correct number");
}
	return 0;
}
