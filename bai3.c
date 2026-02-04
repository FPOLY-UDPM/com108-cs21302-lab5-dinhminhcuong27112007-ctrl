/******************************************************************************
 * Họ và tên: [Đinh Minh Cường]
 * MSSV:      [PS48680]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 


#include <stdio.h>

// Tạo hàm hoán vị (tham chiếu bằng con trỏ)
void hoan_vi(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;

    // Nhập dữ liệu
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    // Gọi hàm hoán vị
    hoan_vi(&a, &b);

    // In kết quả
    printf("Sau hoan vi:\n");
    printf("a = %d, b = %d", a, b);

    return 0;
}


