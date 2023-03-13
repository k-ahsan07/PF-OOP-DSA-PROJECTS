#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>



void add();
void list();
void edit();
void delete1();
void search();
struct resturant{
	char name[50];
	unsigned int price;
};
struct sum{
	char nm[50];
	unsigned int pr;
	unsigned int qty;
	char fl[50];
}aahil[15];

struct sum *ptr;
struct sum *a;
FILE *fileptr;


int count=0;
int shake(char a[3][50]);
int tea(char b[3][50]);
int coffee(char c[2][50]);
void cart(char *text, unsigned int prize);
char pizzaflavour(char p[5][50]);

void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="hotel";
    char pass[10]="1234";
    do
{
	system("cls");
	system("color 2f");
    printf("\n  **************************  LOGIN FORM  **************************  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';

	i=0;
	system("color 3f");
		if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
	printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");

	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");
}

struct CustomerDetails   //STRUCTURE DECLARATION
{
	char roomnumber[10];
	char name[20];
	char address[25];
	char phonenumber[15];
	char nationality[15];
	char email[20];
	char period[10];
	char arrivaldate[10];
}s;

int main(){
	int fk;
	system("color 4f");
	printf("If you are admin then Enter 0. Else enter 1 if you are user.");	
	scanf("%d",&fk);
	
	if(fk==1){
	puts("");
	
	
	printf("\n\n\n");
	
	ptr=&aahil[0];
	a=ptr;
	system("color 3f");
	char p[5][50]={"Chicago Bulls","Florida Feast","Texas BBQ","Mexican Treat","Arizona Cream"};
	char a[3][50]={"Orea Shake","Pinacolada","Strawberry Milk Shake"};
	char b[3][50]={"Turkish-Cava","Normal-Tea","Grean Tea"};
	char c[2][50]={"Turkish Coffee,Filtered Coffee"};
	char d[3][50]={"Normal-Naan","Garlic-Naan","Butter-Naan"};
	
	printf("\n\t\t\t Food Center believes in facilitating its consumers with an experience of technology and fine dining.\n\t\t\t Relish the great moments and exceptional variety of food with us!\n\n\n");
	puts("");
	
	printf("        ||        ||  |||||| ||     ||||||  ||||||||  |||     |||  ||||||         \n");
	printf("        ||        ||  ||     ||     ||      ||    ||  || || || ||  ||             \n");
	printf("        ||   ||   ||  |||||| ||     ||      ||    ||  ||  |||  ||  ||||||         \n");
	printf("        || ||  || ||  ||     ||     ||      ||    ||  ||       ||  ||             \n");
	printf("        |||      |||  |||||| |||||| ||||||  ||||||||  ||       ||  ||||||         \n");
	
	
		struct resturant starter[5];
	
	strcpy(starter[1].name,"Chicken Corn Soup");
	starter[1].price=280;
	
	strcpy(starter[2].name,"Hot and Sour Soup");
	starter[2].price=280;
	
	strcpy(starter[3].name,"Crunchy Finger Fish");
	starter[3].price=790;
	
	strcpy(starter[4].name,"Russian Salad");
	starter[4].price=800;
	
	strcpy(starter[0].name,"Chicken Wings");
	starter[0].price=375;
	
		struct resturant special[5];
	
	strcpy(special[0].name,"King Pao chicken");
	special[0].price=700;
	
	strcpy(special[1].name,"Grilled Chicken");
	special[1].price=700;
	
	strcpy(special[2].name,"Stuffed Finger Chicken");
	special[2].price=700;
	
	strcpy(special[3].name,"Creamy Kebab");
	special[3].price=520;
	
	strcpy(special[4].name,"Singaporian Rice");
	special[4].price=700;
	
		
		struct resturant burgers[5];
	
	strcpy(burgers[1].name,"Crispy Zinger Burger");
	burgers[1].price=390;
	
	strcpy(burgers[2].name,"BBQ Chicken Burger");
	burgers[2].price=440;
	
	strcpy(burgers[3].name,"Jalapeno Burger");
	burgers[3].price=570;
	
	strcpy(burgers[4].name,"Grilled Burger");
	burgers[4].price=550;
	
	strcpy(burgers[0].name,"Chicken Royal Burger");
	burgers[0].price=620;
	
		struct resturant sandwich[5];
	
	strcpy(sandwich[1].name,"Club Sandwich");
	sandwich[1].price=390;
	
	strcpy(sandwich[2].name,"Grilled Sandwich");
	sandwich[2].price=520;
	
	strcpy(sandwich[3].name,"BBQ Club Sandwich");
	sandwich[3].price=440;
		
	strcpy(sandwich[4].name,"Malai Club Sandwich");
	sandwich[4].price=470;

	strcpy(sandwich[0].name,"Beef Steak Sandwich");
	sandwich[0].price=720;

		struct resturant f_chic[3];
		
	strcpy(f_chic[1].name,"Crispy Broast");
	f_chic[1].price=390;
	
	strcpy(f_chic[2].name,"Spicy Juicy Broast");
	f_chic[2].price=450;
	
	strcpy(f_chic[0].name,"Cheese");
	f_chic[0].price=470;
	
		struct resturant steak[2];
		
	strcpy(steak[0].name,"Beaf Steak");
	steak[0].price=1245;
	
	strcpy(steak[1].name,"Chicken Steak");
	steak[1].price=995;

		struct resturant pasta[2];
		
	strcpy(pasta[0].name,"Chicken Alfredo Pasta");
	pasta[0].price=920;
	
	strcpy(pasta[1].name,"Chicken BBQ Pasta");
	pasta[1].price=970;
	
		struct 	resturant chinese[6];
		
	strcpy(chinese[0].name,"Chicken Schezwan");
	chinese[0].price=920;	
	
	strcpy(chinese[1].name,"Chicken Shashlik");
	chinese[1].price=620;	
	
	strcpy(chinese[2].name,"Chicken Jalfrezi");
	chinese[2].price=620;
	
	strcpy(chinese[3].name,"Chicken Manchurian");
	chinese[3].price=620;	
	
	strcpy(chinese[4].name,"Chicken Chowmin");
	chinese[4].price=570;
	
	strcpy(chinese[0].name,"Chicken Fried Rice");
	chinese[0].price=420;	
	
		struct resturant BBQ[5];
		
	strcpy(BBQ[0].name,"Chicken Tikka");
	BBQ[0].price=320;
	
	strcpy(BBQ[1].name,"Chatkhara Tikka");
	BBQ[1].price=410;
	
	strcpy(BBQ[2].name,"Shahi Chatak Boti");
	BBQ[2].price=660;
	
	strcpy(BBQ[3].name,"Mughlai Boti");
	BBQ[3].price=640;
	
	strcpy(BBQ[4].name,"Malai Boti");
	BBQ[4].price=550;
	
		struct resturant desi[3];
		
	strcpy(desi[0].name,"Karahi");
	desi[0].price=780;
					
	strcpy(desi[1].name,"Brain Tawa Masala With Butter");
	desi[1].price=900;
	
	strcpy(desi[2].name,"Handi");
	desi[2].price=925;
	
		struct resturant pizza[3];
		
	strcpy(pizza[0].name,"Large Pizza");
	pizza[0].price=2000;
	
	strcpy(pizza[1].name,"Medium Pizza");
	pizza[1].price=1400;
	
	strcpy(pizza[2].name,"Small Pizza");
	pizza[2].price=800;	
	
		struct resturant drink[4];
		
	strcpy(drink[0].name,"Shakes");
	drink[0].price=400;
	
	strcpy(drink[1].name,"Tea");
	drink[1].price=100;	
	
	strcpy(drink[2].name,"Coffee");
	drink[2].price=200;
	
	strcpy(drink[3].name,"Drinks");
	drink[3].price=100;
	
		struct resturant roti[3];
		
	strcpy(roti[0].name,"Paratha");
	roti[0].price=50;
	
	strcpy(roti[1].name,"Naan");
	roti[1].price=30;
	
	strcpy(roti[2].name,"Raita");
	roti[2].price=50;
	
	int j,y;
	char cha[5],ch,fname[50];
	int i,n,continu,sum=0;
	
			
	
printf("\n\n\t\t\t We have answer to your every mood.\n\t\t\t Please type the given alphebat(small case) of the following cuisines");
printf("\nStarter\t\ta\nOur-special\tb\nBurgers\t\tc\nSandwich\td\nF_chic\t\te\nSteak\t\tf\nPasta\t\tg\nChinese\t\th\nBBq\t\ti\nPakistani\tj\nPizza\t\tk\nBeverages\tl\nAdd-Ons\t\tm\n");	

do{
j=1;			
	puts("");
	scanf("%c",&cha[j]);
	printf("\n\n");
	
	switch(cha[j]){
		
		case'a': 
			for(i=0;i<5;i++){
				printf(" %20s",starter[i].name);
				printf("\t");
				printf("%d\n",starter[i].price);
				}
			
			n=1;
			
			
			while(n!=0){
				
				printf("\nTO END THE PROGRAM PRESS 0.To get details of that particular item, dial its serial number:\t");
				scanf("%d",&n);
				
				switch(n){
					
					case 1:
						printf("\n\n %s:\n\tPure chicken stock with chicken minced, and bits of corn.\n",starter[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",starter[n-1].name);
								cart(starter[n-1].name,starter[n-1].price);}
						break;
						
					case 2:
						printf("\n\n %s:\n\tMade with chicken broth, with chunks of chickens and variety vegetable along with tangy taste.\n",starter[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",starter[n-1].name);
								cart(starter[n-1].name,starter[n-1].price);}
						break;
						
					case 3:
						printf("\n\n %s:\n\tExtra crispy boneless fish strips coated and deep fried to perfection. Served with tarter sauce and fries.\n",starter[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",starter[n-1].name);
								cart(starter[n-1].name,starter[n-1].price);}
						break;
						
					case 4:
						printf("\n\n %s:\n\t6 Pcs of mouth watering Crispy, flavorful chicken wings deep fried to perfection, served with fries and sauce.\n",starter[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",starter[n-1].name);
								cart( starter[n-1].name,starter[n-1].price);}
						break;
						
					case 5:
						printf("\n\n %s:\n\tDiced Potatos with mixed vegetables plus sprinkle of spices and flloded with sauce and chopped meet. Every bite, extra might\n",starter[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",starter[n-1].name);
								cart( starter[n-1].name,starter[n-1].price);}
						break;
						
					case 0:
						break;
						
					default:
						printf("Please type correct numbers");	
							
				}
			}
			break;
			
			
		case 'b': 
			for(i=0;i<5;i++){
				printf(" %20s",special[i].name);
				printf("\t");
				printf(" %d\n",special[i].price);
				}
				
					n=1;
			
			
			while(n!=0){
				
				printf("\nTO END THE PROGRAM PRESS 0.To get details of that particular item, dial its serial number:\t");
				scanf("%d",&n);
				
			
			switch(n){
					
					case 1:
						printf("\n\n %s:\n\tBoneless chicken fillet stuffed with green chilies, onion and coriander, grilled over live charcoals.\n",special[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",special[n-1].name);
								cart( special[n-1].name,special[n-1].price);}
						break;
						
					case 2:
						printf("\n\n %s:\n\tChicken tenderloin stuffed with cream cheese & herbs, coated in bread crumbs served with honey mustard dipping sauce\n",special[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",special[n-1].name);
								cart( special[n-1].name,special[n-1].price);}
						break;
						
					case 3:
						printf("\n\n %s:\n\tMinced chicken kebabs marinated in cream green chilies and onions, cooked over live charcoals.\n",special[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",special[n-1].name);
								cart( special[n-1].name,special[n-1].price);}
						break;
						
					case 4:
						printf("\n\n %s:\n\tA perfect blend of Egg fried rice, noodles and chicken manchrian, topped with green chilli and creamy mayo.\n",special[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",special[n-1].name);
								cart( special[n-1].name,special[n-1].price);}
						break;
						
					case 5:
						printf("\n\n %s:\n\tCubes of chicken, peanuts, vegetables served dry along with stir fried vegetable rice.\n",special[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",special[n-1].name);
								cart( special[n-1].name,special[n-1].price);}
						break;
						
					case 0:
						break;
						
					default:
						printf("Please type correct numbers");	
								
				}
			}
			break;
				
		case 'c': 
			for(i=0;i<5;i++){
				printf(" %20s",burgers[i].name);
				printf("\t");
				printf("%d\n",burgers[i].price);
				}
				
					n=1;
			
			
			while(n!=0){
				
				printf("\nTO END THE PROGRAM PRESS 0.To get details of that particular item, dial its serial number:\t");
				scanf("%d",&n);
				
			
			switch(n){
					
					case 1:
						printf("\n\n %s:\n\tBreast Fillet Chicken Coated In Zinger Flavoring Combined With Ice Berg And Foods Inn Special Sauce. Served With Fries & Coleslaw\n",burgers[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",burgers[n-1].name);
								cart( burgers[n-1].name,burgers[n-1].price);}
						break;
						
					case 2:
						printf("\n\n %s:\n\tCharcoal Grilled Cubes Of Chicken On Bed Of Ice Berg Topped With Smokey Bbq Sauce. Served With Fries & Coleslaw.\n",burgers[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",burgers[n-1].name);
								cart( burgers[n-1].name,burgers[n-1].price);}
						break;
						
					case 3:
						printf("\n\n %s:\n\tCrispy Chicken Boneless Fillet Topped With Jalapenos, Home Made Sauce And Cheese Slice. Served With Fries & Coleslaw.\n",burgers[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",burgers[n-1].name);
								cart( burgers[n-1].name,burgers[n-1].price);}
						break;
						
					case 4:
						printf("\n\n %s:\n\tGrilled Boneless Chicken Fillet Topped With American Sauce, Sauteed Onions, Sauteed Mushrooms And Cheese. Served With Fries & Coleslaw.\n",burgers[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",burgers[n-1].name);
								cart( burgers[n-1].name,burgers[n-1].price);}
						break;
						
					case 5:
						printf("\n\n %s:\n\tCrunchy Chicken Boneless Fillet Topped With Black Olives, Jalapenos, Home Made Sauce And Cheddar Cheese And Onions. Served With Fries & Coleslaw.\n",burgers[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",burgers[n-1].name);
								cart( burgers[n-1].name,burgers[n-1].price);}
						break;
						
					case 0:
						break;
						
					default:
						printf("Please type correct numbers");	
								
				}
			}
			break;	
			
	case 'd': 
			for(i=0;i<5;i++){
				printf(" %20s",sandwich[i].name);
				printf("\t");
				printf("%d\n",sandwich[i].price);
				}
				
					n=1;
			
			
			while(n!=0){
				
				printf("\nTO END THE PROGRAM PRESS 0.To get details of that particular item, dial its serial number:\t");
				scanf("%d",&n);
				
			
			switch(n){
					
					case 1:
						printf("\n\n %s:\n\tSandwich bread stuffed with julienne cut chicken along with egg and vegetables.\n",sandwich[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",sandwich[n-1].name);
								cart( sandwich[n-1].name,sandwich[n-1].price);}
						break;
						
					case 2:
						printf("\n\n %s:\n\tSandwich bread stuffed with seasoned grilled chicken topped with american sauce along with egg and vegetables.\n",sandwich[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",sandwich[n-1].name);
								cart( sandwich[n-1].name,sandwich[n-1].price);}
						break;
						
					case 3:
						printf("\n\n %s:\n\tSandwich bread with chicken BBQ bihari boti along with egg and vegetables.\n",sandwich[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",sandwich[n-1].name);
								cart( sandwich[n-1].name,sandwich[n-1].price);	}
						break;
						
					case 4:
						printf("\n\n %s:\n\tSandwich bread with chicken Malai boti along with egg and vegetables.\n",sandwich[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",sandwich[n-1].name);
								cart( sandwich[n-1].name,sandwich[n-1].price);}
						break;
						
					case 5:
						printf("\n\n %s:\n\tA perfectly grilled fillet of steak sliced and topped with ice berg, cheese slice , tomato, onion & bbq sauce in a sub bun\n",sandwich[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",sandwich[n-1].name);
								cart( sandwich[n-1].name,sandwich[n-1].price);}
						break;
						
					case 0:
						break;
						
					default:
						printf("Please type correct numbers");	
								
				}
			}
			break;
			
		case 'e': 
			for(i=0;i<3;i++){
				printf(" %20s",f_chic[i].name);
				printf("\t");
				printf("%d\n",f_chic[i].price);
				}
				
					n=1;
			
			
			while(n!=0){
				
				printf("\nTO END THE PROGRAM PRESS 0.To get details of that particular item, dial its serial number:\t");
				scanf("%d",&n);
				
			
			switch(n){
					
					case 1:
						printf("\n\n %s:\n\tCrispy, Flavorful Chicken Deep Fried To Perfection, Served With Fries And Sauce.\n",f_chic[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",f_chic[n-1].name);
								cart( f_chic[n-1].name,f_chic[n-1].price);}
						break;
						
					case 2:
						printf("\n\n %s:\n\tCrispy Deep Fried Chicken Tossed In Sweet And Tangy Foods Inn Sauce.\n",f_chic[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",f_chic[n-1].name);
								cart( f_chic[n-1].name,f_chic[n-1].price);}
						break;
						
					case 3:
						printf("\n\n %s:\n\tCrispy Deep Fried Chicken With Foods Inn Special Cheese Dressing\n",f_chic[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",f_chic[n-1].name);
								cart( f_chic[n-1].name,f_chic[n-1].price);}
						break;
																
					case 0:
						break;
						
					default:
						printf("Please type correct numbers");	
								
				}
			}
			break;
			
		case 'f': 
			for(i=0;i<2;i++){
				printf(" %20s",steak[i].name);
				printf("\t");
				printf("%d\n",steak[i].price);
				}
				
					n=1;
			
			
			while(n!=0){
				
				printf("\nTO END THE PROGRAM PRESS 0.To get details of that particular item, dial its serial number:\t");
				scanf("%d",&n);
				
			
			switch(n){
					
					case 1:
						printf("\n\n %s:\n\tChar-grilled Beef Fillet Topped With Sauce Of Your Choice\n",steak[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",steak[n-1].name);
								cart( steak[n-1].name,steak[n-1].price);}
						break;
						
					case 2:
						printf("\n\n %s:\n\tChar-grilled Chicken Fillet Topped With Sauce Of Your Choice\n",steak[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",steak[n-1].name);
								cart( steak[n-1].name,steak[n-1].price);}
						break;
																					
					case 0:
						break;
						
					default:
						printf("Please type correct numbers");	
								
				}
			}
			break;
		
		case 'g': 
			for(i=0;i<2;i++){
				printf(" %20s",pasta[i].name);
				printf("\t");
				printf("%d\n",pasta[i].price);
				}
				
					n=1;
			
			
			while(n!=0){
				
				printf("\nTO END THE PROGRAM PRESS 0.To get details of that particular item, dial its serial number:\t");
				scanf("%d",&n);
				
			
			switch(n){
					
					case 1:
						printf("\n\n %s:\n\tFettuccini pasta topped in creamy Alfredo sauce topped with grilled chicken\n",pasta[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",pasta[n-1].name);
								cart( pasta[n-1].name,pasta[n-1].price);}
						break;
						
					case 2:
						printf("\n\n %s:\n\tGolden fried chicken breast in penne pasta tossed with mushroom creamy sauce & topped with parmesan cheese\n",pasta[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",pasta[n-1].name);
								cart( pasta[n-1].name,pasta[n-1].price);}
						break;
																					
					case 0:
						break;
						
					default:
						printf("Please type correct numbers");	
								
				}
			}
			break;
			
			case 'h': 
			for(i=0;i<6;i++){
				printf(" %20s",chinese[i].name);
				printf("\t");
				printf("%d\n",chinese[i].price);
				}
				
					n=1;
			
			
			while(n!=0){
				
				printf("\nTO END THE PROGRAM PRESS 0.To get details of that particular item, dial its serial number:\t");
				scanf("%d",&n);
				
			
			switch(n){
					
					case 1:
						printf("\n\n %s:\n\tJulienne cut chicken and vegetables tossed in a balance flavored gravy, served with stir fried rice.\n",chinese[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",chinese[n-1].name);
								cart( chinese[n-1].name,chinese[n-1].price);}
						break;
						
					case 2:
						printf("\n\n %s:\n\tCubes of chicken, onion, capsicum, tomatoes topped with shashlik sauce, served dry along with stir fried rice.\n",chinese[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",chinese[n-1].name);
								cart( chinese[n-1].name,chinese[n-1].price);}
						break;
					
					case 3:
						printf("\n\n %s:\n\tJulienne cut chicken, onion, capsicum, tomatoes tossed in a balance flavored gravy, served with stir fried rice.\n",chinese[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",chinese[n-1].name);
								cart( chinese[n-1].name,chinese[n-1].price);}
						break;
						
					case 4:
						printf("\n\n %s:\n\tchicken cubes with whole chilli tossed in a sweet tangy but balance flavored gravy, served with stir fried rice.\n",chinese[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",chinese[n-1].name);
								cart( chinese[n-1].name,chinese[n-1].price);}
						break;
						
					case 5:
						printf("\n\n %s:\n\tOur hand made stir fried noodles with chunks of chicken/meat and vegetables seasoned with soya sauce and other flavorful sauces.\n",chinese[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",chinese[n-1].name);
								cart( chinese[n-1].name,chinese[n-1].price);}
						break;
					
					case 6:
						printf("\n\n %s:\n\tRice, scrambled eggs, spring onion, carrots stir fried on wok along with seasoned chicken.\n",chinese[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",chinese[n-1].name);
								cart( chinese[n-1].name,chinese[n-1].price);}
						break;
																										
					case 0:
						break;
						
					default:
						printf("Please type correct numbers");	
								
				}
			}
			break;
			
			case 'i': 
			for(i=0;i<5;i++){
				printf(" %20s",BBQ[i].name);
				printf("\t");
				printf("%d\n",BBQ[i].price);
				}
				
					n=1;
			
			
			while(n!=0){
				
				printf("\nTO END THE PROGRAM PRESS 0.To get details of that particular item, dial its serial number:\t");
				scanf("%d",&n);
				
			
			switch(n){
					
					case 1:
						printf("\n\n %s:\n\tBarbecued Quarter chicken, marinated in ginger, garlic, red chilies and more, served with our special BBQ sauce.\n",BBQ[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",BBQ[n-1].name);
								cart( BBQ[n-1].name,BBQ[n-1].price);}
						break;
						
					case 2:
						printf("\n\n %s:\n\tBarbecued Quarter chicken, marinated with in-house made BBQ sauces and spices, served with our special BBQ sauce.\n",BBQ[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",BBQ[n-1].name);
								cart( BBQ[n-1].name,BBQ[n-1].price);}
						break;
					
					case 3:
						printf("\n\n %s:\n\tBoneless Chicken cubes marinated in flavorful spices topped with cream and barbecued to perfection on charcoal grill.\n",BBQ[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",BBQ[n-1].name);
								cart( BBQ[n-1].name,BBQ[n-1].price);}
						break;
						
					case 4:
						printf("\n\n %s:\n\tBoneless Chicken cubes marinated with mild spices cooked to perfection that it melts in your mouth.\n",BBQ[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",BBQ[n-1].name);
								cart( BBQ[n-1].name,BBQ[n-1].price);}
						break;
						
					case 5:
						printf("\n\n %s:\n\tBoneless Chicken piece prepared in a creamy based marination, cooked to perfection that it melts in your mouth.\n",BBQ[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",BBQ[n-1].name);
								cart( BBQ[n-1].name,BBQ[n-1].price);}
						break;
																																				
					case 0:
						break;
						
					default:
						printf("Please type correct numbers");	
								
				}	
			}
			break;
				
			case 'j': 
			for(i=0;i<3;i++){
				printf(" %20s",desi[i].name);
				printf("\t");
				printf("%d\n",desi[i].price);
				}
				
					n=1;
			
			
			while(n!=0){
				
				printf("\nTO END THE PROGRAM PRESS 0.To get details of that particular item, dial its serial number:\t");
				scanf("%d",&n);
				
			
			switch(n){
					
					case 1:
						printf("\n\n %s:\n\t\n",desi[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",desi[n-1].name);
								cart( desi[n-1].name,desi[n-1].price);}
						break;
						
					case 2:
						printf("\n\n %s:\n\tA gravy of delicious and spicy combination of tomatoes, green chili, crush chili and black pepper full of flavor meat Mutton\n",desi[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",desi[n-1].name);
								cart( desi[n-1].name,desi[n-1].price);}
						break;
					
					case 3:
						printf("\n\n %s:\n\t\n",desi[n-1].name);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have added %s to cart. Please specify the count later\n",desi[n-1].name);
								cart( desi[n-1].name,desi[n-1].price);}
						break;
																																														
					case 0:
						break;
						
					default:
						printf("Please type correct numbers");	
								
				}
			}
			break;	
			
			
		case 'k': 
			for(i=0;i<3;i++){
				printf(" %20s",pizza[i].name);
				printf("\t");
				printf("%d\n",pizza[i].price);
				}
				
					n=1;
			
			
			while(n!=0){
				
				printf("\nTO END THE PROGRAM PRESS 0.To get details of that particular item, dial its serial number:\t");
				scanf("%d",&n);
						
			switch(n){
					
					case 1:
						printf("\nYou have added %s to cart. Please specify the count and flavor later\n",pizza[n-1].name);
						cart( pizza[n-1].name,pizza[n-1].price);
						break;
						
					case 2:
						printf("\nYou have added %s to cart. Please specify the count and flavor later\n",pizza[n-1].name);
						cart( pizza[n-1].name,pizza[n-1].price);
						break;
					
					case 3:
						printf("\nYou have added %s to cart. Please specify the count and flavor later\n",pizza[n-1].name);
						cart( pizza[n-1].name,pizza[n-1].price);
						break;
																																														
					case 0:
						break;
						
					default:
						printf("Please type correct numbers");	
								
				}
			}
			break;	
			
	case 'l': 
			for(i=0;i<3;i++){
				printf(" %20s",drink[i].name);
				printf("\t");
				printf("%d\n",drink[i].price);
				}
				
					n=1;
			
			
			while(n!=0){
				
				printf("\nTO END THE PROGRAM PRESS 0.To get details of that particular item, dial its serial number:\t");
				scanf("%d",&n);
						
			switch(n){
					
					case 1:
						printf("\nYou have added %s to cart. Please specify the count later\n",a[shake(a)]);
						cart( drink[n-1].name,drink[n-1].price);
						break;
						
					case 2:
						printf("\nYou have added %s to cart. Please specify the count later\n",b[tea(b)]);
						cart( drink[n-1].name,drink[n-1].price);
						break;
					
					case 3:
						printf("\nYou have added %s to cart. Please specify the count later\n",c[coffee(c)]);
						cart( drink[n-1].name,drink[n-1].price);
						break;
																																														
					case 0:
						break;
						
					default:
						printf("Please type correct numbers");	
								
				}
			}
			break;	
			
			
		case 'm': 
			for(i=0;i<3;i++){
				printf(" %20s",roti[i].name);
				printf("\t");
				printf("%d\n",roti[i].price);
				}
				
					n=1;
			
			
			while(n!=0){
				
				printf("\nTO END THE PROGRAM PRESS 0.To get details of that particular item, dial its serial number:\t");
				scanf("%d",&n);
						
			switch(n){
					
					case 1:
						printf("\nYou have added %s to cart. Please specify the count later\n",roti[n-1].name);
						cart( roti[n-1].name,roti[n-1].price);	
						break;
						
					case 2:
						printf("\nYou have added %s to cart. Please specify the count later\n",roti[n-1].name);
						cart( roti[n-1].name,roti[n-1].price);	
						break;
					
					case 3:
						printf("\nYou have added %s to cart. Please specify the count later\n",roti[n-1].name);
						cart( roti[n-1].name,roti[n-1].price);	
						break;
																																														
					case 0:
						break;
						
					default:
						printf("Please type correct numbers");	
								
				}
			}
			
			break;	
			
		
		
}
printf("\n\nIf you want to enter in another category enter alphabet else if you want to exit then 0:\t ");
scanf("%d",&y);
}while(y!=0);

	puts("");
	
	
			printf("     ||||| |||||| ||||||  ||||||  \n");
			printf("     ||    ||  || ||  ||    ||    \n");
			printf("     ||    |||||| ||||||||  ||    \n");
			printf("     ||||| ||  || ||    ||  ||    \n ");	
	                                                        
	printf("\n\n\nEnter quantity for\n\n");

for(i=0;i<count;i++){
	printf("%20s\t\t\t%d\t\t\t",aahil[i].nm,aahil[i].pr);
	scanf("%d",&aahil[i].qty);
	}
	
for(i=0;i<count;i++){
	sum+=(aahil[i].pr*aahil[i].qty);
	}
	
	printf("\n\nYour total bill is %d",sum);
	
int time=0;

for(i=0;i<count;i++){
	time+=(aahil[i].qty*5);
	}

char h[500];

	printf("\n\n\n\t\t\tWait for %d minutes. Then visit the counter",time);
	printf("\n\nIf you want to give any particular instructions to the waiter then type it here\n");
	fflush(stdin);
	gets(h);
	
}
	
	
	
	else if(fk==0){
	
	int i=0;

	time_t t;
	time(&t);
	char customername;
	char choice;
	
	system("color 4f");
	system("cls");
 	printf("\t\t*********************************************\n");
	printf("\t\t*                                           *\n");
	printf("\t\t*       ----------------------------        *\n");
	printf("\t\t*         HOTEL MANAGEMENT SYSTEM           *\n");
	printf("\t\t*       ----------------------------        *\n");
	printf("\t\t*                                           *\n");
	printf("\t\t*                                           *\n");
	printf("\t\t*                                           *\n");
	printf("\t\t*********************************************\n\n\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");
	printf(" \n Press any key to continue:");

	getch();
    system("cls");
    login();
    system("cls");
	while (1)
	{
		system("cls");
		system("color 6f");
        for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("   ******************************  |MAIN MENU|  ***************************** \n");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("\t\t *Please enter your choice for menu*:");
		printf("\n\n");
		printf(" \n Enter 1 -> Book a room");
		printf("\n------------------------");
		printf(" \n Enter 2 -> View Customer Record");
		printf("\n----------------------------------");
		printf(" \n Enter 3 -> Delete Customer Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 4 -> Search Customer Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 5 -> Edit Record");
		printf("\n-----------------------");
		printf(" \n Enter 6 -> Exit");
		printf("\n-----------------");
		printf("\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");

		choice=getche();
		choice=toupper(choice);
		switch(choice)           // SWITCH STATEMENT
		{
			case '1':
				add();break;
			case '2':
				list();break;
			case '3':
				delete1();break;
			case '4':
				search();break;
			case '5':
				edit();break;
			case '6':
				system("color 7f");
				system("cls");
				printf("\n\n\t *****THANK YOU*****");
				printf("\n\t FOR TRUSTING OUR SERVICE");
			//	Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				getch();
		}
	}
}
}
void add()
{
	FILE *f;
	char test;
	f=fopen("add.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("cls");
		printf("Please hold on while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
		getch();
	}
	while(1)
	{
		system("color 8f");
		system("cls");
		printf("\n Enter Customer Details:");
		printf("\n**************************");
		printf("\n Enter Room number:\n");
		scanf("\n%s",s.roomnumber);
		fflush(stdin);
		printf("Enter Name:\n");
		scanf("%s",s.name);
		printf("Enter Address:\n");
		scanf("%s",s.address);
		printf("Enter Phone Number:\n");
		scanf("%s",s.phonenumber);
		printf("Enter Nationality:\n");
		scanf("%s",s.nationality);
		printf("Enter Email:\n");
		scanf(" %s",s.email);
		printf("Enter Period(\'x\'days):\n");
		scanf("%s",&s.period);
		printf("Enter Arrival date(dd\\mm\\yyyy):\n");
		scanf("%s",&s.arrivaldate);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n1 Room is successfully booked!!");
		printf("\n Press esc key to exit,  any other key to add another customer detail:");
		test=getche();
		if(test==27)
			break;

	}
	fclose(f);
}

void list()
{
	FILE *f;
	int i;
	if((f=fopen("add.txt","r"))==NULL)
		exit(0);
	system("cls");
	printf("ROOM    ");
	printf("NAME\t ");
	printf("\tADDRESS ");
	printf("\tPHONENUMBER ");
	printf("\tNATIONALITY ");
	printf("\tEMAIL ");
	printf("\t\t  PERIOD ");
	printf("\t ARRIVALDATE \n");

	for(i=0;i<118;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		/*printf("ROOMNUMBER :\t%s\n",s.roomnumber);
		printf("NAME:\t%s\n",,s.name);
		printf("ADDRESS:\t%s\n",s.address);
		printf("PHONENUMBER:\t%s\n",s.phonenumber);
		printf("NATIONALITY \n");*/
		printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s  \t     %s  \t  %s",s.roomnumber, s.name , s.address , s.phonenumber ,s.nationality ,s.email,s.period,  s.arrivaldate);
	}
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");

	fclose(f);
	getch();
}

void delete1()
{
	FILE *f,*t;
	int i=1;
	char roomnumber[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("add.txt","r"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the Room Number of the hotel to be deleted from the database: \n");
	fflush(stdin);
	scanf("%s",roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{
		printf("\n\n Records of Customer in this  Room number is not found!!");
		//remove("E:/file.txt");
	   //rename("E:/temp.txt","E:/file.txt");
		getch();
		fclose(f);
		fclose(t);
		main();
	}
	fclose(f);
	fclose(t);
	remove("add.txt");
	rename("temp.txt","add.txt");
	printf("\n\nThe Customer is successfully removed....");
	fclose(f);
	fclose(t);
	getch();
}

void search()
{
system("cls");
	FILE *f;
	char roomnumber[20];
	int flag=1;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter Room number of the customer to search its details: \n");
	scanf("%s", roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0){
			flag=0;
			printf("\n\tRecord Found\n ");
			printf("\nRoom Number:\t%s",s.roomnumber);
			printf("\nName:\t%s",s.name);
			printf("\nAddress:\t%s",s.address);
			printf("\nPhone number:\t%s",s.phonenumber);
			printf("\nNationality:\t%s",s.nationality);
			printf("\nEmail:\t%s",s.email);
			printf("\nPeriod:\t%s",s.period);
			printf("\nArrival date:\t%s",s.arrivaldate);
			flag=0;
			break;
		}
	}
	if(flag==1){
		printf("\n\tRequested Customer could not be found!");
	}
	getch();
	fclose(f);
}

void edit()
{
	FILE *f;
	int k=1;
	char roomnumber[20];
	long int size=sizeof(s);
	if((f=fopen("add.txt","r+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter Room number of the customer to edit:\n\n");
	scanf("%[^\n]",roomnumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{
			k=0;
			printf("\nEnter Room Number     :");
			gets(s.roomnumber);
			printf("\nEnter Name    :");
			fflush(stdin);
			scanf("%s",&s.name);
			printf("\nEnter Address        :");
			scanf("%s",&s.address);
			printf("\nEnter Phone number :");
			scanf("%f",&s.phonenumber);
			printf("\nEnter Nationality :");
			scanf("%s",&s.nationality);
			printf("\nEnter Email :");
			scanf("%s",&s.email);
			printf("\nEnter Period :");
			scanf("%s",&s.period);
			printf("\nEnter Arrival date :");
			scanf("%s",&s.arrivaldate);
			fseek(f,size,SEEK_CUR);  //to go to desired position infile
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	if(k==1){
		printf("\n\nTHE RECORD DOESN'T EXIST!!!!");
		fclose(f);
		getch();
	}else{
	fclose(f);
	printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
	getch();
}
}

char pizzaflavour(char p[5][50]){
	int i,o;
	char ch;
	for(i=0;i<5;i++){
		printf("%d- %s\n",i+1,p[i]);
	}
		printf("Please tell which flavour of pizza you would like to get details of:\t");
		scanf("%d",&o);	
		
		switch(o){
			case 1:
				printf("\n\n %s:\n\tChicken Tikka with Onions, Mushrooms, Garlic Sauce & Cheese.\n",p[o-1]);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have choosen %s flavor for your pizza\n",p[o-1]);}
						break;
			
			case 2:
				printf("\n\n %s:\n\tChicken Fajita topped with Onions, Black Olives, Ranch Sauce & Cheese\n",p[o-1]);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have choosen %s flavor for your pizza\n",p[o-1]);}
						break;
			
			case 3:
				printf("\n\n %s:\n\tBBQ Chicken topped with Onions, Red Jalapenos, BBQ Sauce & Cheese\n",p[o-1]);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have choosen %s flavor for your pizza\n",p[o-1]);}
						break;
						
			case 4:
				printf("\n\n %s:\n\tChicken Tikka topped with Onions & Cheese\n",p[o-1]);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have choosen %s flavor for your pizza\n",p[o-1]);}
						break;
						
			case 5:
				printf("\n\n %s:\n\tCreamy Sauce with Chicken Tikka, Onions & Cheese.\n",p[o-1]);
						printf("To order, press Spacebar. Else press any key");
						ch=getch();
							if(ch==0x20){
								printf("\nYou have choosen %s flavor for your pizza\n",p[o-1]);}
						break;
		}
}

int shake(char a[3][50]){
	int i;
	for(i=0;i<3;i++){
		printf("%d- %s\n",i+1,a[i]);
		}
	printf("\n\nEnter serial number of shake you want:\t");
	scanf("%d",&i);
	return i-1;
}
int tea(char b[3][50]){
	int i;
	for(i=0;i<3;i++){
		printf("%d- %s\n",i+1,b[i]);
		}
	printf("\n\nEnter serial number of tea you want:\t");
	scanf("%d",&i);
	return i-1;
}
int coffee(char c[2][50]){
	int i;
	for(i=0;i<2;i++){
		printf("%d- %s\n",i+1,c[i]);
		}
	printf("\n\nEnter serial number of tea you want:\t");
	scanf("%d",&i);
	return i-1;
} 
void cart(char *text, unsigned int prize){
	
	int i;
	char n[50];
	
	a->pr=prize;
		for(i=0;*(text+i)!='\0';i++){
			n[i]=*(text+i);
	 	}
			
	strcpy(a->nm,n);
	count+=1;
	a++;
}

