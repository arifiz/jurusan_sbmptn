#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
 {

char username [20]="admin";
char pass[12]="admin";
char usr[20];
char pas[20];
int status=0, salah=0;
int ulang,pilih;

while(status<5)
{

system ("cls");
printf("\n\n====PENGOREKSIAN HASIL SBMPTN===\n\n");
printf("\nMasukan username : ");
scanf("%s",&usr);
printf("\nMasukan Password : ");
scanf("%s",&pas);
if((strcmp(usr, username)==0 && strcmp(pas,pass)==0))
{
system ("cls");
printf("\n Selamat datang admin  \n");
printf("\n----------------------------------------\n\n");


printf("\n Untuk melakukan pengoreksian silahkan masukan kelas SBMPTN  \n");
printf("\n----------------------------------------\n");
 break;}

else{
system ("cls");
printf("\nusername atau pasword salah \n");
}
salah++;
if (salah==3){
printf("\nAkses ditolak\n");
system("exit");
return 0;
}
{

status++;
system ("pause");}

}
}



