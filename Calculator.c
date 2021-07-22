#include<stdio.h>
void main()
{
    int choice,a,b,s;
    while(1)
    {
    printf("\n1. Addition");
    printf("\n2. Subraction");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Even or Odd");  
    printf("\n6. Exit");
    printf("\n Enter your choice\n ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
                printf("Enter two number");
                scanf("%d%d",&a,&b);
                s=a+b;
                printf("\nSum is %d",s);
                break;
        case 2 :
                printf("Enter two number");
                scanf("%d%d",&a,&b);
                s=a-b;
                printf("\nSub is %d",s);
                break;
        case 3:
                printf("Enter two number");
                scanf("%d%d",&a,&b);
                s=a*b;
                printf("\nSub is %d",s);
                break;
        case 4 :
                printf("Enter two number");
                scanf("%d%d",&a,&b);
                s=a/b;
                printf("\nSub is %d",s);
                break;
        case 5 :
                printf("Enter a number");
                scanf("%d",&a);
                if(a%2==0)
                    printf("Even number");
                else
                    printf("Odd number\n");
                break;
        case  6 : exit (0);
        default: printf("invalid choice");
        break;
                 
}
}
}

