#include <stdio.h>
main()
{
int x,y,z=1;
scanf("%d",&x);
for(int i=2;i<x;i++){
	y=x%i;
	if(y==0){
		printf("NO"); 
		i=x;
	}
	if(i==x-1){
		printf("YES");
	}
}
if(x==2){
		printf("YES");
		
	}
}#include <stdio.h>
main()
{
int x,y,z,b=0,c;
scanf("%d",&b);
 int a[6][2]={ {123,456},{456,789},{789,888},{336,558},{775,666},{566,221} };
 
 while(b>0){
 
 scanf("%d%d",&x,&y);
 
 for(int i=0;i<6;i++){
 	if(a[0][0]==x&&a[0][1]==y){
 		printf("%d",9000);z=1;
	 }
	 if(a[1][0]==x&&a[1][1]==y){
 		printf("%d",5000);
	 }if(a[2][0]==x&&a[2][1]==y){
 		printf("%d",6000);z=3
	 }if(a[3][0]==x&&a[3][1]==y){
 		printf("%d",10000);
	 }if(a[4][0]==x&&a[4][1]==y){
 		printf("%d",12000);
	 }if(a[5][0]==x&&a[5][1]==y){
 		printf("%d",7000);
	 }
	 
 }
 	
 
 b=b-1;
 }
}


