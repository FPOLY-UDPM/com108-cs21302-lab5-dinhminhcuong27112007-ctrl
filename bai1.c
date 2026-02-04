/******************************************************************************
 * Họ và tên: [Đinh Minh Cường]
 * MSSV:      [PS48680]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

// Hàm tìm giá trị lớn nhất trong 3 số
int max3(int a, int b, int c){
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}

int main(){
    int a, b, c;

    // Nhập 3 số
    printf("Nhap 3 so: ");
    scanf("%d %d %d", &a, &b, &c);

    // Gọi hàm và in kết quả
    printf("So lon nhat la: %d", max3(a, b, c));

    return 0;
}
