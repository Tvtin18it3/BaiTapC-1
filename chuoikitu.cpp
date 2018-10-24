#include<stdio.h>
#include<string.h>
int demKiTu(char xau[]){
 int dem=1,j,temp;
 for(int i=1;i<strlen(xau);i++){
  if(xau[i] != ' '){
   temp = 1;
    for(j=i-1;j>=0;j--){
     if(xau[j] == xau[i]){
      temp = 0;
break;
}
}
     if(temp == 1) dem++;
}
}
  return dem;
}
int main(){
 char xau[99];
 printf("Nhap xau: ");
 gets(xau);
 printf("\n Co %d ki tu trong xau!",demKiTu(xau));

}

