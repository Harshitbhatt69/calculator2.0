#include<stdio.h>

int main()
{
        float a,b,c;
        char f;
        printf("general instruction \nformat: number operation number\n\n\n\n\n ");
        printf("addition(+)\n subtraction (-)\n multiplication (*)\n division (/)\n powers(^)\n square root (~)\n");
        scanf("%f%c%f ",&a,&f,&b);
        printf("Answer: ");
        if(f=='+')
        {c=a+b;
            printf("%.2f",c);

        }
        else if(f=='-')
        {
            c=a-b;
            printf("%.2f",c);
        }
        else if(f=='*')
        {
           c=a*b;
           printf("%.2f",c);
        }
        else if(f=='/')
        {
            c=a/b;
            printf("%.2f",c);
        }
        else if(f=='^')
        {
            c=pow(a,b);
            printf("%.2f",c);
        }
        else if(f=='~')
        {
            c=sqrt(a);
            printf("%f",c);
        }
        else
            printf("incorrect value");
        return 0;

}

