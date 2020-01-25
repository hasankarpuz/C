#include <stdio.h>
int main(){
  int i=0,x[i],toplam=0,n;
  float ort=0.0;
  printf("Kaç adet değer gireceksiniz");
  scanf("%d",&n);
  for(i=0;i<n;i++){
  printf("%d. Elemanı Giriniz");
  scanf("%d",&x[i]);
  toplam=toplam+x[i];
  
  
  }
  ort=toplam/n;
  printf("Sonuçunuz=%f",ort);



return 0;


}
