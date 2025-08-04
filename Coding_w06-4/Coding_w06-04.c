#include <stdio.h>                                                                                                  //ประกาศไลบรารีสำหรับการใช้งาน printf 

int main () {                                                                                                       //ฟังก์ชันหลักของโปรแกรม
    printf("\nFull version\t\t\t\t\t\t\t\t\tShortened version\n\n");                                                //แสดงข้อความ Full version Shortened version
    printf("x = x -4.0;\t\t\t\t\t\t\t\t\tx -= 4.0;\n");                                                             //แสดงข้อความ x = x -4.0; x -= 4.0;
    printf("x = 6.5 * x;\t\t\t\t\t\t\t\t\tx *= 6.5;\n");                                                            //แสดงข้อความ x = 6.5 * x; x *= 6.5;
    printf("x = x %% (y + z * a);\t\t\t\t\t\t\t\tx %%= (y + z * a);\n");                                            //แสดงข้อความ x = x %% (y + z * a); x %%= (y + z * a);
    printf("x = x / (2.0 * x);\t\t\t\t\t\t\t\tx /= (2.0 * x);\n");                                                  //แสดงข้อความ x = x / (2.0 * x); x /= (2.0 * x);
    printf("total = total + (price * quantity - discount);\t\t\t\t\ttotal += (price * quantity - discount);\n");    //แสดงข้อความ total = total + (price * quantity - discount); total += (price * quantity - discount);
    printf("x = x * (1 + rate / 100);\t\t\t\t\t\t\tx *= (1 + rate / 100);\n");                                      //แสดงข้อความ x = x * (1 + rate / 100); x *= (1 + rate / 100);
    printf("score = score - (penalty * (mistake + 1));\t\t\t\t\tscore -= (penalty * (mistake + 1));\n\n");          //แสดงข้อความ score = score - (penalty * (mistake + 1)); score -= (penalty * (mistake + 1));

    return 0;                                                                                                       //คืนค่า 0 เพื่อบอกว่าทำงานสำเร็จแล้ว

}

//เปรียบเทียบผลลัพธ์ระหว่างแบบเต็มและแบบย่อ
//จะเห็นได้ว่า มีการเขียนที่แตกต่างกัน แต่ความหมายเหมือนกันหรือ out put ออกมาแล้วได้ค่าเท่ากัน ต่างกันแค่แบบเต็มจะเขียนเยอะกว่าแบบย่อ