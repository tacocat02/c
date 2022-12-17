#include<stdio.h>
main(){
	float a,b;
	char ch;
	scanf("%f %c %f",&a,&ch,&b);
	switch(ch){
		case '+':
			printf("= %.1f",a+b);
			break;
				case '-':
			printf("= %.1f",a-b);
			break;
				case '*':
			printf("= %.1f",a*b);
			break;
				case '/':
			printf("= %.1f",a/b);
			break;
			default:
				puts("something's wrong :(");
	}
	return 0;
}
