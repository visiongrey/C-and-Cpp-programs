#include<stdio.h>
#include<string.h>
int main(){
char s[20];
int i,c=0;
printf("Enter a string : ");
scanf("%s",s);
for(i=0;s[i] != '\0';i++){
if((s[i] == '+')||(s[i] == '-')||(s[i] == '/')||(s[i] == '*')||(s[i] == '%'))
  ++c;
}
printf("The no. of operator is : %d\n",c);
return 0;
}
