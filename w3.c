#include<stdio.h>
int addTen(int x) // ประกาศฟังก์ชัน addTen รับ parameter เป็นจำนวนเต็มตัวแปร x
{
    x = x+10;
    return x; //return  ค่า x กลับเป็นจำนวนเต็มจาก data type ที่กำหนดหน้าฟังก์ชัน
}
int addTwenty(); // กำหนดฟังก์ชันPrototype
int x = 1000;
int main()
{
    int x = 50;
    int y = addTen(x); //เรียกฟังก์ชัน addTen
    printf("x in main = %d\n",x);
    printf("addTen in main = %d\n",y);
    printf("addTwenty in main = %d\n",addTwenty());
}
int addTwenty(){
    printf("x in addTwenty = %d\n",x);//ไม่มี x  ในฟังก์ชัน  addTwenty จะใช้ค่า x ใน global คือ 1000
    x = x+20;// ค่า x ใน global กลายเป็น1020
    return x;//returnแล้ว ค่า x ที่อยู่ในmemoryของฟังก์ชันนี้นี้จะถูกลบทันที
}