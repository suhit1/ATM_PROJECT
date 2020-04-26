#include<stdio.h>
int main()
{
    int n,j;
    float i=50000;
    char a,c,d,e,ch,ch1;
    printf("Welcome To The ATM!..\n");
    printf("plz enter your pin.\n");
    scanf(" %d",&j);
    printf("ACCEPTED\n");
    printf("d is for debit\n");
    printf("c is for credit\n");
    printf("a is for to check account balance\n");
    printf("e is for exit\n");
    printf("plz make your move by selecting any of the above option:-");
    scanf(" %c",&ch);
    for(j=0;j<1;j++)
    {
      if(ch!='a' && ch!='d' && ch!='c' && ch!='e')
      {
        printf("plz enter a valid input");
        break;
      }
      if(ch=='e')
      {
        printf("Thankyou");
        break;
      }
      if(ch=='a')
      {
        printf("your current bank balence is %.2f",i);
        break;
      }
        printf("Enter the amount\n");
        scanf("%d",&n);
      if(ch=='d')
     {
        if(i>n)
        i=i-n;
        else if(i==n)
        i=i-n;
        else
        printf("your bank account does not have sufficient bank balance to withdraw the amount you entered");
        if(i>=0)
     {
        printf("do you want a recipt.Enter Y or N:-");
        scanf(" %c",&ch1);
        if(ch1=='Y')
        printf("your current bank balence is %.2f",i);
        else
        printf("Thankyou");
     }
    }
     if(ch=='c')
     {
        i=i+n;
        printf("do you want a recipt.Enter Y or N:-");
        scanf(" %c",&ch1);
        if(ch1=='Y')
        printf("your current bank balence is %.2f",i);
        else
        printf("Thankyou");
     }
    }
    return 0;
}

