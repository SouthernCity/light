#include <stdio.h>
int a[1000001];
int main() {
	int m,n,mm=500000;//mm�������鷶Χ
	int i,count=0;
	scanf("%d%d",&m,&n);
	for(int i=0; i<=500000; i++){ //���ȸ��������鸳ֵ������֪����һ�γ���2Ҳ���ǰ�ż����ȥ��
		a[i]=i*2-1;//ֻ��������ֵ
	} 
	int op=3;
	int k;//�´�ѭ���������С
	int flag=2;//��ʾ���ǵ�ǰ���±�
	while(op<=n) { //opΪ��ǰ�ı�������op��n�Ϳ��Խ�ֹ��
		flag++;
		k=2;
		for(int j=2; j<=mm; j++) { //ѭ����������
			if(j%op!=0) {
				a[k++]=a[j];//ˢ������
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
