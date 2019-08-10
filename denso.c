#include<stdio.h>

int main()

{

    int x,p;

    scanf("%d %d",&x,&p);

    int i=x;

    while(i>0)

    {

       
         if(i<=0)

		{

		        break;
        
        }

 	 	else

	        {

		        printf("%d \t",i);

	        }

	        i=(int)((i)*(100-p)/100);
	
    }

    if(i<=0)

    {

        printf("FREE");
    
}

}