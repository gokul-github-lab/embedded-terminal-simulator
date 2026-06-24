#include<stdio.h>
#include<string.h>
int main(){
char b[100];
int s = 0;
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
}
else if(strcmp(b,"led on")==0){
    s = 1;
    printf("LED ON\n");
}
else if(strcmp(b,"led off")==0){
    s = 0;
   printf("LED OFF\n");
}
else if(strcmp(b,"status")==0){
   if(s==1){
    printf("LED ON\n");
  }
  else{
    printf("LED OFF\n");
  }
}
else{
  printf("unknown command\n");
}
}
return 0;
}
