#include <stdio.h>
int a[1000001];
int main() {
	int m,n,mm=500000;//mm控制数组范围
	int i,count=0;
	scanf("%d%d",&m,&n);
	for(int i=0; i<=500000; i++){ //首先给整个数组赋值，我们知道第一次除以2也就是把偶数除去；
		a[i]=i*2-1;//只给奇数赋值
	} 
	int op=3;
	int k;//下次循环的数组大小
	int flag=2;//表示的是当前的下标
	while(op<=n) { //op为当前的被除数，op到n就可以截止了
		flag++;
		k=2;
		for(int j=2; j<=mm; j++) { //循环整个数组
			if(j%op!=0) {
				a[k++]=a[j];//刷新数组
			}
		}
		mm=k;
		op=a[flag];
	}
	for(int i=2; i<=k; i++) {
		if(a[i]>m&&a[i]<n) {
			count++
		}
		if(a[i]>=n)
			break;
	}
	printf("%d",count);
	return 0;
}
