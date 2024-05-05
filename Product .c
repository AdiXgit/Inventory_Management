#include <stdio.h>
#include<stdlib.h>

//product details
typedef struct
{
    int productid;
    char productname[100];
    float productprice;
    int quantity;
} Product;


void addP(Product *p,int *numproducts)
{
    printf("Enter the product details\n");
    printf("Enter the product id\n");
    scanf("%d",&p[*numproducts].productid);
    print("Enter the product name\n");
    scanf("%s",p[*numproducts].productname);
    printf("Enter the product price\n");
    scanf("%f",&p[*numproducts].productprice);
    printf("Enter the quantity\n");
    scanf("%d",&p[*numproducts].quantity);
    (*numproducts)++;

}

void displayP(Product *p,int numproducts)
{
    int i;
    for(i=0;i<numproducts;i++)
    {
        printf("Product id:%d\n",p[i].productid);
        printf("Product name:%s\n",p[i].productname);
        printf("Product price:%f\n",p[i].productprice);
        printf("Quantity:%d\n",p[i].quantity);
    }
}

void updateP(Product *p,int numproducts)
{
    int id;
    printf("Enter the product id to be updated\n");
    scanf("%d",&id);
    for(int i = 0;i<numproducts;i++)
    {
        if(p[i].productid == id)
        {
            printf("Enter the product details\n");
            printf("Enter the product id\n");
            scanf("%d",&p[i].productid);
            printf("Enter the product name\n");
            scanf("%s",p[i].productname);
            printf("Enter the product price\n");
            scanf("%f",&p[i].productprice);
            printf("Enter the quantity\n");
            scanf("%d",&p[i].quantity);
        }
    }
}

void deleteP(Product *p,int *numproducts)
{
    int id;
    printf("Enter the product id to be deleted\n");
    scanf("%d",&id);
    for(int i = 0;i<*numproducts;i++)
    {
        if(p[i].productid == id)
        {
            for(int j = i;j<*numproducts-1;j++)
            {
                p[j] = p[j+1];
            }
            (*numproducts)--;
            printf("Product deleted successfully\n");
        }
    }
}

