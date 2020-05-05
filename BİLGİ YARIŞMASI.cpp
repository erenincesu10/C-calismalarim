#include <stdio.h>
#include <string.h>

void hosgeldiniz(){
	printf("Bilgi yarismasina hos geldiniz asagidaki kurallari okuyunuz\n"
	"Yarismamiz puan sistemlidir\n*Lutfen kullanici adinizi dogru giriniz kayitli degilseniz uye olunuz");
	
}
int secimFonksiyonu(){
	int secim;
	printf("Lutfen asaagidaki seceneklerden birini seciniz\n[1]-Giris Yap\n[2]-Kayit Ol :");
	scanf("%d",&secim);
	return secim;
}
int girisYap(char isim[200],char sifre[200]){
	char isimVeri[200];
	char sifreVeri[200];
	bool kontrol=false;
	while (kontrol==false){		
	
	printf("Lutfen adinizi giriniz :");
	scanf("%s",&isimVeri);
	printf("Lutfen sifrenizi giriniz : ");
	scanf("%s",&sifreVeri);
	if(strcmp(isim,isimVeri)==0 && strcmp(sifre,sifreVeri)==0){
		printf("Yarismaya hos geldiniz\n");
		kontrol=true;
	}
	else{
		printf("Hatali giris");
	}
}
}
int kayitOl(){
	char isim[200];
	char sifre[200];
	printf("Lutfen bir isim belirleyiniz : ");
	scanf("%s",&isim);
	printf("Lutfen bir sifre belirleyiniz :");
	scanf("%s",&sifre);
	printf("Basarili sekilde kayit oldunuz\n****Giris ekranina yonlendiriliyorsunuz\n****");
	girisYap(isim,sifre);
}
int bilgiYarismasi(){
	char cevap[2];
	int can=3;
	int puan=0;
	printf("Yarisma basladi...");
	while(can!=0){
	
	if(puan==0){
	
	printf("[Soru-1]Asagidakilerden hangisi Turkiye Cumhuriyetinin baskentidir ?\nA-)Istanbul\nB-)Ankara\nC-)Bursa\nD-)Kars\n :");
	scanf("%s",cevap);
	if(strcmp(cevap,"b")==0){
	printf("\nDogru cevap\n");
	puan+=10;
	printf("Puanininiz :%d",puan);	
	}
	else
	{
		can--;
		printf("Hatali cevap verdiniz tekrar deneyiniz ");
		printf("\nKalan caniniz sudur : %d",can);
		printf("\nPuan : %d\n",puan);
	}
	}

	if(puan==10){
	
	printf("[Soru-2]Asagidakilerden hangisi Rusyanin baskentidir ?\nA-)Moskova\nB-)Ankara\nC-)Bursa\nD-)Kars\n :");
	scanf("%s",cevap);
	if(strcmp(cevap,"a")==0){
	printf("\nDogru cevap\n");
	puan=puan+=10;
	printf("Puanininiz :%d",puan);	
	}
	else{
		printf("Hatali cevap verdiniz tekrar deneyiniz ");
		printf("Puan : %d",puan);
		can--;
		printf("\nKalan caniniz sudur : %d\n",can);
	}
	}   

	if(puan==20){
	
	printf("[Soru-3]Asagidakilerden hangisi Fransanin baskentidir ?\nA-)Moskova\nB-)Ankara\nC-)Paris\nD-)Kars\n :");
	scanf("%s",cevap);
	if(strcmp(cevap,"c")==0){
	printf("\nDogru cevap\n");
	puan+=10;
	printf("Puanininiz :%d",puan);
	can=0;	
	}
	else{
		printf("Hatali cevap verdiniz tekrar deneyiniz ");
		printf("Puan : %d\n",puan);
		can--;
		printf("\nKalan caniniz sudur : %d",can);
	} 	
	}
}
	return puan;

	
}
int yarismaSon(int puan){
	printf("\nYarismaniz sona ermistir\nGuncel skorunuz : %d",puan);
	
}


int main(){
	char isim[200]="Eren";
	char sifre[200]="12345";
	hosgeldiniz();
	int secim=secimFonksiyonu();
	if(secim==1){
		girisYap(isim,sifre);
	}
	else if(secim==2){
		kayitOl();
	}
	int skor=bilgiYarismasi();
	yarismaSon(skor);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
