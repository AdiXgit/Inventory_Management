#include <stdio.h>
#include "Product.c"
#include "Supplier.c"
#include "Transaction.c"

int main()
{
    Product p[100];
    int numproducts = 0;

    suplier s[100];
    int numsuppliers = 0;

    transaction t[100];
    int numtransactions = 0;

    int choice;
    do{
        printf("\nMenu:\n");
        printf("1.Product Management\n");
        printf("2.Supplier Management \n");
        printf("3.Transaction Management\n");
        printf("4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                //product management
                printf("Product Management\n");
                printf("1.Add Product\n");
                printf("2.Display Product\n");
                printf("3.Update Product\n");
                printf("4.Delete Product\n");
                printf("Enter your choice\n");
                scanf("%d",&choice);
                switch(choice){
                    case 1:
                        addP(p,&numproducts);
                        break;
                    case 2:
                        displayP(p,numproducts);
                        break;
                    case 3:
                        updateP(p,numproducts);
                        break;
                    case 4:
                        deleteP(p,&numproducts);
                        break;
                    default:
                        printf("Invalid choice\n");
                }
                break;
            
            case 2:
                //supplier management
                printf("Supplier Management\n");
                printf("1.Add Supplier\n");
                printf("2.Display Supplier\n");
                printf("3.Update Supplier\n");
                printf("4.Delete Supplier\n");
                printf("Enter your choice\n");
                scanf("%d",&choice);
                switch(choice){
                    case 1:
                        addS(s,&numsuppliers);
                        break;
                    case 2:
                        displayS(s,numsuppliers);
                        break;
                    case 3:
                        updateS(s,numsuppliers);
                        break;
                    case 4:
                        deleteS(s,&numsuppliers);
                        break;
                    default:
                        printf("Invalid choice\n");
                }
                break;

            case 3:
                //transaction management
                printf("Transaction Management\n");
                printf("1.Record Transaction\n");
                printf("2.Display Transaction\n");
                printf("3.Update Transaction\n");
                printf("Enter your choice\n");
                scanf("%d",&choice);
                switch(choice){
                    case 1:
                        recordT(t,&numtransactions);
                        break;
                    case 2:
                        displayT(t,numtransactions);
                        break;
                    case 3:
                        updateT(t,numtransactions);
                        break;
                    default:
                        printf("Invalid choice\n");
                }
                break;
            case 4: 
                printf("Exiting the application\n");
                break;
            default:
                printf("Invalid choice\n");

        }

        

    } while (choice !=4);
    return 0;
}



