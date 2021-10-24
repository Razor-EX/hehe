#include <stdio.h>
#include <math.h>
void pangkat(int *bilangan){
int pang;
printf("nilai %i dipangkatkan berapa? = ",*bilangan);
scanf("%i",&pang);
*bilangan = pow(*bilangan,pang);
}
void akar(int *bilcek2){
if (fmod(sqrt(*bilcek2),1) != 0)
{
printf("%i tidak memiliki akar kuadrat\n", *bilcek2);
return 0;
}
else
{
printf("\Akar kuadrat %i = %.0lf\n", *bilcek2, sqrt(*bilcek2));
return(0);
}
}
int main(void){
int bilangan,bilcek1,bilcek2;
printf("Masukkan Nilai Yang akan di cek = ");
scanf("%i",&bilangan);
bilcek1 = bilangan;
bilcek2 = bilangan;
pangkat(&bilangan);
printf("pangkat dari %i = %i \n",bilcek1,bilangan);
akar(&bilcek2);
}
