include <stdio.h>
 
void main()
{
    struct date
    {
        int day;
        int month;
        int year;
    };
    struct details
    {
        char name[20];
        int price;
    };
    struct details item[50];
    int n, i;
 
    printf("Enter number of items:");
    scanf("%d", &n);
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Item name: \n");
        scanf("%s", item[i].name);
        fflush(stdin);
        printf("price: \n");
        scanf("%d",  &item[i].price);
    }
    printf("             *****  INVENTORY ***** \n");
    printf("---------------------------------------------------------
    ---------\n");
    printf("S.N.|    NAME    |  PRICE
    | MFG.DATE \n");
    printf("---------------------------------------------------------
    ---------\n");
    for (i = 0; i < n; i++)
        printf("%d     %-15s        %-d          %-5d     %-5d
        %d/%d/%d \n", i + 1, item[i].name,item[i].price);
    printf("---------------------------------------------------------
    ---------\n");
}
