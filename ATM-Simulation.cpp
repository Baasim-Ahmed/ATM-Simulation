#include <stdio.h>
 
unsigned long amount = 1000, dep, wd, x;

int ch, p, k;

char transaction ='y';

bool password = false;

int amount_title = 0;

int atm()
{
	int accounts[10][5] = 
	{

     {1234, 3000},

     {3343, 2000},

     {4321, 3500},
     
	}; 
 
	 
	while (password != true)
	{
		printf("\n\tENTER YOUR SECRET PIN NUMBER : ");

		scanf("%d", &p);

		for(x = 0; x < 9; x++)
    	{
		   
	           if(accounts[x][0] == p)
			   {
	           	    password = true;

	           	    p = accounts[x][0];

	           	    amount = accounts[x][1];

	           	    amount_title = x;

	           	    break;
			   }
     	    
     	}
		
		if (password != true)
		
		printf("\n\t\tPLEASE ENTER VALID PASSWORD\n");
	}
	do
	{
		printf("\n\t\t\t********Welcome to ATM Service***********\n");
		
		printf("*** Welcome  %s ***",accounts[1]);

		printf("\n1. Check Balance\n");
		
		printf("2. Withdraw Cash\n");
		
		printf("3. Deposit Cash\n");
		
		printf("4. Quit\n");
		
		printf("******************?**************************?*\n\n");
		
		printf("Enter your choice: ");
		
		scanf("%d", &ch);
		
		switch (ch)
		{
		
		case 1:
		
			printf("\n YOUR BALANCE IN Rs : %lu ", amount);
		
			break;
		
		case 2:
		
			printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
		
			scanf("%lu", &wd);
		
			if (wd % 100 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
		
			else if (wd >(amount - 500))
			{
				printf("\n INSUFFICIENT BALANCE.");
			}
		
			else
			{
				amount = amount - wd;
		
				printf("\n\n\a PLEASE COLLECT CASH");
		
				printf("\n YOUR CURRENT BALANCE IS %lu ", amount);
			}
			
			break;
		
		case 3:
			
			printf("\n ENTER THE AMOUNT TO DEPOSIT : ");
		
			scanf("%lu", &dep);
        
		    amount = amount + dep;
		
			printf("YOUR BALANCE IS %lu", amount);
		
			break;
		
		case 4:
		
			printf("\n THANK U FOR USING THIS ATM.");
		
			break;
		
		default:
		
			printf("\n INVALID CHOICE");
		}
		
		printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION ?(y/n): \n");
		
		fflush(stdin);
		
		scanf("%c", &transaction);
		
		if (transaction == 'n'|| transaction == 'N')
    
	    k = 1;
	} 
	while (!k);
	
	printf("\n\n DEAR VALUED CUSTOMER THANKS FOR USING OUR ATM SERVICE !");
	
	
}

int main()
{
	atm();
}
