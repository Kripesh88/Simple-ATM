#include<stdio.h>
#include<windows.h>
#include<time.h>

int main(){
	system("color 4f");
	float enteredPin,count=0,amount=100000;
	int option,pin=7540;
	float balance=36000;
	int continueTransaction=1;
	time_t now;
	time(&now);
	printf("\n");
	printf("\t\t\t\t\t\t    %s",ctime(&now));
	printf("\n\t\t\t\t\t KRIPESH ATM SERVICE");
	while(pin!=enteredPin){
		printf("\n Please enter your pin:  ");
		scanf("%f",&enteredPin);
		if(enteredPin!=pin){
			printf("\a");
			
			printf("Invalid Pin!!!");
			
		}
		count++;
		if(count==3 && pin!=enteredPin){
			exit(0);
		}
	}
	while(continueTransaction){

	
		printf("\nt\t\t*********************Available Transactions**************");
		printf("\n\n\t\t 1.Withdraw");
		printf("\n\n\t\t 2.Deposit");
		printf("\n\n\t\t 3.Check Balance");
		
		printf("\n\n\n Please Select the option:");
		scanf("%d",&option);
		switch(option){
			case 1:
			
					printf("\n\t\t Enter the amount: ");
					scanf("%f",&amount);
						if(amount<=balance){
						
						balance-=amount;
						printf("\n\t\t You have withdrawan Rs %f.Your new Balance is Rs. %f ",amount,balance);
						printf("\n\t\t======================Thank you for banking with KN EMPIRE ======================");
						
						amount=1;
					}
					else{
			printf("\a");				
						printf("\n\t\t Invalid Option!!!!");
					}
						break;
						
					
					case 2:
						printf("\n\t\t Please Enter the amount: ");
						scanf("%f",&amount);
						balance+=amount;
						
						printf("\n\t\t You have deposited Rs. %f. Your new balance is %f",amount,balance);
						printf("\n\t\t======================Thank you for banking with KN EMPIRE ======================");
						
						amount=1;
						
						break;
					
					
					case 3:
					printf("\n\t\t Your Balance is Rs.%f",balance);
					printf("\n\t\t======================Thank you for banking with KN EMPIRE ======================");
					break;
					default:
							printf("\a");
										
						printf("\n\t\t Invalid Option!!!!");
						break;
						
				}
						


		printf("\n\t\t Do you wish to perform another transaction? Press 1[Yes],0[No] \n")	;
		scanf("%f",&continueTransaction);		
						
						
					}
				
		
	return 0;
	
}
