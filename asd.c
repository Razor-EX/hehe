#include<stdio.h>
#include<math.h>
enum state {false=0, true=1};
enum state cek(int bil,int n){
n=0;
for(int x=2;x<=bil;x++){
for(int y=2;y<bil;y++){
int pangs=pow(x,y);
if(pangs==bil)
n=1;
else
break;
}
}
if(n==1){
printf("bilangan perpangkatan");
} else {
printf("bukan bilangan perpangkatan");
}
}

int main(void){
int bil,n;
printf("Input bilangan : ");
scanf("%d",&bil);

cek(bil,n);
return 0;
}
