#include <stdio.h>

// ฟังก์ชันรับค่าและแสดงผล ไม่มีการ return ค่า
void inputAndShow() {
     int nember_of_transaction;  
    char channael_type;
    float base_fee;         

    printf("Enter nember of transaction: ");
    scanf("%d", &nember_of_transaction);   // รับค่าจำนวนครั้งธุรกรรม

    printf("Enter Channael type for TXN: ");
    scanf("%s", &channael_type); // รับค่าประเภทช่องทางธุรกรรม

    printf("Enter Total Transaction Value: ");
    scanf("%f", &base_fee); // รับค่ามูลค่าธุรกรรมรวม

    // แสดงข้อผู้ใช้ที่กรอกมา
    printf("\n--- Transaction Fee Calculator ---\n");
    printf("Nember of transaction: %d\n | Channael type: %s\n | Total Transaction: %.2f THB\n", nember_of_transaction, channael_type, base_fee);

    // ตรวจสอบค่าป้อนเข้าว่าผิดปกติหรือไม่
    if (channael_type < 0 || level < 1 || level > 5 || price < 0) {
        printf("Sorry no discount applied\n");
    } else {
        
        if (channael_type == A || price > 50000) {
            printf("Adjustment Rate: 25%%\n");
        }
        
        else if (channael_type > 60 || (level >= 3 && level < 5)) {
            printf("Adjustment Rate: 20%%\n");
        }
       
        else if channael_type>= 30 && age <= 40 && price > 2000) {
            printf("Adjustment Rate: 15%%\n");
        }
        
       
        else {
            printf("Sorry \n");
        }
    }
    // แสดงผลข้อมูลที่กรอกเข้ามา
    printf("Channal Type: = %d\n", nember_of_transaction);
    printf("Adjustment Rate = %s\n", channael_type);
    printf("Final Total Fee: = %.2f\n", base_fee);
}

int main() {
    // เรียกใช้ฟังก์ชัน inputAndShow()
    inputAndShow();

    return 0; // จบโปรแกรม
}
