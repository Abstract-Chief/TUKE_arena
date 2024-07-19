/*File "arrays.c" create by abstarct, (Вс 29 окт 2023 16:13:44)*/
#include <stdint.h>
#include <stdio.h>
#include<math.h>
#include <stdint.h>

float lift_car_help(int r,int m1,int m2){
   if(r<0 || m1<0 || m2<0) return -1;
   return roundf((float)(r*m1*100)/(m1+m2));
}
float lift_a_car(const int stick_length, const int human_weight, const int car_weight){
   if(stick_length <0 || human_weight <0 || car_weight <0) return -1;
   return (float)lift_car_help(stick_length,human_weight,car_weight)/100;
}
float unit_price(const float pack_price, const int rolls_count, const int pieces_count){
   if(pack_price<0 || rolls_count<0 || pieces_count<0) return -1;
   return round((pack_price/rolls_count)/pieces_count*10000)/100;
}
int get_max_notes(int price){
   int notes[5]={200,100,50,20,10};
   for(int i=0;i<5;i++){
      if(price>=notes[i]) return notes[i]; 
   }
   return -1;
}

int bank_notes(const int price){
   if(price < 0) return -1;
   int ost=price;
   int i;
   for(i=0;ost>0;i++){
      int note=get_max_notes(ost);
      if(note==-1) return -1;
      ost-=note;
   }
   return i;
}
int euler(const int n){
   int otvet=n,n_copy=n;
   int i=2;
   while(i*i<=n_copy){
      if (n_copy%i==0) {
         while (n_copy%i==0)
            n_copy/=i;
         otvet-=otvet/i;
      }
      i++;
   }
   if (n>1)
   return otvet-otvet/n_copy;
   else return otvet;
}
int in(int object,int n, const int arr[]){
   for(int i=0;i<n;i++) if(arr[i]==object) return 1;
   return 0;
}
int find_missing_number(const int n,const int arr[]){
   if(n==0) return -1;
   for(int i=0;i<n+1;i++){
      if(!in(i,n,arr)) return i;
   }
   return -1;
}
__uint128_t factorial(int start,int end){
   __uint128_t otvet=1;
   for(int i=start;i<=end;i++){
      otvet*=i;
   }
   return otvet;
}
unsigned long long get_combination(int m,int n){
   __uint128_t a=factorial(m+1,n);
   __uint128_t b=factorial(1,n-m);
   return a/b;
}
 unsigned long sum_squared(const int line){
      unsigned long otvet=0;
     for(int i=0;i<=line;i++){
         unsigned long a=get_combination(i,line);
         otvet+=a*a;
     }
     return otvet;
 }
int array_min(const int input_array[], const int array_size){
    if(input_array==NULL) return -1;
    int min=input_array[0];
    for(int i=0;i<array_size;i++)
        if(min>input_array[i]) min=input_array[i];
    return min;
}
int array_max(const int input_array[], const int array_size){
    if(input_array==NULL) return -1;
    int max=input_array[0];
    for(int i=0;i<array_size;i++)
        if(max<input_array[i]) max=input_array[i];
    return max;
}
char check_prost(const int n){
   for(int i=2;i<n;i++)
      if(n%i==0) return 1;
   return 0;
}
int factorize_count(const int n){
   int a=0;
   for(int i=2;i<=n;i++){
      if(n%i==0 && !check_prost(i)) a++;
   }
   return a;
};
void podium(const int n, int arr[]){
   float obj=((float)n-3)/3;
   int k1=0,k2=0;
   if((n-3)%3==1)k2=1;
   if((n-3)%3==2){
      k2=k1=1;
   }
   arr[0]=obj+1+k1;
   arr[1]=obj+2+k2;
   arr[2]=obj;
}
