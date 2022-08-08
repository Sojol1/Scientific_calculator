#include<stdio.h>
#include<math.h>

int main()
{
int choice, i, a, b,result1;
float x, y, result,save;
do {
        printf("\n\t\t\t==**==SCIENTIFIC  CALCULATOR==**==\n");
printf("\nSelect your operation (0 to exit):\n");
printf("1. Addition\t2. Substraction\t3. Multiply\t4. Division\n\n");
printf("5. Square root\t6. X^Y\t7. X^2\t8. X^3\t9. 1/X\t10. X^(1/Y)\n\n");
printf("11. X^(1/3)\t12. 10 ^ X\t13. X!\t14. aPercent\t15. log10(x)\t16. Modulus\n\n");
printf("17. Sin(X)\t18. Cos(X)\t19. Tan(X)\t\t20. Cosec(X)\t21. Cot(X)\t22. Sec(X)\n\n");
printf("23. acos(x)\t24. asin(x)\t25. atan(x)\t\t26. Decimal to Binary\t\t27. Binary to Decimal\n\n");
printf("28. Exponential\t29. Binary to Hexa decimal\t\t30. Hexa Decimal to Binary\t31. nCr\n\n32. nPr\t33. Percentage\t34. EXP\n\n");
printf("Choice: ");
scanf("%d", &choice);
if(choice == 0) exit(0);
switch(choice) {

case 1:
printf("Enter 1st: ");
scanf("%f", &x);
printf("\nEnter 2nd: ");
scanf("%f", &y);
result = x + y;
printf("\nResult: %f\n\n", result);
break;

case 2:
printf("Enter 1st: ");
scanf("%f", &x);
printf("\nEnter 2nd: ");
scanf("%f", &y);
result=x-y;
printf("\nResult: %f\n\n", result);
break;

case 3:
printf("Enter 1st: ");
scanf("%f", &x);
printf("\nEnter 2nd: ");
scanf("%f", &y);
result = x * y;
printf("\nResult: %f\n\n", result);
break;

case 4:
printf("Enter 1st: ");
scanf("%f", &x);
printf("\nEnter 2nd: ");
scanf("%f", &y);
result = x / y;
printf("\nResult: %f\n\n", result);
break;

case 5:
printf("Enter the no.: ");
scanf("%f", &x);
result = sqrt(x);
printf("\nResult: %f\n\n", result);
break;

case 6:
printf("Enter 1st: ");
scanf("%f", &x);
printf("\nEnter 2nd: ");
scanf("%f", &y);
result = pow(x, y);
printf("\nResult: %f\n\n", result);
break;

case 7:
printf("Enter the no.: ");
scanf("%f", &x);
result = pow(x, 2);
printf("\nResult: %f\n\n", result);
break;

case 8:
printf("Enter the no.: ");
scanf("%f", &x);
result = pow(x, 3);
printf("\nResult: %f\n\n", result);
break;

case 9:
printf("Enter the no.: ");
scanf("%f", &x);
result = pow(x, -1);
printf("\nResult: %f\n\n", result);
break;

case 10:
printf("Enter 1st: ");
scanf("%f", &x);
printf("\nEnter 2nd: ");
scanf("%f", &y);
result = pow(x, (1/y));
printf("\nResult: %f\n\n", result);
break;

case 11:
printf("Enter the no.: ");
scanf("%f", &x);
y = 3;
result = pow(x, (1/y));
printf("\nResult: %f\n\n", result);
break;

case 12:
printf("Enter the no.: ");
scanf("%f", &x);
result = pow(10, x);
printf("\nResult: %f\n\n", result);
break;

case 13:
printf("Enter the no.: ");
scanf("%f", &x);
result = 1;
for(i = 1; i <= x; i++) {
result = result * i;
}
printf("\nResult: %.f\n\n", result);
break;

case 14:
printf("Enter the no.: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = (x * y) / 100;
printf("\nResult: %.2f\n\n", result);
break;

case 15:
printf("Enter the no.: ");
scanf("%f", &x);
result = log10(x);
printf("\nResult: %.2f\n\n", result);
break;

case 16:
printf("Enter 1st: ");
scanf("%d", &a);
printf("\nEnter 2nd: ");
scanf("%d", &b);
result1 = a%b;
printf("\nResult: %d \n\n", result1);
break;

case 17:
printf("Enter the no.: ");
scanf("%f", &x);
result = sin(x * 3.14159 / 180);
printf("\nResult: %.2f\n\n", result);
break;

case 18:
printf("Enter the no.: ");
scanf("%f", &x);
result = cos(x * 3.14159 / 180);
printf("\nResult: %.2f\n\n", result);
break;

case 19:
printf("Enter the no.: ");
scanf("%f", &x);
result = tan(x * 3.14159 / 180);
printf("\nResult: %.2f\n\n", result);
break;

case 20:
printf("Enter the no.: ");
scanf("%f", &x);
result = 1 / (sin(x * 3.14159 / 180));
printf("\nResult: %.2f\n\n", result);
break;

case 21:
printf("Enter the no.: ");
scanf("%f", &x);
result = 1 / tan(x * 3.14159 / 180);
printf("\nResult: %.2f\n\n", result);
break;

case 22:
printf("Enter the no.: ");
scanf("%f", &x);
result = 1 / cos(x * 3.14159 / 180);
printf("\nResult: %.2f\n\n", result);
break;

case 23:
    printf("enter the no.: ");
    scanf("%f",&x);
    result=(acos(x)*180)/3.14159;
    printf("\nResult:%.2f\n\n",result);
    break;

case 24:
        printf("enter the no.: ");
    scanf("%f",&x);
    result=(asin(x)*180)/3.14159;
    printf("\nResult:%.2f\n\n",result);
    break;

case 25:
        printf("enter the no.: ");
    scanf("%f",&x);
    result=(atan(x)*180)/3.14159;
    printf("\nResult:%.2f\n\n",result);
    break;

case 26:
            {
             {
    int x,var,binary=0,i=1,rem;
    printf("Enter Decimal: ");
    scanf("%d",&x);
    var=x;
    while(x!=0)
    {
        rem=x%2 ;
        x=x/2;
        binary=binary+(rem*i);
        i=i*10;
    }
    printf("Result in Binary: %d\n\n",binary);
}
}; break;

case 27:
{
{
    int x,num=0,i=0,rem;
    printf("Enter Binary: ");
    scanf("%d",&x);
    while(x>0)
    {
        rem=x%10;
        num=num+rem*pow(2,i);
        i++;
        x=x/10;
    }
    printf("Result in Decimal: %d\n\n",num);
}
}; break;

case 28:
{
{
   double x ;
   printf("Enter the 1: ");
   scanf("%lf",&x);

   printf("Result:%lf\n\n", exp(x));
}};
break;

case 29:
{
    long int binaryval, hexadecimalval = 0, i = 1, remainder;

    printf("Enter Binary: ");
    scanf("%ld", &binaryval);
    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
printf("Result in Hexa Decimal: %lX\n\n", hexadecimalval);
} break;

case 30:
{
{
	long int i=0;
	char binnum[100], hexdec[100];
	printf("Enter Hexa Decimal: ");
	scanf("%s",hexdec);
	printf("\nResult in Binary: ");
	while(hexdec[i])
	{
		switch(hexdec[i])
		{
			case '0' : printf("0000");
				break;
			case '1' : printf("0001");
				break;
			case '2' : printf("0010");
				break;
			case '3' : printf("0011");
				break;
			case '4' : printf("0100");
				break;
			case '5' : printf("0101");
				break;
			case '6' : printf("0110");
				break;
			case '7' : printf("0111");
				break;
			case '8' : printf("1000");
				break;
			case '9' : printf("1001");
				break;
			case 'A' : printf("1010");
				break;
			case 'B' : printf("1011");
				break;
			case 'C' : printf("1100");
				break;
			case 'D' : printf("1101");
				break;
			case 'E' : printf("1110");
				break;
			case 'F' : printf("1111");
				break;
			case 'a' : printf("1010");
				break;
			case 'b' : printf("1011");
				break;
			case 'c' : printf("1100");
				break;
			case 'd' : printf("1101");
				break;
			case 'e' : printf("1110");
				break;
			case 'f' : printf("1111");
				break;
			default : printf("\nInvalid hexadecimal digit %c",hexdec[i]);
		}
		i++;
	}
}
}; break;


case 31:
{
    {
    float i,n,r, ncr;
    float fact1=1,fact2=1,fact3=1;

    printf("Enter n:");
    scanf("%f",&n);
    printf("Enter r:");
    scanf("%f",&r);
    for(i=1;i<=n;i++)
    {
        fact1*=i;
    }
    for(i=1;i<=r;i++)
    {
        fact2*=i;
    }
    for(i=1;i<=(n-r);i++)
    {
        fact3*=i;
    }
    ncr=fact1/(fact2*fact3);
    printf("Result of c(n,r)=%.1f",ncr);
}
}; break;

case 32:
{
{
    float i,n,r, npr;
    float fact1=1,fact2=1;

    printf("Enter 1:");
    scanf("%f",&n);
    printf("Enter 2:");
    scanf("%f",&r);
    for(i=1;i<=n;i++)
    {
        fact1*=i;
    }
    for(i=1;i<=(n-r);i++)
    {
        fact2*=i;
    }
    npr=fact1/(fact2);
    printf("Result of p(n,r)=%.1f",npr);
}
}; break;

case 33:
        printf("Enter 1: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = (x * 100) / y;
printf("\nResult: %.2f\n", result);
break ;

case 34:
        printf("Enter 1: ");
scanf("%f", &x);
printf("Enter 2: ");
scanf("%f", &y);
result = x*(pow(10, y));
printf("\nResult: %.2f\n", result);
break;


default:
printf("\nInvalid Choice!\n");
}
} while(0);

{


    FILE*fptr;
    fptr=fopen("save.txt","w");
    if(fptr==NULL)
    {
        printf("error");
    }
    fprintf(fptr,"\nsave=%f",result);
    fclose(fptr);}


return 0;
}
