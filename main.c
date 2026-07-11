#include<stdio.h>
#include<string.h>
#include "a.h"
int main(){
char b[20];
int g;
printf("Embedded Terminal v1.0\n");
while(1){
printf("> ");
fgets(b,sizeof(b),stdin);
b[strcspn(b, "\n")] = '\0';
 g = terrminal(b);
 if(g == 1){
  break;
 }
}}
