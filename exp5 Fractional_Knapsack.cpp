#include<stdio.h> 
struct Item 
{ 
int weight; 
int value; 
float ratio; 
}; 
void fractional_knapsack(int weights[ ],int values[ ],int capacity,int n) 
{ 
int i,j; 
struct Item items[n]; 
for( i=0 ; i<n ; i++) 
{ items[ i ].weight = weights[ i ]; 
items[ i ].value = values[ i ]; items[ i ].ratio = 
(float) values[ i ] / weights[ i ]; 
 } 
 for( i=0 ; i<n-1 ; i++) 
 { for( j=0 ; j<n-i-1 ; j++) 
 { 
 if(items[ j ].ratio < items[ j+1 ].ratio) 
 { 
 struct Item temp = items[ j ]; 
items[ j ] = items[ j+1 ]; items[ 
j+1 ]=temp; 
 } 
 } 
 } 
 int total_value = 0; 
printf(" Selected items : \n"); for(i=0 
; i<n ; i++) 
 { 
 if(capacity >= items[ i ].weight) 
 { 
printf(" Weight : %d , value : %d , fraction : %f \n ",items[ i ].weight , items[ i ].value , 1.0 ); 
total_value += items[ i ].value; capacity -= 
items[ i ].weight; 
 } 
else 
 { 
 float fraction = (float)capacity / items[ i ].weight;
  printf(" Weight : %d , value : %d , fraction : %f \n ",items[ i ].weight , items[ i ].value , fraction);
   total_value += fraction*items[ i ].value; break; 
 } 
} 
printf(" Maximum value : %d \n" ,total_value ); 
} 
int main() 
{ int weights[ ] = { 10,20,30 }; int 
values[ ] = { 60,100,120 }; int capacity = 
50; int n = sizeof(weights) / 
sizeof(weights[0]); 
 fractional_knapsack(weights,values,capacity,n); 
return 0; 
}
