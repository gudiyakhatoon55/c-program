#include <stdio.h>
#include <string.h>

char username[30] = "gudiyakhatoon";
char password[30] = "123@55";
char email_id[40] = "gudiyakhatoonhtce55@gamil.com";

int busNumber[5]= {101,102,103,104,105};
char sourceCity[5][30]= {"Delhi","Mumbai","Jaipur","Kolkata","Hyderbad"};
char destinationCity[5][30] = {"Bihar","pune","Goa","chennai","bangalore"};
int totalSeats[5]= {50,45,40,30,55};
int availableSeats[5]={50,45,40,30,55};
float fare[5]={500.00,600.00,400.00,700.00,300.00};


void login();
void userMenu();
void bookTicket();
void cancelTicket();
void checkBusStatus();

int main()
{
    char regUser[20], regPass[20];
    char loginUser[20], loginPass[20];
    int choice, registered = 0;
    char regemail_id[40], email_id[40];

    while (1)
    {
        printf("\t\t--- BUS RESERVATION SYSTEM ---\n");
        printf("\t\t______________________________________ \n");
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\n--- REGISTRATION ---\n");
            printf("Enter Username: ");
            scanf("%s",&regUser);
            printf("enter Email_id: ");
            scanf("%s",&regemail_id);
            printf("Enter Password: ");
            scanf("%s",&regPass);

            registered = 1;

            if (strcmp(regUser, "gudiyakhatoon") == 0 && strcmp(regemail_id, "gudiyakhatoonhtce55@gmail.com") == 0 && strcmp(regPass, "123@55") == 0)

            printf("Registration Successful %s\n",regUser);
            else
            {
            printf("Wrong Username, email_id or Password!\n");
            }
        }

        else if (choice == 2)
        {
            if (registered == 0)
            {
                printf("Please register first \n");
                continue;
            }

            printf("\n--- LOGIN ---\n");
            printf("Enter Username: ");
            scanf("%s", &loginUser);
            printf("Enter Password: ");
            scanf("%s", &loginPass);

            if (strcmp(regUser, "gudiyakhatoon") == 0 && strcmp(regPass, "123@55") == 0)
            {
                printf("Login Successful %s\n",loginUser);
                userMenu();
            }
            else
            {
                printf("Wrong Username or Password!\n");
            }
        }

    
        
        else if (choice == 3)
        {
            printf("Thank You! Program Exited.\n");
            break;
        }

        else
        {
            printf("Invalid Choice!\n");
        }
    }

    return 0; 
}
void userMenu()
{
    int choice;

    do
    {
        printf("\n=== User Menu ===\n");
        printf("1. Book a Ticket\n");
        printf("2. Cancel a Ticket\n");
        printf("3. Check Bus Status\n");
        printf("4. Logout\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                bookTicket();
                break;
            case 2:
                cancelTicket();
                break;
            case 3:
                checkBusStatus();
                break;
            case 4:
                printf("Logged out successfully.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    while(choice != 4);
}


void bookTicket()
{
    int seats;
    int userbusNumber;
    int number;

    printf("\nEnter Bus Number: ");
    scanf("%d", &userbusNumber); 

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    for(int i=0;i<5;i++)
    {
        if(busNumber[i]==userbusNumber)
        {
            number=1;
            if (seats <= availableSeats[i])
            {
                availableSeats[i] -= seats;
                printf("\nBooking Successful! %d seats booked on Bus Number %d\n", seats, userbusNumber);
            }
            else
            {
                printf("\nNot seats available!\n");
            }
            break;
        }

    }
    if(number == 0)
    {
        printf("\nInvalid Bus Number!\n");
    }
}


void cancelTicket()
{
    int seats;
    int userbusNumber;
    int number;

    printf("\nEnter Bus Number: ");
    scanf("%d", &userbusNumber);

    printf("Enter Number of Seats to Cancel: ");
    scanf("%d", &seats);

    for(int i=0; i<5; i++)
    {
        if(busNumber[i]==userbusNumber)
        {
            number=1;
            if(availableSeats[i] +seats<= totalSeats[i])
        
            {
                availableSeats[i] += seats;
                printf("\nCancellation Successful! %d seats canceled on Bus Number %d\n",seats, busNumber[i]);
            }
            else
            {
                printf("\nInvalid cancellation request!\n");
            }
            break;
        }
    }
    if(number==0)
    {
        printf("\nInvalid Bus Number!\n");
    }
}


void checkBusStatus()
{
    for(int i=0; i<5;i++)
    {
    printf("Bus Number:             %d\n", busNumber[i]);
    printf("Source City:            %s\n", sourceCity[i]);
    printf("Destination City:       %s\n", destinationCity[i]);
    printf("Total Seats:            %d\n", totalSeats[i]);
    printf("Available Seats:        %d\n", availableSeats[i]);
    printf("Fare:                   %.2f\n", fare[i]);
    }
}

