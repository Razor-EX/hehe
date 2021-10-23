#include <stdio.h>
#include <stdlib.h>
struct deklar
{
int id;
char nama[50];
enum kelamin{pria, wanita};
enum kelamin intkel;
char tempatlahir[50];
int tahun;
int bulan;
int hari;
char alamat[50];
char kota[30];
char kodepos[6];
char notelp[15];
char hobi[50];
};
int main(void)
{
struct deklar dek;
printf("Masukkan data berikut:\nID: ");
scanf("%5d", &dek.id);
printf("Nama: ");
scanf("%s", dek.nama);
printf("Jenis kelamin (0 = Laki-Laki, 1 = Perempuan): ");
scanf("%d", &dek.intkel);
printf("Tempat lahir: ");
scanf("%s", dek.tempatlahir);
printf("Tanggal lahir(dd/mm/yyyy): ");
scanf("%2d / %2d / %4d", &dek.hari, &dek.bulan, &dek.tahun);
printf("Alamat: ");
scanf("%s", dek.alamat);
printf("Kota: ");
scanf("%s", dek.kota);
printf("Kode Pos: ");
scanf("%s", dek.kodepos);
printf("Nomor notelp: ");
scanf("%s", dek.notelp);
printf("Hobi: ");
scanf("%s", dek.hobi);

printf("\n\n\n#####################\n");
printf("ID = %d\n",dek.id);
printf("Nama = %s\n",dek.nama);
printf("Kelamin = ");
switch(dek.intkel)
{
case 1:
printf("Perempuan \n");
break;
case 0:
printf("Laki-Laki \n");
break;
}
printf("Tempat Lahir = %s\n", dek.tempatlahir);
printf("Tanggal Lahir = %2d/%2d/%4d\n",dek.hari,dek.bulan,dek.tahun);
printf("Alamat = %s\n",dek.alamat);
printf("Kota = %s\n",dek.kota);
printf("KodePos = %s\n",dek.kodepos);
printf("Nomer Telepon = %s\n",dek.notelp);
printf("Hobi = %s\n",dek.hobi);
return 0;
}
