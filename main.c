#include<stdio.h>
#include<string.h>
int i = 25;
int random(){
  if(i >= 25 && i <= 45){
    i++;
  }
  else{
    i = 25 ;
  }
  return i; 
}
int main(){
char b[100];
char a[100];
int s = 0,k=0;
printf("Embedded Terminal v1.0\n");
while(1){
printf("> ");
fgets(b,sizeof(b),stdin);
b[strcspn(b, "\n")] = '\0';
if(strcmp(b,"exit")==0){
  printf("closing terminal...\n");
  break;
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
}else if(strcmp(b,"temp")==0){
  printf("%d C\n",random());
  int x= strlen(b);
  for(int i =0 ;i< x; i++){
   a[k] = b[i]; 
   k++;
   }
    a[k] = '\n';
   k++;
}
else if(strcmp(b,"history")==0){
  printf("%s\n",a);
}
else{
  printf("unknown command\n");
}
}
return 0;
}
