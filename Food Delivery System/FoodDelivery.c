#include<stdio.h>
#include<conio.h>
#define max 50
struct queue
{
  char cust_name[30], food[30],rest_name[20],pay[10],email[40],bldg[20],area[20];
  char *restNames[1];
  int flat_no,quantity[100],total,foodItem[100];//quantity,total
};
struct queue q[max];
int f=-1,r=-1,n,i;
void order();
void deliver();
void next_order();
void view_orders();

void calculator(int total,int j,int r){
    int val=0,item,quantity;
    printf("\nEnter 1 to continue ordering food items or enter 0 to finish ordering food items\n"); //Pressing 1 allows to continue ordering food items and 0 is the base case for exiting the recursive function
    scanf("%d",&val);
    if(val!=0){
        printf("Enter food item: ");
        scanf("%d",&item);
        printf("\nEnter quantity: ");
        scanf("%d",&quantity);
        if(quantity>0){           //Check if quantity is valid
            if(item==1){          //check for item number and do the same for the else if's
                q[r].foodItem[j]=1;          //store the food item info
                q[r].quantity[j]=quantity;   //store the quantity
                total=total+(quantity*70);   //calculate the total cost
                q[r].total=total;               //store the total cost
                j++;                          //increment to add further orders and keep stockpiling the total sum using recursive function
                calculator(total,j,r);        //Recursive function to keep adding/closing the function to add more orders or exit
            }
           else if(item==2){           //Same for the else if's as explained above
                q[r].foodItem[j]=2;
                q[r].quantity[j]=quantity;
                total=total+(quantity*120);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==3){
                q[r].foodItem[j]=3;
                q[r].quantity[j]=quantity;
                total=total+(quantity*80);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==4){
                q[r].foodItem[j]=4;
                q[r].quantity[j]=quantity;
                total=total+(quantity*60);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==5){
                q[r].foodItem[j]=5;
                q[r].quantity[j]=quantity;
                total=total+(quantity*40);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==6){
                q[r].foodItem[j]=6;
                q[r].quantity[j]=quantity;
                total=total+(quantity*150);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==7){
                q[r].foodItem[j]=7;
                q[r].quantity[j]=quantity;
                total=total+(quantity*130);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==8){
                q[r].foodItem[j]=8;
                q[r].quantity[j]=quantity;
                total=total+(quantity*150);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==9){
                q[r].foodItem[j]=9;
                q[r].quantity[j]=quantity;
                total=total+(quantity*170);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==10){
                q[r].foodItem[j]=10;
                q[r].quantity[j]=quantity;
                total=total+(quantity*230);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==11){
                q[r].foodItem[j]=11;
                q[r].quantity[j]=quantity;
                total=total+(quantity*20);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==12){
                q[r].foodItem[j]=12;
                q[r].quantity[j]=quantity;
                total=total+(quantity*15);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==13){
                q[r].foodItem[j]=13;
                q[r].quantity[j]=quantity;
                total=total+(quantity*30);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==14){
                q[r].foodItem[j]=14;
                q[r].quantity[j]=quantity;
                total=total+(quantity*70);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==15){
                q[r].foodItem[j]=15;
                q[r].quantity[j]=quantity;
                total=total+(quantity*120);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==16){
                q[r].foodItem[j]=16;
                q[r].quantity[j]=quantity;
                total=total+(quantity*40);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==17){
                q[r].foodItem[j]=17;
                q[r].quantity[j]=quantity;
                total=total+(quantity*80);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==18){
                q[r].foodItem[j]=18;
                q[r].quantity[j]=quantity;
                total=total+(quantity*120);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==19){
                q[r].foodItem[j]=19;
                q[r].quantity[j]=quantity;
                total=total+(quantity*35);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==20){
                q[r].foodItem[j]=20;
                q[r].quantity[j]=quantity;
                total=total+(quantity*100);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==21){
                q[r].foodItem[j]=21;
                q[r].quantity[j]=quantity;
                total=total+(quantity*120);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }
           else if(item==22){
                q[r].foodItem[j]=22;
                q[r].quantity[j]=quantity;
                total=total+(quantity*30);
                q[r].total=total;
                j++;
               calculator(total,j,r);
            }
            else if(item==23){
                q[r].foodItem[j]=23;
                q[r].quantity[j]=quantity;
                total=total+(quantity*300);
                q[r].total=total;
                j++;
                calculator(total,j,r);
            }

            else{
                printf("\nGrand Total calculated\n");  //If item number is invalid, exit recursive function
            }
        }
        else{
            printf("\nGrand Total calculated\n");    //If quantity is invalid, exit recursive function
        }
    }
    else{
        printf("\nGrand Total calculated\n");     //If base condition is met then exit recursive function
    }
}

