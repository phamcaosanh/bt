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


Bt8 nhập n bất kì tính S = 1/1 + 1/2 +....+ 1/n

#include <stdio.h>


int main(void) {
//Khai bao bien
int n;
float sum = 0;
//Nhap so nguyen duong n bat ki tu ban phim
printf("Nhap so nguyen duong bat ki: ");
scanf("%d", &n);
for(float i = 1;i <= n;i++){
  sum+=1/i;
}
//Tong cac so nguyen duong
printf("S = 1/1 + 1/2 + ... + 1/%d = %f",n,sum);
  return 0;
}


Bt14 nhập n bất kì tính S = 1! + 2! + ... + n!
  
#include <stdio.h>

int main(void) {
  int n;
  //Nhap n bat kì tu ban phim
  printf(" nhap n =");
  scanf("%d",&n);
  int t=1;
  int S = 0;
  for(int i = 1;i<=n;i++){
  t = t *i;//Tính giai thừa
  S = S + t;//Tổng các giai thừa từ 1 đế n
  }
  //Hiển thị tổng ra màn hình
  printf("S = 1!+2!+...+%d! =%d", n,S);
  
return 0;
}


Bt10 Nhập n tính S = 1^2 + 2^2 +...+ n^2


//khoi khai bao
#include <stdio.h>
#include <math.h>

//khoi ham main
int main(void) {
  int n;
  printf("nhap n = ");
  scanf("%d", &n);
  int S = 0;
  for(int i = 1; i <= n;i++){
    S+=i*i;
  }
printf("S = 1^2 + 2^2+...+%d^2 = %d", n, S);
    return 0;
}


Bt 9-12 UCLN-BCNN
//khoi khai bao
#include <stdio.h>
int UCLN(int a, int b);
int BCNN(int a, int b);

//khoi ham main
int main(void) {
  int a, b;
  printf("nhap a =");
  scanf("%d", &a);
  printf("nha b =");
  scanf("%d", &b);
  UCLN(a,b);
  printf("UCLN la : %d", UCLN(a,b));
  BCNN(a,b);
  printf("\nBCNN la : %d", BCNN(a,b));
    return 0;
}
//khoi dinh nghia ham
//tim UCLN
int UCLN(int a, int b){
  if(b == 0)
  return a;
  else
  return UCLN(b, a%b);
  }
  //Tim BCNN
int BCNN(int a, int b){
  return a*b/UCLN(a,b);
  }


Bt7 kiểm tra số hoàn hảo


#include <stdio.h>


//khoi ham main
int main(void) {
  int n;
  printf("nhap n can kiem tra =");
  scanf("%d", &n);

int S = 0;
for(int i = 1; i < n; i++){
  if(n % i == 0)
  S+=i;
  }
  if(S == n){
  printf("%d la so hoan hao",n);
  }else
  printf(" %d khong la so hoan hao", n);
        
    return 0;
}


Bt6 Xây dựng hàm tìm số nhỏ nhất trong 3 số a, b, c . Các số a, b, c được nhập bất kỳ từ bàn phím


//khoi khai bao
#include <stdio.h>
int so_nho_nhat(int a, int b, int c);

//khoi ham main
int main(void) {
  int a, b, c;
  printf("nhap a =");
  scanf("%d", &a);
  printf("nhap b =");
  scanf("%d", &b);
  printf("nhap c =");
  scanf("%d", &c);
  so_nho_nhat(a,b,c);
  return 0;
}
//khoi dinh nghia
int so_nho_nhat(int a, int b, int c){
  if(a < b && a < c){
    printf("so nho nhat la %d", a);
  }
  else if(b < a && b < c){
    printf("so nho nhat la %d", b);
  }else
  printf("so nho nhat la %d", c);
  return 0;
}


Bt4 Viết chương trình nhập vào một số tự nhiên bất kỳ và kiểm tra xem số đó có phải là số nguyên tố hay không?
  
  
  //khoi khai bao5
#include <stdio.h>


//khoi ham main
int main(void) {
  int n;
  printf("nhap n =");
  scanf("%d", &n);
  if ( n < 2){
    printf("n khong la so nguyen to");
    return 0;
    }
  int count = 0;
  for(int i = 2; i <= n - 1; i++){
    if(n % i == 0){
      count++;
     }
    }
    if(count == 0){
      printf("\n%d la so nguyen to", n);
    }else
    printf("\n %d khong la so nguyen to", n);   
return 0;
}



Bt3 Tìm số lớn nhất trong 3 số a,b,c

//khoi khai bao
#include <stdio.h>
int Gia_tri_lon_nhat(float a,float b,float c);
//khoi ham main
int main(void) {
  // khai bao va nhap a, b, c tu ban phim
  float a, b, c;
  printf("nhap a =");
  scanf("%f", &a);
  printf("nhap b =");
  scanf("%f", &b);
  printf("nhap c =");
  scanf("%f", &c);
Gia_tri_lon_nhat(a,b,c);
  return 0;
}
//khoi dinh nghia ham
int Gia_tri_lon_nhat(float a, float b, float c){
  // so sanh a, b, c
  if(a > b && a > c){
    printf("so lon nhat la %f",a);
  }else if(b > a && b > c){
    printf(" so lon nhat la %f", b);
  }else{
  printf("so lon nhat la %f", c);    
}
return 0;
}


Bt2 Viết chương trình nhập vào số nguyên dương n bất kỳ và tính: S = 1 +2 + . . .+ n


#include <stdio.h>


int main() {
//Khai bao bien
int n,sum = 0;
//Nhap so nguyen duong n bat ki tu ban phim
printf("Nhap so nguyen duong bat ki: ");
scanf("%d", &n);
for(int i = 1;i < n;i++){
  sum+=i;
}
//Tong cac so nguyen duong
printf("S = 1 + 2 ... + %d = %d",n,sum);
  return 0;
}

Bt1 Viết chương trình giải phương trình bậc 2: ax2 + bx + c = 0
  
  
#include <stdio.h>
int main() {
  //khai bao bien
  float a,b,c,x1,x2,delta;
  //Nhap 3 so a,b,c bat ki tu ban phim
  printf("a : ");
  scanf("%f", &a);
  printf("b : ");
  scanf("%f", &b);
  printf("c : ");
  scanf("%f", &c);
  delta = b*b - 4*a*c;
  //Dieu kien
  if(delta < 0){
    x1=x2=0.0;
    printf("Phuong trinh vo nghiem");
  }
  else if(delta == 0){
    x1=x2= -b/(2*a);
    printf("Phuong trinh co nghiem kep\nx1 : %.1f\nx2 : %.1f",x1,x2);
  }
  else{
    x1 = (float) (- b + delta) / (2*a);
    x2 = (float) (- b - delta) / (2*a);
    printf("Phuong trinh co 2 nghiem phan biet\nx1 : %.1f\nx2 : %.1f",x1,x2);
  }
return 0;
}




