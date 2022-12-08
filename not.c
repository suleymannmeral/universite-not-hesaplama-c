#include<stdio.h>
#include<conio.h>
int main()
{
float vize,final,but,ort1,ort2;

printf("Lutfen Vize Notunuzu Giriniz:");
scanf("%f" ,&vize);

printf("Lutfen Final Notunuzu Giriniz:");
scanf("%f" , &final);

printf("Butunleme Sinavina Girmis İseniz Notunuzu Giriniz Girmemisseniz 0 i Tuslayiniz");
scanf("%f" , &but);

ort1=vize*40/100+final*60/100;
ort2=vize*40/100+but*60/100;

if(but==0 && ort1>=60 && final>=40)
{
    printf("Dersi Gecme Durumunuz Basarili. Tebrikler. Ortalamaniz %f" , ort1);
}
else if(but==0 && ort1<60)
{
    printf("Dersi Gecme Durumunuz Basarisiz. Ortalamaniz %f" , ort1);
}
else if(ort2>=60 && but!=0)
{
    printf("Dersi Gecme Durumunuz Basarili Ortalamaniz %f" , ort2);
}
else if(ort2<60 && but!=0)
{
    printf("Dersi Gecme Durumunuz Basarisiz. Ortalamaniz %f" , ort2);
}

return main();
}



















