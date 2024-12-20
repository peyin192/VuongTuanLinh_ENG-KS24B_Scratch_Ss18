#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

typedef struct SinhVien sv;

int main() {
    sv arrSv[50] = {
        {1, "Nguyen Van A", 18, "0987654320"},
        {2, "Nguyen Van B", 19, "0987654321"},
        {3, "Nguyen Van C", 20, "0987654322"},
        {4, "Nguyen Van D", 21, "0987654323"},
        {5, "Nguyen Van E", 22, "0987654324"}
    };
    
    int temp;
    printf("Moi ban nhap id: ");
    scanf("%d", &temp);
    getchar();

    if (temp >= 1 && temp <= 5) {
        printf("Moi ban nhap ten SV moi: ");
        fgets(arrSv[temp - 1].name, 50, stdin);
        arrSv[temp - 1].name[strcspn(arrSv[temp - 1].name, "\n")] = '\0';

        printf("Moi ban nhap tuoi SV moi: ");
        scanf("%d", &arrSv[temp - 1].age);

        printf("\nDanh sach sinh vien:\n");
        printf("ID \t Ten \t\t Tuoi \t SDT\n");

        for (int i = 0; i < 5; i++) {
            printf("%d \t \t \t \n", arrSv[i].id, arrSv[i].name, arrSv[i].age, arrSv[i].phoneNumber);
        }
    } else {
        printf("Khong tim thay thong tin sinh vien\n");
    }
    
    return 0;
}
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
    sv arrSv[50] = {
        {1, "Nguyen Van A", 18, "0987654320"},
        {2, "Nguyen Van B", 19, "0987654321"},
        {3, "Nguyen Van C", 20, "0987654322"},
        {4, "Nguyen Van D", 21, "0987654323"},
        {5, "Nguyen Van E", 22, "0987654324"}
    };
    
    int temp;
    printf("Moi ban nhap id: ");
    scanf("%d", &temp);
    getchar();

    if (temp >= 1 && temp <= 5) {
        printf("Moi ban nhap ten SV moi: ");
        fgets(arrSv[temp - 1].name, 50, stdin);
        arrSv[temp - 1].name[strcspn(arrSv[temp - 1].name, "\n")] = '\0';

        printf("Moi ban nhap tuoi SV moi: ");
        scanf("%d", &arrSv[temp - 1].age);

        printf("\nDanh sach sinh vien:\n");
        printf("ID \t Ten \t\t Tuoi \t SDT\n");

        for (int i = 0; i < 5; i++) {
            printf("%d \t \t \t\n", arrSv[i].id, arrSv[i].name, arrSv[i].age, arrSv[i].phoneNumber);
        }
    } else {
        printf("Khong tim thay thong tin sinh vien\n");
    }
    
    return 0;
}

