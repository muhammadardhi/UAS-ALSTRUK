#include <stdio.h>
 
int main()
{
	printf(" Nama		: Muhammad Ardhi Syaifuddin \n ");
	printf("NPM		: 197006062 \n ");
	printf("Kelompok	: 4 \n ");
	printf("Program Menghitung Permutasi \n ");
	printf("\n");
    int n,p,x1=1,x2=1,hasil;
    printf("Masukan nilai n : ");
    scanf("%d", &n);
    printf("Masukan nilai p : ");
    scanf("%d", &p);
    for(int i=1;i<=n;i++){
        x1=x1*i;
    }
    for(int i=1;i<=n-p;i++){
        x2=x2*i;
    }
 
    //rumus permutasi
    hasil=x1/x2;
    printf("Nilai Kombinasi %d diambil %d adalah %d ",n,p,hasil);
    return 0;
}