void orderPrinter(int r){
    int j=0;
    while(q[r].foodItem[j]>0  && q[r].quantity[j]>0){   //Run the while loop with the condition that the food item number is greater than 0 and the quantity is greater than 0
        if(q[r].foodItem[j]==1){                        //Check if the food item value that is stored is equal to the constant food item value
                printf("\nFood Item: Khichuri Tk.70\n");      //Printing the food item name
                printf("Quantity: %d",q[r].quantity[j]);    //Printing the quantity
                j++;                                      //Increment to check if there are other food items and quantity for the present customer
            }
           else if(q[r].foodItem[j]==2){         //All the else if's is same as mentioned above
                printf("\nFood Item: Pancakes Tk.120\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==3){
                printf("\nFood Item: Oatmeal Tk.80\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==4){
                printf("\nFood Item: Chicken Shawarma Tk.60\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==5){
                printf("\nFood Item: Beef Sandwich Tk.40\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==6){
                printf("\nFood Item: Chicken Biriyani Tk.150\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==7){
                printf("\nFood Item: Noodles Tk.130\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==8){
                printf("\nFood Item: Pasta Tk.150\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==9){
                printf("\nFood Item: Teheri Tk.170\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==10){
                printf("\nFood Item: Kacchi Tk.230\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==11){
                printf("\nFood Item: Cold Drink Tk.20\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==12){
                printf("\nFood Item: Tea Tk.15\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==13){
                printf("\nFood Item: Coffee Tk.30\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==14){
                printf("\nFood Item: Chocolate Milkshake Tk.70\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==15){
                printf("\nFood Item: Mojito Tk.120\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==16){
                printf("\nFood Item: Brownie Tk.40\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==17){
                printf("\nFood Item: Ice Cream Tk.80\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==18){
                printf("\nFood Item: Waffle Tk.120\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==19){
                printf("\nFood Item: Pastry Tk.35\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==20){
                printf("\nFood Item: Chicken Curry Tk.100\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==21){
                printf("\nFood Item: BBQ Steak Tk.120\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==22){
                printf("\nFood Item: Rice Tk.30\n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
           else if(q[r].foodItem[j]==23){
                printf("\nFood Item: Pizza Tk.300 \n");
                printf("Quantity: %d",q[r].quantity[j]);
                j++;
            }
    }
}


int main()            //Driver code
{
  int ch;
  printf("\t\t\t******FOODSTER DELIVERY******");        //Start of the main menu
  printf("\n\n\t\tMAIN MENU");
  do
  {
    printf("\n\t1.Order Food\n\t2.Deliver Food\n\t3.View next order\n\t4.View Pending Orders\n\t5.Exit");
    printf("\n\tChoose action to be performed:");
    scanf("%d",&ch);
    switch(ch)               //Switch statement to determine customer actions
    {
      case 1: order();
	      break;
      case 2: deliver();
	      break;
      case 3: next_order();
	      break;
      case 4: view_orders();
	      break;
      case 5: break;
      default : printf("\nInvalid action selected!\nTry again.\n");
    }
  }while(ch!=5);
  return 0;
}

void order()                //This function is used for ordering but in queue terms this function works as our enqueue basically
{
  int temp,res;
  if((r+1)%max==f)            //Check if rear==front because if both are equal then circular queue is full
  {
    printf("\nCan't take order!\n");
  }
  else if(f==-1 && r==-1)      //if circular queue is empty which is -1 then enqueue and assign 0 to both front and rear
  {
    f=r=0;
  printf("\n\t\t****RESTAURANTS****");
  printf("\n->>1. Sultan Dines\t->>2. Hazi\t->>3. Star Kabab\t->>4. Ghoroa\t->>5. Bismillah\t->>6. Continental Hotel");
  printf("\nRestaurant Name:\n");  //choose restaurant 1. ,2. , 3... according to their value

  scanf("%d",&res);
  //add switch statement and assign restaurant name to &q[r].rest_name according to int switch
  switch(res)
  {
      case 1: q[r].restNames[0]="Sultan Dines";
      break;
      case 2: q[r].restNames[0]="Hazi";
      break;
      case 3: q[r].restNames[0]="Star Kabab";
      break;
      case 4: q[r].restNames[0]="Ghoroa";
      break;
      case 5: q[r].restNames[0]="Bismillah";
      break;
      case 6: q[r].restNames[0]="Continental Hotel";
      break;
      default : printf("\nInvalid action selected!\nTry again.\n");   //For invalid input
  }
  printf("\n\t\t****FOOD MENU****");
  printf("\n->>Breakfast:\t1.Khichuri Tk.70, 2.Pancakes Tk.120, 3.Oatmeal Tk.80, 4.Chicken Shawarma Tk.60, 5.Beef Sandwich Tk.40,\n->>Lunch:\t6.Chicken Biriyani Tk.150, 7.Noodles Tk.130, 8.Pasta Tk.150, 9.Teheri Tk.170, 10.Kacchi Tk.230\n->>Beverages:\t11.Cold Drink Tk.20, 12.Tea Tk.15, 13.Coffee Tk.30, 14.Chocolate Milkshake Tk.70, 15.Mojito Tk.120\n->>Dessert:\t16.Brownie Tk.40, 17.Ice Cream Tk.80, 18.Waffle Tk.120, 19.Pastry Tk.35\n->>Dinner:\t20.Chicken Curry Tk.100, 21.BBQ Steak Tk.120, 22.Rice Tk.30, 23. Pizza Tk.300 \n");

  int total=0,l=0;
  calculator(total,l,r);     //Calling recursive function to calculate the order and store the informations

  printf("\n\t\t***ORDER SUMMARY***\n");              //Printing order informations including customer delivery informations
  printf("->Restaurant Name: %s",q[r].restNames[0]);
  orderPrinter(r);
  printf("\n->Customer Name:");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].cust_name);            //Read until a new line is created/until enter is pressed
  printf("->Flat Number:");
  scanf("%d",&q[r].flat_no);
  printf("->Building Name:");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].bldg);
  printf("->Area & City:");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].area);
  printf("->Email ID:");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].email);
  printf("\n->Grand total: Tk.%d",q[r].total);
  printf("\n->Payment Mode:\nOnline\tOr\tCash on delivery\n");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].pay);
  printf("Order recieved successfully!\nTasty food will be enroute.\nThanks for ordering %s!\n",q[r].cust_name);
  }
  else
  {
    r=(r+1)%max;                             //If queue is not full and not empty then enqueue till rear==front
    printf("\n\t\t****RESTAURANTS****");
  printf("\n->>1. Sultan Dines\t->>2. Hazi\t->>3. Star Kabab\t->>4. Ghoroa\t->>5. Bismillah\t->>6. Continental Hotel");
  printf("\nRestaurant Name:\n");  //choose restaurant 1. ,2. , 3.

  scanf("%d",&res);
  //add switch statement and assign restaurant name to &q[r].rest_name according to int switch
  switch(res)
  {
      case 1: q[r].restNames[0]="Sultan Dines";
      break;
      case 2: q[r].restNames[0]="Hazi";
      break;
      case 3: q[r].restNames[0]="Star Kabab";
      break;
      case 4: q[r].restNames[0]="Ghoroa";
      break;
      case 5: q[r].restNames[0]="Bismillah";
      break;
      case 6: q[r].restNames[0]="Continental Hotel";
      break;
      default : printf("\nInvalid action selected!\nTry again.\n");
  }
  printf("\n\t\t****FOOD MENU****");
  printf("\n->>Breakfast:\t1.Khichuri Tk.70, 2.Pancakes Tk.120, 3.Oatmeal Tk.80, 4.Chicken Shawarma Tk.60, 5.Beef Sandwich Tk.40,\n->>Lunch:\t6.Chicken Biriyani Tk.150, 7.Noodles Tk.130, 8.Pasta Tk.150, 9.Teheri Tk.170, 10.Kacchi Tk.230\n->>Beverages:\t11.Cold Drink Tk.20, 12.Tea Tk.15, 13.Coffee Tk.30, 14.Chocolate Milkshake Tk.70, 15.Mojito Tk.120\n->>Dessert:\t16.Brownie Tk.40, 17.Ice Cream Tk.80, 18.Waffle Tk.120, 19.Pastry Tk.35\n->>Dinner:\t20.Chicken Curry Tk.100, 21.BBQ Steak Tk.120, 22.Rice Tk.30, 23. Pizza Tk.300\n");

  int total=0,l=0;
  calculator(total,l,r);        //Calling recursive function to calculate the order and store the informations

    printf("\n\t\t***ORDER SUMMARY***\n");       //Printing order informations including customer delivery informations
    printf("->Restaurant Name: %s",q[r].restNames[0]);
    orderPrinter(r);
    printf("\n->Customer Name:");
    scanf("%c",&temp);
    scanf("%[^\n]",q[r].cust_name);
    printf("->Flat Number:");
    scanf("%d",&q[r].flat_no);
    printf("->Building Name:");
    scanf("%c",&temp);
    scanf("%[^\n]",q[r].bldg);
    printf("->Area & City:");
    scanf("%c",&temp);
    scanf("%[^\n]",q[r].area);
    printf("->Email ID:");
    scanf("%c",&temp);
    scanf("%[^\n]",q[r].email);
    printf("\n->Grand total: Tk.%d",q[r].total);
    printf("\n->Payment Mode:\nOnline\tOr\tCash on delivery\n");
    scanf("%c",&temp);
    scanf("%[^\n]",q[r].pay);
    printf("Order recieved successfully!\nTasty food will be enroute.\nThanks for ordering %s!\n",q[r].cust_name);
  }
}
void deliver()             //This is the delivery system but in queue terms it is our dequeue function
{
   if(f==-1 && r==-1)         //If the circular queue is empty when front=rear=-1 then cannot dequeue
   {
     printf("\nNo orders for now.\n");
   }
   else
   {
      printf("\nOrder out for delivery to %s\n",q[f].cust_name);
      if(f==r)  //If the dequeue element is the first assigned element because front==rear then after dequeue front=rear=-1 again since queue is empty
      {
	f=r=-1;
      }
      else
      {
	 if(f==max-1)
	 {
	   f=0;
	 }
	 else   //Increment front position because of dequeue in circular queue so that we can enqueue (rear) and use that space
	 {
	   f++;
	 }
      }
   }
}
void next_order()      //Prints the next in line order or the first order that will be delivered/the current order that will be delivered if dequeued
{
  if(f==-1 && r==-1)
  {
    printf("\nNo orders.\n");
  }
  else
  {                                //We assigned f because we want to see the first customer whom we need to deliver the order to since f is the front value that is why we assigned f here
    printf("\n\t\t****ORDER****");
    printf("\nCustomer Name: %s",q[f].cust_name);
    orderPrinter(r);
    printf("\nRestaurant Name: %s",q[f].restNames[0]);
    printf("\nFlat Number: %d",q[f].flat_no);
    printf("\nBuilding Name: %s",q[f].bldg);
    printf("\nArea & City: %s",q[f].area);
    printf("\nEmail ID: %s",q[f].email);
    printf("\n->Grand total: Tk.%d",q[f].total);
    printf("\nPayment Mode: %s",q[f].pay);
    printf("\n");
  }
}
void view_orders()          //For viewing all orders in the current queue
{
   int i;
   if(f==-1 && r==-1)
   {
     printf("\nNo orders.\n");
   }
   else if(r<f)
   {
     printf("\nPending Orders Details:");
     for(i=0;i<=r;i++)
     {
	printf("\n\n\t\t****ORDER****");
	printf("\nCustomer Name: %s",q[i].cust_name);
	orderPrinter(i);
	printf("\nRestaurant Name: %s",q[i].restNames[0]);
	printf("\nFlat Number: %d",q[i].flat_no);
	printf("\nBuilding Name: %s",q[i].bldg);
	printf("\nArea & City: %s",q[i].area);
	printf("\nEmail ID: %s",q[i].email);
	printf("\n->Grand total: Tk.%d",q[i].total);
	printf("\nPayment Mode: %s",q[i].pay);
     }
     for(i=f;i<max;i++)
     {
	printf("\n\n\t\t****ORDER****");
	printf("\nCustomer Name: %s",q[i].cust_name);
	orderPrinter(i);
	printf("\nRestaurant Name: %s",q[i].restNames[0]);
	printf("\nFlat Number: %d",q[i].flat_no);
	printf("\nBuilding Name: %s",q[i].bldg);
	printf("\nArea & City: %s",q[i].area);
	printf("\nEmail ID: %s",q[i].email);
	printf("\n->Grand total: Tk.%d",q[i].total);
	printf("\nPayment Mode: %s",q[i].pay);
	printf("\n");
     }
   }
   else
   {
      printf("\nPending Orders Details:");
      for(i=f;i<=r;i++)
      {
	printf("\n\n\t\t****ORDER****");
	printf("\nCustomer Name: %s",q[i].cust_name);
	orderPrinter(i);
	printf("\nRestaurant Name: %s",q[i].restNames[0]);
	printf("\nFlat Number: %d",q[i].flat_no);
	printf("\nBuilding Name: %s",q[i].bldg);
	printf("\nArea & City: %s",q[i].area);
	printf("\nEmail ID: %s",q[i].email);
	printf("\n->Grand total: Tk.%d",q[i].total);
	printf("\nPayment Mode: %s",q[i].pay);
	printf("\n");
      }
   }
}



