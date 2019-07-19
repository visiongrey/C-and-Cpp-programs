#include<stdio.h>
#include<ctype.h>
int main()
	{char c;
	printf("Enter a character : ");
	scanf("%c",&c);
		
		if(isdigit(c))
			printf("Entered character is digit.");
		else if(islower(c))
			printf("Entered character is lower case alphabet.");
		else if(isupper(c))
			printf("Entered character is upper case alphabet.");
		else if(ispunct(c))
			printf("Entered character is punctuation mark.");
		else if(isspace(c))
			printf("Entered character is space.");
		else
			printf("Try something else !!");
		
	return 0;
	}
