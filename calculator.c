#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter numbers:");
    scanf("%d%d",&a,&b);
    printf("Enter operation:");
    scanf(" %c",&op);
    switch(op){
      case '+':
        printf("Sum=%d",a+b);
        break;
      case '-':
        printf("Difference=%d",a-b);
        break;
      case '*':
        printf("Product=%d",a*b);
        break;
      case '/':
        printf("Division=%f",(float)a/b);
        break;
      default:
        printf("Wrong operator");
    }
    return 0;
}
