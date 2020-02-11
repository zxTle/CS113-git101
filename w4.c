#include<stdio.h>
#include<stdlib.h>
int main(){
     int x=100;
     int a= 0144;
     int b =0x64;
     printf("x = %d\n",x);
     printf("reference x = %lu\n",&x); //addressของx
     printf("reference x = %p\n",&x); //%p แสดงaddressในรูปฐาน16 0x ฐาน16, 0ฐาน8 %o,
    ///*แบบ1 */int number[] ={3,4,5,6,7}; //ประกาศarray กำหนดขนาดเสมอ
    // /*แบบ2 */int number[100];
    // /*แบบ3 */int number[100]={3,4,5,6,7};
    // number[2000] =2000;
    // printf("index 1 =%d\n",number[2000]);
    // printf("reference number[1] = %p\n",&number[2000]);
    // printf("reference number[0] = %p\n",&number[0]);
    // printf("reference number= %p\n",number); //ตัวแปรธรรมดาเก็บค่า ตัวแปรpointer เก็บ address
    //ตัวแปรpointer จะบวกขนาดของตัวแปร เช่น ถ้า+1และเป็นdata type int จะบวกเพิ่มเป็น4
    // int number[] ={3,4,5,6,7}; //address เริ่ม 00,04,08
    // int *ptr = &x; //ชี้pointerที่ไหนจะเป็น address นั้นของx
    // int *arrPtr; 
    // arrPtr = number; //pointer การใช้= เป็นการบอกว่าชี้ address เดียวกัน
    // arrPtr +=2; // ได้ address 08 ซึ่งคือ เลข5
    // *arrPtr= *arrPtr+10;//ใช้ * ดึงค่าจาก address นั้น
    // printf("arrptr = %p, *arrPtr =%d",arrPtr,*arrPtr);
    // printf("number[2] = %d\n",number[2]);

    //----------------------------------//
//     int number[] ={3,4,5,6,7};
//     for(int *ptr = number; ptr<&number[4];ptr++){
//         printf("[%p] = %d\n",ptr,*ptr);
//     }
// int *ptr2=number;
// for(int i =0;i<5;i++){
//     printf("[%p] = %d\n",ptr2+i,*(ptr2+i));
// }
//----------------------------------------
// 
//-------------------------------------//
char c;
int i;
char s[100];
scanf("%d-%c-%s",&i,&c,s); //&s คือ  address pointer s //รับเป็น format
printf("%d %c %s",i,c,s);
}

