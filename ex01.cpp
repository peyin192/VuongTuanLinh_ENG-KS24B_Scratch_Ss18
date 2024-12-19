#include <stdio.h>
#include <string.h>

struct sinhvien{
	char name[50];
	char age[50];
	char number[30];
	
};
int main(){
	sinhvien s;
	strcpy(s.name,"Pham Thi Huyen Trang");
	strcpy(s.age,"18");
	strcpy(s.number,"0123456789");
	
	printf("Ho va ten: %s\n",s.name);
	printf("Tuoi: %s\n",s.age);
	printf("So dien thoai: %s\n",s.number);
	
	return 0;
}
