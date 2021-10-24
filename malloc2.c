#include <stdio.h>
#include <math.h>
void pangkat(int *angka){
int pang;
printf("nilai %i dipangkatkan berapa? = ",*angka);
scanf("%i",&pang);
*angka = pow(*angka,pang);
}
void akar(int *a2){
if (fmod(sqrt(*a2),1) != 0)
{
printf("%i tidak memiliki akar kuadrat\n", *a2);
return 0;
}
else
{
printf("\Akar kuadrat %i = %.0lf\n", *a2, sqrt(*a2));
return(0);
}
}
int main(void){
int angka,a1,a2;
printf("Masukkan Nilai Yang akan di cek = ");
scanf("%i",&angka);
a1 = angka;
a2 = angka;
pangkat(&angka);
printf("pangkat dari %i = %i \n",a1,angka);
akar(&a2);
}
