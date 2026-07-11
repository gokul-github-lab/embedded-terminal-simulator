
#include <stdio.h>
#include<string.h>
 int j =25;
    int random(){
  if(j >= 25 && j <= 45){
    j++;
  }
  else{
    j = 25 ;
  }
  return j; 
}
char a[100];
int s = 0,k=0;
int terrminal(char b[]){
if(strcmp(b,"exit")==0){
  printf("closing terminal...\n");
  return 1;
}
else if(strcmp(b,"help")==0){
  printf("Available commands\nhelp\nled on\nled off\nstatus\ntemp\nhistory\nexit\n");
  int x= strlen(b);
  for(int i =0 ;i< x; i++){
   a[k] = b[i]; 
   k++;
   }
   a[k] = '\n';
   k++;
    return 0;
}
else if(strcmp(b,"led on")==0){
    s = 1;
    printf("LED ON\n");
    int x= strlen(b);
  for(int i =0 ;i< x; i++){
   a[k] = b[i]; 
   k++;
   }
    a[k] = '\n';
   k++;
   return 0;
}
else if(strcmp(b,"led off")==0){
    s = 0;
   printf("LED OFF\n");
   int x= strlen(b);
  for(int i =0 ;i< x; i++){
   a[k] = b[i]; 
   k++;
   }
    a[k] = '\n';
   k++;
   return 0;
}
else if(strcmp(b,"status")==0){
   if(s==1){
    printf("LED ON\n");
  }
  else{
    printf("LED OFF\n");
  }
  int x= strlen(b);
  for(int i =0 ;i< x; i++){
   a[k] = b[i]; 
   k++;
   }
    a[k] = '\n';
   k++;
   return 0;
}else if(strcmp(b,"temp")==0){
  printf("%d C\n",random());
  int x= strlen(b);
  for(int i =0 ;i< x; i++){
   a[k] = b[i]; 
   k++;
   }
    a[k] = '\n';
   k++;
   return 0;
}
else if(strcmp(b,"history")==0){
  printf("%s\n",a);
  return 0;
}
else{
  printf("unknown command\n");
  return 0;
}
 }
    
