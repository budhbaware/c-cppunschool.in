//C programming used to make simple food ordering system

#include <stdio.h>
#include <string.h>
#include <conio.h>

struct order{
    char name[100];
    int order_number;
    int number_of_food;
    int cost;
}p[1256];
int order_count = 0, served_count = 0, waiting_now = 0;

int order ()
{   int n, in, qu;
    printf ("Please enter your name: ");
    gets (p[order_count].name);
    p[order_count].order_number = 1256+order_count;
    items();
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;

    level:
    printf ("How many items do you want to order? ");
    scanf ("%d", &n);

    getchar ();
    while (n--){
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
    case 21 : {
        printf ("Enter the amount of Veg thali: 1. Half 2. Full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (170*qu);
        else p[order_count].cost += (270*qu);
        break;
    }
    case 22 :{
        printf ("Enter the amount of Chicken Thali: 1. Half  2. Full \n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (320*qu);
        else  p[order_count].cost += (450*qu);
        break;
    }
    case 23 :{
        printf ("Enter the pieces of Veg manchurian: 1. 2 pcs  2. 5 pcs  3. 10 pcs\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (80*qu);
        else if (i==2) p[order_count].cost += (200*qu);
        else  p[order_count].cost += (350*qu);
        break;
    }
    case 24 :{
        printf ("Enter the size of Tandoori Chicken: 1.Half   2.Full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (250*qu);
        else  p[order_count].cost += (440*qu);
        break;
    }
    case 25 :{
        printf ("Enter the size of Mutton Briyani: 1. Half  2. Full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (150*qu);
        else p[order_count].cost += (240*qu);
        break;
    }
    case 26 :{
        printf ("Enter the size of Fish Curry: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (200*qu);
        else p[order_count].cost += (350*qu);
        break;
    }
    case 27 : {
        printf ("Enter amount of Panner Tikka: 1.Half 2.Full\n");
        int i;
        scanf("%d",&i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost +=(140*qu);
       else p[order_count].cost += (250*qu);
        break;
    }
    case 28 : {
        printf ("Enter the amount of Veg Briyani:1.250gm 2.500gm\n");
        int i;
        scanf("%d",&i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost +=(180*qu);
       else p[order_count].cost += (300*qu);
        break;
    }
    case 29 : {
        printf ("Enter the amount of Dal rice: 1.Half 2.Full\n");
        int i;
        scanf("%d",&i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost +=(180*qu);
        else p[order_count].cost += (330*qu);
        break;
    }
    case 30 :{
        printf ("Enter the size of Mango Lassi: 1. 250mg  2. 500mg\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (50*qu);
        else p[order_count].cost += (85*qu);
        break;
    }
    case 31:{
          printf("Enter the size of Mastani: 1.Half 2.Full\n");
          int i;
          scanf("%d",&i);
          getchar();

          printf("Please enter the quantity: ");
          scanf("%d",&qu);
          getchar();

          p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (120*qu);
        else p[order_count].cost += (200*qu);
        break;
    }
    case 32:{
       printf("Enter the Pieces of gulab jamuns: 1.6pcs 2.10pcs\n");
       int i;
       scanf("%d",&i);
       getchar();

       printf("Please enter the quantity: ");
       scanf("%d",&qu);
       getchar();

       p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (80*qu);
        else p[order_count].cost += (120*qu);
        break;
    }
    default : {
        printf ("Invalid selection try again\n");
        n++;
    }
       }
    }
    char temp;
    printf ("Do you want to order anything more?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
    printf ("\nThank you %s for your order. Your bill is %drs.\nPlease wait while we prepare the food.\n\n", p[order_count].name, p[order_count].cost);
    order_count ++;
}
int receive ()
{
    if (order_count==0){
        printf ("Please order first\n");
        return;
    }

    else if (served_count == order_count) {
        printf ("All order served\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", p[served_count].order_number, p[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;
}
int records ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);
}
void items ()
{
    printf("..................*.......//.MENU CARD.\\........*.................\n");

    printf("\nITEM CODES#----DESCRIPTION---------------QUANTITY--------------------PRICE(rs)\n");

    printf("[21]-----------Veg Thali-------------------Half/Full------------------170/270\n");
    printf("[22]---------Chicken Thali---------------Half/full--------------------350/450\n");
    printf("[23]---------Veg Manchurian--------------2/5/10 pcs----------------80/200/350\n");
    printf("[24]---------Tandori Chicken------------Half/Full------------------250/440\n");
    printf("[25]---------Mutton briyani--------------Half/Full-----------------150/240\n");
    printf("[26]---------Fish Curry--------------------Half/Full----------------200/350\n");
    printf("[27]---------Panner tikka-----------------Half/Full------------------140/250\n");
    printf("[28]---------Veg Briyani----------------250gm/500gm--------------------180/300\n");
    printf("[29]----------Dal Rice------------------Half/Full---------------------180/330\n");
    printf("[30]---------Mango Lassi-----------------250/500mg------------------50/85\n");
    printf("[31]----------Mastani----------------------Half/Full-------------------120/200\n");
    printf("[32]----------Gulab Jamun-------------------6/10 pcs------------------80/120\n");

}
int main ()
{
    printf ("\t\t    Welcome To BB ka Dhaba \n\n");
    while (1){
        printf ("\t1. ORDER\n\t2. SERVE\n\t3. RECORDS \n\t4. EXIT THE PROGRAM\n");

        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                system ("COLOR 4");
                receive();
                break;
            }
            case 3 : {
                system ("COLOR 2");
                records();
                break;
            }
            case 4 : {
                system ("COLOR 6");
                printf ("SORRY, We are closed visit again\n\n");

                return 0;
            }
        }
    }
}

