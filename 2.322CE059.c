
#include<stdio.h>//this code cant give perfect result...
void main()
{
   long int bs,da,hra,ma,ta,pf,it,gross_salary,net_salary,allowances,deduction;
    printf("\n Enter Your Basic Salary:");
    scanf("% ld",bs);
    da=(bs*70)/100;
    hra=(bs*7)/100;
    ma=(bs*2)/100;
    ta=(bs*4)/100;
    allowances=(da+hra+ma+ta);
    pf=(bs*12)/100;
    it=50;
    deduction=(pf+it);
    net_salary=(bs+allowances-deduction);
    printf("\nAllowances:");
    printf("\nDA of basic salary is      :%ld",da);
    printf("\nHRA of basic salary is     :%ld",hra);
    printf("\nMA of basic salary is      :%ld",ma);
    printf("\nTA of basic salary is      :%ld",ta);
    printf("Deduction:");
    printf("Pf of basic salary is        :%ld",pf);
    printf("It of basic salary is        :%ld",it);
    printf("Deduction of basic salary is :%ld",deduction);
    printf("Net salary is                :% ld",net_salary);



}
