#include<stdio.h>
//รับparameterด้วย pointer  จะ pass by reference
int addTen(int *numbers,int n){ 
    for (int i=0;i<n;i++){
        printf("[%p] = %d\n",numbers +i,*(numbers+1));
        *(numbers+1)+=10;
    }
    return 1;
}
void addTwenty(int *n){
    *n +=20;
}
int main(){
    int numbers[]={4,5,6,7,8};
    int n=5;
    addTen(numbers,n);
    for (int i=0;i<n;i++){
        printf("[%p] = %d\n",numbers +i,*(numbers+i));
    }
    addTwenty(&n);//ส่งค่า address ไปที่ฟังก์ชัน Twenty
    printf("n = %d\n",n);
}