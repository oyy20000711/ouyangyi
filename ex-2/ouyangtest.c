#include<stdio.h>
#include<stdlib.h>
#include<time .h>
#define N 20
int main(){
	int a[N],i;
	srand(time(0));
	for(i=0;i<N;i++)
		a[i]=rand()%100;
	printf("初始数据为：")
		for(i=0;i<N;i++)
			printf("%d",a[i]);
	printf("\n");
	bubble1(a,N);
	//bubble2(a,N);
	//bubble3(a,N);
	printf("排序后数据:");
	for (i=0;i<N;i++)printf("%d",a[i]);

}
int main(){
	int a[N],i;
	srand(time(0));
	for(i=1;i<N;i++)
		a[i]=rand()%100;
	printf("初始数据为:")
		for(i=0;i<N;i++)
			printf("%d",a[i]);
	printf("\n");
	InsertSort(a,N);
	//selectSort(a,N);
	printf("排序后数据:");
	for(i=0;i<N;i++)printf("%d",a[i]);
}
int main(){
	int a[N],i;
	srand(time(0));
	for(i=1;i<N;i++)
		a[i]=rand()%100;
	printf("初始数据为:")
		for(i=0;i<N;i++)
			printf("%d",a[i]);
	printf("\n");
	QuickSort(a,N);
	//MergeSort2(a,N);
	printf("排序后数据:");
	for(i=0;i<N;i++)printf("%d",a[i]);
}



