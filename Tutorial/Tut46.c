#include <stdio.h>
#include <string.h>

struct driver
{
    char Dname[15];
    int LNumber;
    char routeName[20];
    int KMS;

} data[2];

int main()
{
    int n, i;

    printf("Enter How Many Driver Data You Have Want to Add In This Program: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter A Driver Name: ");
        scanf("%s", &data[i].Dname);

        printf("\nEnte A Licence Number Of Driver: ");
        scanf("%d", &data[i].LNumber);

        printf("\nEnter A Route Name Of Driver: ");
        scanf("%s", &data[i].routeName);

        printf("\nEnter How Mnay KMs Driver Hvae Run A Vehical: ");
        scanf("%d", &data[i].KMS);

        printf("Driver Name: %s", data[i].Dname);
        printf("Driver Licence Number is: %d", data[i].LNumber);
        printf("Driver Route Name is: %d", data[i].routeName);
        printf("Driver KMS Expirence: %d", data[i].KMS);
    }

    return 0;
}
