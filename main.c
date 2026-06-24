#include<stdio.h>
#include<string.h>
int main(){
char b[100];
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
else{
  printf("unknown command\n");
}
}
return 0;
}
