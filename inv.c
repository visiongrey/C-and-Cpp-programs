#include<stdio.h>
#include<stdlib.h>	//for exit()

struct inventory{	//defination
char name[255];
int no,price;
};

int main(){		//driverprogram
FILE *f;
char c;
long int o;
 
 f = fopen("items","a+");
 if(f==NULL){
  printf("Error opening file!!");
  exit(1);
 }
 struct inventory i;		//structure object
  
  printf("\nName : ");		//takeinput
  fgets(i.name,255,stdin);
  printf("\nNumber : ");
  scanf("%d",&i.no);
  printf("\nPrice : ");
  scanf("%d",&i.price);

fprintf(f,"\n%d\t%d\t%s",i.no,i.price,i.name);
rewind(f);			//putpointer_at_beg
printf("\nNo.\tPrice\tName\n");
c = fgetc(f); 
    while (c != EOF) 		//printall_records
    { 
        printf ("%c", c); 
        c = fgetc(f); 
    }

 printf("\n\nLast record in file-\n");
              o = sizeof(i)*-1;
              fseek(f,o,SEEK_END);
              fread(&i,sizeof(i),1,f);
              printf("\nNo. : %d",i.no);
              printf("\nPrice : %d",i.price);
              printf("\nName : %s",i.name);
 
 printf("Current pointer position : %ld\n", ftell(f));
 fclose(f);
 return 0;
}
