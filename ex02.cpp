#include <stdio.h>
#include <string.h>

struct sinhvien{
	char name[50];
	char age[50];
	char number[30];
	
};
void nhap(sinhvien *x){
	printf("Nhap Ten: ");
	gets(x->name);
	
	printf("Nhap Tuoi: ");
	gets(x->age);
	
	printf("Nhap so dien thoai: ");
	gets(x->number);
}
int main(){
	sinhvien s;
	nhap(&s);
	
	
	printf("Ho va ten: %s\n",s.name);
	printf("Tuoi: %s\n",s.age);
	printf("So dien thoai: %s\n",s.number);
	
	return 0;
}
