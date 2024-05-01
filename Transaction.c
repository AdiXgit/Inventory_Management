
//transaction details

typedef struct 
{
    int transactionid;
    int productid;
    int quantity;
    char transactiondate[100];
} transaction;

void recordT(transaction *t,int *numtransactions)
{
    printf("Enter the details\n");
    printf("Enter the transaction id\n");
    scanf("%d",&t[*numtransactions].transactionid);
    printf("Enter the product id\n");
    scanf("%d",&t[*numtransactions].productid);
    printf("Enter the quantity\n");
    scanf("%d",&t[*numtransactions].quantity);
    printf("Enter the transaction date\n");
    scanf("%s",t[*numtransactions].transactiondate);
    (*numtransactions)++;

}

void updateT(transaction *t,int numtransactions)
{
    int id;
    printf("Enter the transaction id to be updated\n");
    scanf("%d",&id);
    for(int i = 0;i<numtransactions;i++)
    {
        if(t[i].transactionid == id)
        {
            printf("Enter the details\n");
            printf("Enter the transaction id\n");
            scanf("%d",&t[i].transactionid);
            printf("Enter the product id\n");
            scanf("%d",&t[i].productid);
            printf("Enter the quantity\n");
            scanf("%d",&t[i].quantity);
            printf("Enter the transaction date\n");
            scanf("%s",t[i].transactiondate);
        }
    }
}

void displayT(transaction *t,int numtransactions)
{
    int i;
    for(i=0;i<numtransactions;i++)
    {
        printf("Transaction id:%d\n",t[i].transactionid);
        printf("Product id:%d\n",t[i].productid);
        printf("Quantity:%d\n",t[i].quantity);
        printf("Transaction date:%s\n",t[i].transactiondate);
    }
}