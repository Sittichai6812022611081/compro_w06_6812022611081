#include <stdio.h>                                  //ประกาศไลบรารีสำหรับการใช้งาน printf

int main() {                                        //ฟังก์ชันหลัง
    int a = 5, b = 2;                               //กำหนดตัวแปร a = 5, b = 2 ในรูปแบบ int
    float y = 4.5, x = 3.0;                         //กำหนดตัวแปร  y = 4.5, x = 3.0 ในรูปแบบ float

    int r1 = a++ * b + (int)y % 3;                  //กำหนดตัวแปร r1 = a++ * b + (int)y % 3 ในรูปแบบ int
    printf("int r1 = %d\n", r1);                    //แสดงค่า int r1

    int r2 = (a > b) && ((int)x / b < 2);           //กำหนดตัวแปร r2 = (a > b) && ((int)x / b < 2 ในรูปแบบ int
    printf("int r2 = %d\n", r2);                    //แสดงค่า int r2

    float r3 = ++x * y - a / 2;                     //กำหนดตัวแปร r3 = ++x * y - a / 2 ในรูปแบบ float
    printf("float r3 = %.2f\n", r3);                //แสดงค่า float r3

    float r4 = ((x += 1.5) > y) || (b-- > 0);       //กำหนดตัวแปร r4 = ((x += 1.5) > y) || (b-- > 0) ในรูปแบบ float
    printf("float r4 = %.2f\n", r4);                //แสดงค่า float r4
    
    return 0;                                       //คืนค่า 0 เพื่อบอกว่าทำงานสำเร็จแล้ว

    
}