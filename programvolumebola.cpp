#include<stdio.h>

int main()
{

    float jari;
    float phi = 3.14;
    float hasil;
    
printf ("Nama : Muhammad Ardhi Syaifuddin \n");
printf ("NPM : 197006062 \n");
printf ("kelompok : 4 \n");
    
    printf ("program menghitung volume bangun ruang bola \n \n");
    printf ("Masukkan jari-jari bola (cm) : ");
    scanf ("%f" ,&jari);
    hasil = (1.33333)*phi*(jari*jari*jari);
    printf ("jadi volume bola tersebut adalah : %.2f",hasil);
    puts ("  "); 
    return 0;


}
