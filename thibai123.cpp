#include<stdio.h>
#include<conio.h>
void nhapmang(int A[100],int n){
 for (int i=0;i<n;i++){
    printf("A[%d]= ",i);
    scanf("%d",&A[i]);
}
}
void inmang(int A[100],int n){
 for (int i=0;i<n;i++) {
 	printf("A[%d]=%d ",i,A[i]);}
 }
 int giaithua(int n){
	int gt=1;
	for (int i=1;i<=n;i++) gt=gt*i;
	return gt;
}
int tonggiaithua(int A[100],int n){
	int tong=0;
	for (int i=0;i<n;i++){
		tong=tong+giaithua(A[i]);}
		return tong;
}		
int main (){
 int A[100];
 int n;
 printf("nhap n= ");
 scanf("%d",&n);
 nhapmang(A,n);
 inmang(A,n);
 printf("\n tong cac giai thua cua mang la %d",tonggiaithua(A,n));
}
