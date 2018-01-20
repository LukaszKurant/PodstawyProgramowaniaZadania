/*zadanie 1

 FILE *in;
    FILE *out;



    in = fopen("zad1","r");

    int litery = 0, zdania = 1, slowa = 1;
    int czy_spacja = 0, czy_kropka = 0;
    char znak = getc(in);
    while(!feof(in)) {
        if(znak == ' ') czy_spacja = 1;
        else if(znak == '.') czy_kropka = 1;
        else {
            if(czy_spacja == 1) slowa++;
            if(czy_kropka == 1) zdania++;
            litery++;
            czy_kropka = 0;
            czy_spacja = 0;
        }
        znak = getc(in);
    }
    printf("\n\nslowa = %i, litery = %i, zdania = %i\n\n",slowa,litery,zdania);

    fclose(in);


*/
 /*FILE *fp;
    fp=fopen("plik1.txt","w");
    int i = 0;
    for(i=0;i<10;i++)
        fprintf(fp,"%i",i);
    fclose(fp);

    fp = fopen("plik1.txt","r");
    char znak = getc(fp);
    while(znak != EOF)
    {
        printf("%c",znak);
        znak = get(fp);
    }
    fclose(fp);*/

    /*
    FILE *fp;
    fp=fopen("plik1.txt","w");
    int i = 0;
    for(i=0;i<10;i++)
        fprintf(fp,"%i",i);

    rewind(fp);



    char znak = getc(fp);
    while(znak != EOF)
    {
        printf("%c",znak);
        znak = get(fp);
    }
    fclose(fp);*/



    FILE *fp;
    fp=fopen("plik1.txt","w+");
    char buffer[100];
    int i = 0;
    for(i=0;i<5;i++) {
        fgets(buffer,99,stdin);
        fprintf(fp,"%s",buffer);
    }
    fclose(fp);


    fp=fopen("plik1.txt","r");


    while(!feof(fp))
    {
        fgets(buffer,99,fp);
        printf("%s",buffer);
    }

    fclose(fp);
////////////////////





#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float zad2 (const char* nazwa) {
    FILE *in;


    in = fopen(nazwa,"r");

    float srednia = 0;
    int ilosc = 0;
    int bufor;
    while(!feof(in)) {
        fscanf(in,"%d",&bufor);
        srednia += bufor;
        ilosc++;
    }
    fclose(in);
    srednia /= ilosc;
    return srednia;
}



int main()
{

    //const char nazwa[] = "zad1";

    //printf("\n\n\n%f\n\n\n",zad2(nazwa));

//ZAD3
/*
    FILE *in;

    in = fopen("zad1","r+");

    int suma1 = 0, suma2 = 0;
    int bufor1, bufor2;
    while(!feof(in)) {
        fscanf(in,"%d %d",&bufor1, &bufor2);
        suma1 += bufor1;
        suma2 += bufor2;
    }
    fprintf(in,"\n%d %d",suma1,suma2);
    fclose(in);

    printf("suma1 = %d, suma2 = %d",suma1,suma2);

*/
//ZAD4

FILE *in;

    in = fopen("zad1","r+");
    int ilosc = 0;

    fscanf(in,"%d",&ilosc);

    int *suma = malloc(ilosc*sizeof(int));
    for(int i = 0;i<ilosc;i++)
        suma[i] = 0;
    int znak;
    while(!feof(in)) {
        for(int j = 0;j<ilosc;j++) {
            fscanf(in,"%d ", &znak);
            suma[j] += znak;
        }
    }


    fprintf(in,"\n");
    for(int j = 0;j<ilosc;j++)
    {
        fprintf(in,"%d ",suma[j]);
        printf("%d ",suma[j]);
    }


    fclose(in);



    return 0;
}