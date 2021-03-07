Bt11 Viết chương trình tính chu vi diện tích hình tròn

#include<stdio.h>

int main(){
  int r;
  float Cv,Dt,pi = 3.14;
  printf("Nhap Ban Kinh R :");
  scanf("%d", &r);
  Cv = 2*pi*r;
  Dt = pi*r*r;
  printf("Dien tich hinh tron = %.2f\n",Dt);
  printf("Chu vi hinh tron = %.2f",Cv);

  return 0;
}


Bt13 Viết chương trình giải phương trình bậc nhất

#include<stdio.h>

int main(){
  float x,a,b;
  printf("Nhap a = ");scanf("%f", &a);
  printf("Nhap b = ");scanf("%f", &b);
  printf("Phuong trinh co dang %.1fx + %.1f = 0\nTim x\n",a,b);
  x = -b/a;
  printf("x = %.2f",x);
  return 0;
}


