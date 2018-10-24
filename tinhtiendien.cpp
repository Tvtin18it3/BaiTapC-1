#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() {
	float tieuthu,socu,somoi;
	float dongia=0;
	printf("nhap vao so dien cu ");
	scanf("%f",&socu);
	printf("nhap vao so dien moi ");
	scanf("%f",&somoi);
	tieuthu=somoi-socu;
	if (tieuthu<50&&tieuthu>0) dongia=tieuthu*1500;
    else
	 if (tieuthu>=50&&tieuthu<=100) dongia=49*1500+(tieuthu-49)*2000;
	else
	 if (tieuthu>100) dongia=49*1500+51*200+(tieuthu-100)*3000;
    else printf("moi ban nhap lai ");
    	printf("tien dien la %f",dongia);

	
}

