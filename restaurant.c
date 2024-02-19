#include<stdio.h>
void menu();
void main_dish();
void add_on();
void water();
void pays();
int a,b,c,total = 0,tip = 0;
float tax,totalmoney,pay;

int main(void){

menu();
main_dish();
water();
pays();
pay_again:

scanf("%f",&pay);
	if (pay == totalmoney){
		printf("Thank you for money Byeeeeee <3 \n");
	}
	else if (pay < totalmoney){
		printf("Lack of money = %.2f\n",pay-totalmoney);
		printf("Please input money again !!\n");
    	goto pay_again;
	}
	else{
		printf("Change = %.2f\n",pay-totalmoney);
		printf("Thank you for money Byeeeeee <3 \n");
	}
return 0;
}

void menu(){
	printf("Store name : Wave No.1 Restaurant\n\n ");
	printf("           Menu\n");
	printf("   1.Kaopad        : 40 baht\n");
	printf("   2.Kapao moo     : 50 baht\n");
	printf("   3.Padkataem moo : 50 baht\n");
	printf("   4.Kanar moo     : 45 baht\n");
	printf("   5.Gengkaree moo : 60 baht\n");
	printf("   6.Tomyum kung   : 100 baht\n");
	printf("   7.Kaa moo       : 150 baht\n");
	printf("   8.Pad Soy sauce : 45 baht\n\n");
	printf("           Add on\n");
	printf("   1.Omelet    : 15 baht\n");
	printf("   2.Fried egg : 10 baht\n");
	printf("   3.Sausage   : 20 baht\n");
	printf("   4.Ham       :  5 baht\n\n");
	printf("           Water\n");
	printf("   1.Fresh water   : 10 baht\n");
	printf("   2.Orange juice  : 15 baht\n");
	printf("   3.Coca Cola     : 20 baht\n");
	printf("   4.Chrysanthemum : 19 baht\n\n\n\n");
}

void main_dish(){
	do {
		printf("Choose a Main dish (Enter 0 = stop)\n");
			scanf("%d",&a);
			if (a==1){
				printf("Kaopad : 40 baht\n\n");
			total += 40;
			}
			else if(a==2){
				printf("Kapao moo : 50 baht\n\n");
			total += 50;
			}
			else if(a==3){
				printf("Padkataem moo : 50 baht\n\n");
			total += 50;
			}
			else if(a==4){
				printf("Kanar moo : 45 baht\n\n");
			total += 45;
			}
			else if(a==5){
				printf("Gengkaree moo : 60 baht\n\n");
			total += 60;
			}
			else if(a==6){
				printf("Tomyum kung : 100 baht\n\n");
			total += 100;
			}
			else if(a==7){
				printf("Kaa moo : 150 baht\n\n");
			total += 150;
			}
			else if(a==8){
				printf("Pad Soy sauce : 45 baht\n\n");
    		total += 45;
			}
			else if(a==0){
				printf("\n");
			total += 0;
      		break;
			}
			else {
				printf("No menu\n\n");
			total += 0;
			}
		add_on();
	}while (a != 0);
}


void add_on(){
	do{
		printf("Choose a Add on (Enter 0 = stop)\n");
			scanf("%d",&b);
			if (b==1){
				printf("Omelet : 15 baht\n\n");
			total += 15;
			}
			else if(b==2){
				printf("Fried egg : 10 baht\n\n");
	    	total += 10;
			}
			else if(b==3){
				printf("Sausage : 20 baht\n\n");
	    	total += 20;
			}
			else if(b==4){
				printf("Ham : 5 baht\n\n");
    		total += 5;
			}
			else if(b==0){
				printf("\n");
			total += 0;
			}
			else {
				printf("No add on\n\n");
			total += 0;
			}
	}while (b != 0);
}

void water(){
	do{
		printf("Choose a Water (Enter 0 = stop)\n");
			scanf("%d",&c);
			if (c==1){
				printf("Fresh water : 10 baht\n\n");
			total += 10;
			}
			else if (c==2){
				printf("Orange juice : 15 baht\n\n");
			total += 15;
			}
			else if(c==3){
				printf("Coca Cola : 20 baht\n\n");
    		total += 20;
			}
			else if(c==4){
				printf("Chrysanthemum : 19 baht\n\n");
    		total += 19;
			}
			else if(c==0){
				printf("\n");
			total += 0;
			}
			else {
				printf("No water\n\n");
			total += 0;
			}
	}while (c != 0);
}

void pays(){
	tax = 0.07;
	printf("Tip : ");
	scanf("%d",&tip);
	totalmoney = ((total*tax)+total)+tip;
	printf("Food = %d & Tip = %d & Totla Food Tax = %.2f\n",total,tip,(total*tax)+total);
	printf("All prices you have to pay = %.2f\n",totalmoney);
	printf("Money pay by the customer : ");
}
