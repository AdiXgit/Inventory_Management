
//supplier details
typedef struct {
    int supplierid;
    char suppliername[100];
    char supplieraddress[100];

} supplier;

void addS(supplier *s,int *numsuppliers)
{
    printf("Enter the details\n");
    printf("Enter the supplier id \n");
    scanf("%d",&s[*numsuppliers].supplierid);
    printf("Enter the supplier name\n");
    scanf("%s",s[*numsuppliers].suppliername);
    printf("Enter the supplier address\n");
    scanf("%s",s[*numsuppliers].supplieraddress);
    (*numsuppliers)++;  
}

void displayS(supplier *s,int numsuppliers)
{
    int i;
    for(i = 0;i<numsuppliers;i++)
    {
        printf("Supplier id:%d\n",s[i].supplierid);
        printf("Supplier name:%s\n",s[i].suppliername);
        printf("Supplier address:%s\n",s[i].supplieraddress);
    }
}

void updateS(supplier *s,int numsuppliers)
{
    int id;
    printf("Enter the supplier id to be updated\n");
    scanf("%d",&id);
    for(int i = 0;i<numsuppliers;i++)
    {
        if(s[i].supplierid == id)
        {
            printf("Enter the details\n");
            printf("Enter the supplier id \n");
            scanf("%d",&s[i].supplierid);
            printf("Enter the supplier name\n");
            scanf("%s",s[i].suppliername);
            printf("Enter the supplier address\n");
            scanf("%s",s[i].supplieraddress);
        }
    }
}

void deleteS(supplier *s,int *numsuppliers)
{
    int id;
    printf("Enter the supplier id to be delted\n");
    scanf("%d",&id);
    for(int i = 0;i<*numsuppliers;i++)
    {
        if(s[i].supplierid == id)
        {
            for(int j = i;j<*numsuppliers-1;j++)
            {
                s[j] = s[j+1];
                *numsuppliers = *numsuppliers - 1;

            }

        }

    }

}
