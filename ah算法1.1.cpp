#include<stdio.h>
struct student{
	char name[20];
	char score;
}a[100],t;
int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",a[i].name,&a[i].score);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(a[j].score<a[j+1].score){
				{t=a[j];a[j]=a[j+1];a[j+1]=t;}
			}	
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",a[i].name);
	}
	return 0;
}
