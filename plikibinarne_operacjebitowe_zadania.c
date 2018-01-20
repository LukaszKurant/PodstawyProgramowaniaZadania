#include <stdio.h>
#include <string.h>

void zad1(const char* pl,const char* napis) {
    FILE * plik = fopen(pl, "wb");

    fwrite(napis, sizeof(int),1,plik); //string, wielkosc, ile razy, plik
    fwrite(napis,2,1,plik);
    fwrite(napis,strlen(napis)+1,1,plik);

    fclose(plik);

}

void wypisz(const char *pl) {
    FILE *plik = fopen(pl,"rb");
    char bufor[500];
    fread(bufor,sizeof(int),500,plik); //bufor, wielkosc elementu bufora, ile razy, plik



    printf("%s \n",bufor);

    fclose(plik);

}


void zad2() {
    FILE * plik = fopen("plic.bin", "wb");
    const char napis[] = "to jest trudne zadanie";
    fwrite(napis, strlen(napis)+1,1,plik);

    printf("pozycja: %ld \n",ftell(plik));
    fseek(plik,0,0);
    wypisz("plic.bin");

    fseek(plik,-15,2); //plik, która pozycja, 0 - od poczatku, 1 od aktualnej pozycji, 2 - od konca

    fwrite("latwe ", 6,1,plik);
    printf("pozycja: %ld \n",ftell(plik));
    fseek(plik,0,0);
    wypisz("plic.bin");

}
struct P3D {
    int x;
    int y;
    int z;
};
struct P3D p1 = {1,2,3};
struct P3D p2 = {7,8,11};
struct P3D p1_kopia;

void zad3() {
   FILE * plik = fopen("plic.bin", "wb");
   fwrite(&p1,sizeof(struct P3D),1,plik);
   fclose(plik);
   plik = fopen("plic.bin","rb");
   fread(&p1_kopia, sizeof(struct P3D),1,plik);
   printf("%d\n",p1_kopia.x);
   printf("%d\n",p1_kopia.y);
   printf("%d\n",p1_kopia.z);
   fclose(plik);
}

void zad4() {
    FILE * plik = fopen("plic.bin", "wb");
    fwrite(&p1,sizeof(struct P3D),1,plik);
    fwrite(&p2,sizeof(struct P3D),1,plik);
    fclose(plik);
    plik = fopen("plic.bin","rb");

    fread(&p1_kopia, sizeof(struct P3D),1,plik);
    printf("%d\n",p1_kopia.x);
    printf("%d\n",p1_kopia.y);
    printf("%d\n",p1_kopia.z);

    fread(&p1_kopia, sizeof(struct P3D),1,plik);
    printf("%d\n",p1_kopia.x);
    printf("%d\n",p1_kopia.y);
    printf("%d\n",p1_kopia.z);
    fclose(plik);

}

void zad5() {
    printf("5&12 = %d\n",5&12); //AND
    printf("5|12 = %d\n", 5|12); // OR
    printf("5^12 = %d\n",5^12); //XOR
    printf("5<<5 = %d\n",5<<5);
    printf("5>>22 = %d\n",5>>22);
    printf("12<<5 = %d\n",12<<5);
    printf("12>>22 = %d\n",12>>22);
}

void zad6() {
    int liczba = 4;
    if((liczba & 1) == 1)
        printf("Liczba nie jest parzysta");
    else
        printf("Liczba jest parzysta");

}

void zad7() { //wa¿ne @!@@@!!!!!!!!
    int liczba = 19;
    if(~liczba & (liczba-1)) printf("jest");
    else printf("nie jest");
}

void zad8(int *a,int* b) { // WA¯NE
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;

}

void zad9() {
    int hex = 0x5BABFF;
    int dec1 = (hex & 0xFF0000) >> 16;
    int dec2 = (hex & 0x00FF00) >> 8;
    int dec3 = (hex & 0x0000FF);
    printf("%d %d %d", dec1,dec2,dec3);

    hex = 0;
    hex |= dec3;
    hex |= dec2 << 8;
    hex |= dec1 << 16;
    printf("\n%x",hex);

}

void zad11() {
    int p = c[0];

}
int main()
{
    //zad1("pli.bin",".12345");
    //wypisz("pli.bin");
    zad9();
    return 0;
}