#include<stdio.h>
#include<string.h>

int main()
{
    int choice;
    char username[20];
    char password[20];
    int bus_number;
    int seats_number;
    int seats_to_cancel;

    while(1)
    {
        
        printf("\n*******Bus Reservation System*******");
        printf("\n2. Login");
        printf("\n3. Exit");
        printf("\nPlease Enter your choice:");
        scanf("%d",&choice);
        
        // if (choice == 1)
        // {
            
        // printf("\n--- REGISTRATION ---\n");    
        // printf("\nPlease Enter username:");
        // scanf("%s",username);
    
        // printf("\nPlease Enter password:");
        // scanf("%s",password);
        
        // printf("\nRegistration successful. Welcome, %s\n",username);
        // }
        // else if(choice == 2)
        // {
        //     if (registered == 0)
            {
            printf("\n--- LOGIN ---\n");
            printf("Enter Username: ");
            scanf(" %[^\n]", username);
            printf("Enter Password: ");
            scanf(" %[^\n]", password);

            printf("\nLogin successful. Welcome, %s\n",username);
            // }
            //  if (strcmp(username,password) == 0 && strcmp(username,password) == 0)
            // {
            //     printf("Login Successful \n");
            //     break;
            // }

            
        }

         if (choice == 1)
        {
        
        
            printf("\n===User menu===\n");
            printf("1. book a ticket\n");
            printf("2. cancle a ticket\n");
            printf("3. check bus status\n");
            printf("4. logout\n");
            printf("please enter your choice: ");
            scanf("%d",&choice);
        
            
            {
            printf("===Book a Ticket===\n");
            printf("please enter Bus Number: ");
            scanf("%d",&bus_number);
            printf("please enter Number Of Seats: ");
            scanf("%d",&seats_number);
            
            printf("Booking Successful ! 5 seats booked on bus number %d",bus_number,seats_number);
            }



        }
        if(choice == 2)
        {
           printf("Thank You\n");
        
        }
        else
        {
            printf("Invalid Choice\n");
        }

    }

    return 0;
}
