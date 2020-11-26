#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20
//冒泡排序1，从前往后
void bubble1(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{for (j=0; j<n-i; j++)
		{if (a[j] > a[j+1])
			{t= a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
//冒泡排序2，从后往前
void bubble2(int a[],int n)
{
	int i,j,t;
	for(i=0; i<n-1; i++)
	{
		for(j=n-1;j>i;j--)
		{
			if (a[j-1]>a[j])
			{
				t =a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
		}
	}
}
//冒泡排序3，加上一标志flag
void bubble3(int a[],int n)
{
	int i,flag=1,t;
	for (i=1;i<n && flag==1;i++)
	{
		flag = 0;
		for (int j=0; j<n-i; j++)
		{
			if (a[j] > a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				flag = 1;
			}
		}
	}
}
int main()
{
	int a[N],i;
	srand(time(0));
	for (i=0;i<N;i++)
		a[i] =rand() % 100;
	printf("初始数据为：");
	for (i=0;i<N;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	bubble1(a,N);
	//bubble2(a,N);
	//bubble3(a,N);
	printf("排序后数据：");
	for (i=0;i<N;i++)
		printf("%d",a[i]);
}
//插入排序,选择排序
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20
//直接插入排序
void InsertSort(int a[],intn){
	int i ,j,temp;
	for (i=1;i<n;i++){
		temp=a[i];
		j=i-1;
		while (j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
//直接选择排序
void selectSort(int a[],int n){
	int i,j,k,m;
	for (i=0; i<n-1;i++){
		m=a[i];
		k=i;
		for (j=j+1;j<n;j++)
			if(a[j]<m){
				ma=a[j];k=j;
			}
		a[k]=a[i];
		a[i]=m;
	}
}
int main(){
	int a[N],i;
	srand(time (0));
	for(i=0;i<N;i++)
		a[i]=rand()%100;
	printf("初始数据为:");
	for(i=0;i<N;i++)
		printf("%d",a[i]);
	printf("\n");
	InsertSort(a,N);
	//SelectSort(a,N）；
	printf("排序后数据:");
	for(i=0;i<N;i++)printf("%d",a[]);
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20
//将a数组分为两个区
int partition(int a[],int low,int high){
	int x=a[low];
	while(low<high){
		while(low<hih && a[high]>=x) high--;
		if(low<high){
			a[low]=a[hgih];
			low++;
		}
		while(low<high && a[low]<=x) low++;
		if (low<high){
			a[high]=a[low];
			high--;
		}
	}
	a[low]=x;
	return low;
}
//另一个分区算法
int partition2(inta[],int low, int high){
	int i=low,j=high+1,x=a[low],t;
	while(i<j){
		do i++;while(a[i]<x);
		do i--;while(a[j]>x);
		if(i<j);
		a[i]=a[j];
		a[j]=t;
	}
}
a[low]=a[j];
a[j]=x;
return j;
}
//将a数组的区间[low..high]的元素进行快速排序
void QSort(int a[],int low,int high){
	if(low<high){
		int mid=Prtition(a,low,high);
		//int mid=paratition2(a , low,high);采用另一个区分算法
		QSort(a,low,mid-1);
		QSort(a,mid=1,high);
	}
}
//快速排序
void QuickSort(int a[],int n){
	QSort(a,0,n-1);
}
int main(){
	int a[N],i;
	srand(time(0));
	for(i=0;i<N;i++)
		a[i]=rand()%100;
	printf("初始数据为:");
	for(i=0;i<N;i++)
		printf("%d",a[i]);
	printf("\n");
	QuickSort(a,N);
	//MergeSort2(a,N);
	printf("排序后数据：");
	for (i=0;i<N;i++)printf("%d",a[i]);
}




