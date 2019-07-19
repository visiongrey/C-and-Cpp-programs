#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *f;
char s;
int by=0,wd=1,ln=1;
f=fopen("uber.txt","r");
if(f==NULL){
printf("Error!!");
exit(1);
}
else{
while(s!=EOF){
s=getc(f);
if(s==' '){
by++;wd++;
}
else if(s=='\n')
ln++;
else
by++;
}
}
printf("Lines : %d\n",ln);
printf("Words : %d\n",wd);
printf("Bytes : %d\n",by);
fclose(f);
return 0;
}
