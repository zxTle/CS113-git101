#include<stdio.h>
#include<stdlib.h>
//char name[20];
char number[20];
//int number;
int main(){
    //printf("Enter name: ");
    // gets(name); //ใช้รับข้อมูลตัวอักษร ดึงค่าตั้งแต่ address แรกจนถึง \n
    //fgets(name,5 , stdin); //ใช้อ่านค่าจากไฟล์ได้  5  คือ buffer  ใช้กำหนดตัวอักษรที่จะรับเข้ามา ** ควรกำหนดเผื่อ \0 และ \n
    //getchar(chr) // ใช้รับตัวอักษรตัวเดียวและจะเก็บค่าเป็นรหัส ascii
    //int i= atoi(number); // atoi คือ แปลงจาก array to integer // atof คือ  array to float
    // printf("number = %s, i = %d",number,i);
    // putchar(100); // ใช้แสดงผลตัวอักษร 1 ตัวแปลงจาก ascii code
    //puts //  ย่อมาจาก put string ใช้แสดงผลเหมือน printf แต่จะขึ้นบรรทัดใหม่เสมอ
    
    //-----------------------------------------------------------------//
    int f=0;
    float isExist= 0.0;
    char isOnline ='\0';
    // fgets(number, 5, stdin);
   // int i = atoi(number);
   // if (i  > 0 && i <= 10) // คำสั่งตามเงื่อนไข && คือoperator  และ
   // {
   //    printf("if = %d\n", i > 0 && i<=10); // ในภาษา c หากเป็นจริงจะคืนค่า 1 หากเท็จคืน่า 0
   // }

  //-----------------------------------------------------------------//

  fgets(number, 5, stdin);
   int i = atoi(number);
   // int count = 0;
   // while (count < i){  // while ใช้กับ loop ที่ไม่รู้จำนวนรอบที่แน่นอน ตรงตามเงื่อนไขจะเข้า loop
   //    printf("%d\n",count);
   //    count++;  // **NOTE!! count++ กับ  ++count เท่ากันต่างกันตรงลำดับการบวกค่าเพิ่ม ถ้า ++count จะบวกค่าเข้าไปก่อน count++ จะบวกค่าทีหลัง
   // } // infinite while loop ใช้  while(1)

 //-----------------------------------------------------------------//

 for (int j=0; j<i; j++){ // statement ของ for loop 1. ทำก่อนเข้า loop(ทำครั้งเดียว) 2.check condition 3. ทำหลังจบ loop
      printf("j = %d\n", j);
   }
}