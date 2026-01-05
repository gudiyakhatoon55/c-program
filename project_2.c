#include <stdio.h>
#include <string.h>

/* ---------- Global Data ---------- */
char sys_username[30] = "gudiyakhatoon";
char sys_password[30] = "gudiya@55";

int busNumber = 101;
char sourceCity[30] = "Delhi";
char destinationCity[30] = "Bihar";
int totalSeats = 50;
int availableSeats = 50;
float fare = 500.00;

/* ---------- Function Declarations ---------- */
void registed();
void login();
void userMenu();
void bookTicket();
void cancelTicket();
void checkBusStatus();

/* ---------- Main Function ---------- */
int main()
{
    int choice;

    printf("******** BUS RESERVATION SYSTEM ********\n");
    printf("1. registetion\n");
    printf("2. Login\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);


    
    if(choice == 1)
    {
        login();
    }
    else
    {
        printf("Thank you! Program exited.\n");
    }

    return 0;
}

/* ---------- Login Function ---------- */
void registed()
{
    char user[30], pass[30];

    printf("\nEnter Username: ");
    scanf("%s", user);
    printf("Enter Password: ");
    scanf("%s", pass);

    if(strcmp(user, sys_username) == 0 && strcmp(pass, sys_password) == 0)
    {
        printf("\nregistation Successful! Welcome, %s\n", user);
        userMenu();
    }
    else
    {
        printf("\nInvalid Username or Password!\n");
    }
}
void login()
{
    char user[30], pass[30];

    printf("\nEnter Username: ");
    scanf("%s", user);
    printf("Enter Password: ");
    scanf("%s", pass);

    if(strcmp(user, sys_username) == 0 && strcmp(pass, sys_password) == 0)
    {
        printf("\nlogin Successful! Welcome, %s\n", user);
        userMenu();
    }
    else
    {
        printf("\nInvalid Username or Password!\n");
    }
}


/* ---------- User Menu ---------- */
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

/* ---------- Book Ticket ---------- */
void bookTicket()
{
    int seats;

    printf("\nEnter Bus Number: ");
    scanf("%d", &busNumber);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    if(seats <= availableSeats)
    {
        availableSeats -= seats;
        printf("\nBooking Successful! %d seats booked on Bus Number %d\n",
               seats, busNumber);
    }
    else
    {
        printf("\nNot enough seats available!\n");
    }
}

/* ---------- Cancel Ticket ---------- */
void cancelTicket()
{
    int seats;

    printf("\nEnter Bus Number: ");
    scanf("%d", &busNumber);

    printf("Enter Number of Seats to Cancel: ");
    scanf("%d", &seats);

    if(availableSeats + seats <= totalSeats)
    {
        availableSeats += seats;
        printf("\nCancellation Successful! %d seats canceled on Bus Number %d\n",
               seats, busNumber);
    }
    else
    {
        printf("\nInvalid cancellation request!\n");
    }
}

/* ---------- Check Bus Status ---------- */
void checkBusStatus()
{
    printf("\nBus Number: %d\n", busNumber);
    printf("Source City: %s\n", sourceCity);
    printf("Destination City: %s\n", destinationCity);
    printf("Total Seats: %d\n", totalSeats);
    printf("Available Seats: %d\n", availableSeats);
    printf("Fare: %.2f\n", fare);
}

