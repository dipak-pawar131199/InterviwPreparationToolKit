# include<stdio.h>
//125 => 521
/*
  algorithum:
   step1:accept number ;num
   step2:find lastdigit of number; ld=num%10
   step3: revn=(revn*10)+ld;
   repet step2 &3 until becomes num=0
   */

void main()
{
    int num,lastdigit,rnum=0;
    //Accpet number
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0)
    {
        lastdigit=num%10;
        rnum=(rnum*10)+lastdigit;
        num/=10;
    } 
    printf("Reverse number is: %d\n",rnum);
    
    return;
}//end main()