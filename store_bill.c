#include<stdio.h>
#include<string.h>
#include<conio.h>

struct list{
    int id;
    char itemName[30];
    int price;
};

// create function to display bill

void display(struct list l[] , int totalItems , char cName[] , char cAddress[]){
    int total = 0;
    printf("\n\n\n\n");
    printf("\t Shubh Store \n");
    printf("\t-------------- \n");
    printf("\n");
    printf("Name : %s \t Address : %s \n" , cName , cAddress);
    printf("\n");
    for (int i = 0; i < totalItems; i++)
    {
        printf("Id : %d\t", l[i].id);
        printf("Name : %s\t", l[i].itemName);
        printf("Price : %d\n", l[i].price);
        printf("------------------------------------------------\n");
        total += l[i].price;

    }
    printf("\t\tTotal : %d" , total);
    printf("\n\n");
    printf("\t Thanks for visiting \n");
    printf("\n\n\n\n");
}
// Main fuction 

int main(){
    printf("Hello.......How are you?\n");
    printf("\n\n");
    char Name[30];
    char Address[30];
    int totalItems;
    printf("Enter your name \t");
    scanf(" %s" , &Name);
    printf("Enter your address \t");
    scanf(" %s" , &Address);
    printf("Enter total items \t");
    scanf("%d" , &totalItems);
    printf("\n");

    //struct array
    
    struct list l[totalItems];
    //insert items
    
    for (int i = 0; i < totalItems; i++)
    {
        l[i].id = (i+1);
        printf("Enter %d item name \t" , i+1);
        scanf(" %s" , &l[i].itemName);
        printf("Enter price \t\t");
        scanf("%d" , &l[i].price);
        printf("\n",i+1);
    }
    //call display function
    
    display(l ,totalItems,Name,Address);
    return 0;
}
