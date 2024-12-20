#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

typedef struct SinhVien sv;

int main(void) {
    sv arrSv[50];

    for (int i = 0; i < 5; i++) {
        arrSv[i].id = i + 1;

        printf("Moi ban nhap ten sv thu %d: ", i + 1);
        fgets(arrSv[i].name, 50, stdin);
        arrSv[i].name[strcspn(arrSv[i].name, "\n")] = '\0';

        printf("Moi ban nhap tuoi sv thu %d: ", i + 1);
        scanf("%d", &arrSv[i].age);
        getchar();

        printf("Moi ban nhap sdt sv thu %d: ", i + 1);
        fgets(arrSv[i].phoneNumber, 15, stdin);
        arrSv[i].phoneNumber[strcspn(arrSv[i].phoneNumber, "\n")] = '\0';
    }

    printf("\nDanh sach sinh vien:\n");
    printf("ID \t Ten \t\t Tuoi \t SDT\n");
    printf("-----------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%d \t %-15s \t %-5d \t %-15s\n", arrSv[i].id, arrSv[i].name, arrSv[i].age, arrSv[i].phoneNumber);
    }

    return 0;
}

