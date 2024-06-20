#include <stdio.h>
#include <string.h>

void createaccount();
void Deposit();
void Withdraw();
void DisplayAccountDetail();
void CheckBalance();
int Totalbalance;
char MainAccount[11];

int main()
{
    int taskno;

    printf("********Project 2 - Banking Management System******** \n");

    printf("\t1- Create Account");
    printf("\n\t2- Deposit");
    printf("\n\t3- Withdraw");
    printf("\n\t4- Check balance");
    printf("\n\t0- Exit");

    do
    {

        printf("\n\nPlease enter the task number: ");
        scanf("%d", &taskno);

        

        switch (taskno)
        {
        case 1:
            createaccount();

            break;
        case 2:
            Deposit();
            break;
        case 3:
            Withdraw();
            break;
        case 4:
            CheckBalance();
            break;
        default:
            break;
        }
    } while (taskno != 0);

    return 0;
}

void createaccount()
{

    char accountno[11];
    char accountholder[15];
    int balance;

    do
    {
        printf("Please Enter 11 digit Account Number only: ");
        scanf("%s", &accountno);
        if (strlen(accountno) == 11)
        {
            printf("Please Enter Account Holder Name: ");
            scanf("%s", &accountholder);

            do
            {

                printf("Please enter Balance (Opening Amount would be 500 minimum)");
                scanf("%d", &balance);

            } while (balance < 500);
        }

    } while (strlen(accountno) != 11);

    printf("\nThank You to join India Bank");
    printf("\nYour Account Details ");
    printf("\nAccount Number : %s", accountno);
    printf("\nAccount Holder Name: %s", accountholder);
    printf("\nAccount Balance: %d", balance);
    strcpy(MainAccount, accountno);
    Totalbalance = balance;
}

void DisplayAccountDetail()
{
    if (strlen(MainAccount) < 1)
    {
        printf("\nError- Please Create Customer Account First");
    }
    else
    {
        printf("\nAccount Number: %s", MainAccount);
        printf("\nTotal Balance: %d", Totalbalance);
    }
}

void Deposit()
{

    if (strlen(MainAccount) < 1)
    {
        printf("\nError- Please Create Customer Account First");
    }
    else
    {
        int deposit;
        do
        {
            printf("Please Enter Amount to Deposit: minimum amount - 100 ");
            scanf("%d", &deposit);

        } while (deposit < 100);
        Totalbalance += deposit;

        DisplayAccountDetail();
    }
}

void Withdraw()
{
    if (strlen(MainAccount) < 1)
    {
        printf("\nError- Please Create Customer Account First");
    }
    else
    {
        int withdrawamount;
        printf("\n please enter the withdraw Amount");
        scanf("%d", &withdrawamount);
        Totalbalance -= withdrawamount;
        DisplayAccountDetail();
    }
}
void CheckBalance()
{
    if (strlen(MainAccount) < 1)
    {
        printf("\nError- Please Create Customer Account First");
    }
    else
    {
        DisplayAccountDetail();
    }
}
