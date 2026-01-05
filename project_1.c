#include<stdio.h>
#include<string.h>

char username[30]={"gudiyakhatoon"};
char password[30]={"gudiya@55"};

int Bus_Number=101;
char sourcecity[30]="Delhi";
char Destinationcity[30]="Bihar";
int Totalseats=50;
int AvailbeSeats=50;
float fare= 500.00;

void Login();
void Menu();
void ChackBusDetails();
void BookTicket();
void CncelTicket();

int main()
{
    int choice;
    printf("\n");
    printf("\t\t*******Bus Reservation System********");
    printf("\t\t_____________________________________________\n");
    printf("1. login\n");
    printf("2. exit\n");
    printf("please enter choice: ");
    scanf("%d",&choice);

    if(choice == 1)
    {
        Login();
    }
    else 
    {
        printf("thank you! program exited. \n");

    }
    return 0;
}
void Login()
{
    char user[30];
    char pass[30];
    printf("\nplease enter username: ");
    scanf("%s", user);
    printf("\n please enter password: ");
    scanf("%s", pass);

    if(strcmp(user, username) == 0 && strcmp(pass, password) == 0)
    {
        printf("\n login successful! welcome, %s\n",username);
        Menu();
    }
    else
    {
        printf("\n invalid username or password!\n");
    }
}
void Menu()
{
    int choice;
    do
    {
        printf("\n===== User Menu ====\n");
        printf("1. Book a Ticket\n");
        printf("2. Cancel a Ticket\n");
        printf("3. Check Bus Status\n");
        printf("4. Logout\n");
        printf("please enter you choice: ");
        scanf("%d",&choice);
    
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
                    printf("Logout successfully.\n");
                    break;
                default:
                    printf("Invalid choice!\n");
            }
    }
    while(choice != 4);

}
