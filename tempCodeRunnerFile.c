#include <stdio.h>
#include <string.h>

int main()
{
    char regUser[20], regPass[20];
    char loginUser[20], loginPass[20];
    int choice, registered = 0;

    while (1)
    {
        printf("\n--- BUS RESERVATION SYSTEM ---\n");
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\n--- REGISTRATION ---\n");
            printf("Enter Username: ");
            scanf("%s", regUser);
            printf("Enter Password: ");
            scanf("%s", regPass);
            registered = 1;

            printf("Registration Successful ✅\n");
        }

        else if (choice == 2)
        {
            if (registered == 0)
            {
                printf("Please register first ❌\n");
                continue;
            }

            printf("\n--- LOGIN ---\n");
            printf("Enter Username: ");
            scanf("%s", loginUser);
            printf("Enter Password: ");
            scanf("%s", loginPass);

            if (strcmp(regUser, loginUser) == 0 &&
                strcmp(regPass, loginPass) == 0)
            {
                printf("Login Successful 🚍\n");
            }
            else
            {
                printf("Wrong Username or Password ❌\n");
            }
        }

        else if (choice == 3)
        {
            printf("Thank You\n");
            break;
        }

        else
        {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}
🧠 SIMPLE CONCEPTS USED