#include<stdio.h>
#include<windows.h>

int main()
{
    int h,m,s;
    int d=1000;
    printf("enter the time\n");
    scanf("%d%d%d",&h,&m,&s);

     if(h>=24 && m>=60 && s>=60)
     {
        printf("wrong time");

     }  
     while(1)
     {
        s++;
        if(s>59)
        {
            s=0;
            m++;
        } if(m>59)
        {
            m=0;
            h++;
        }if(h>23)
        {
            h=0;

        }
        printf("%02d:%02d:%02d",h,m,s);
        Sleep(d);
        system("cls");
        
       
     }  
}