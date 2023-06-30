#include <stdlib.h>
#include <stdio.h>

//creating the struct for a node
struct node{

    int data;
    struct node *next;

};

struct node *startNode=0, *temp, *newNode, *ptr;

//the function to create a newnode
struct node* getNode(){

    newNode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data to insert : ");
    scanf("%d",&newNode -> data);
    newNode -> next = NULL;
    return newNode;

};

//creating the list using user inputs
void create(){

    int count;
    printf("\nEnter the number of data you want to enter :");
    scanf("%d",&count);

    for(int i=0;i<count;i++){
        newNode = getNode();
        if(startNode == NULL){
            startNode =  newNode;
        }
        else{
            temp = startNode;
            while(temp -> next != NULL){
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
    }
    printf("\nThe list is created successfully");

}


//Displaying  the linked list
void display(){

    temp = startNode;

    while(temp != NULL){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }

}

//Adding a new node to the start of the list
void addToStart(){

    temp = startNode;
    newNode = getNode();

    newNode -> next = startNode;
    startNode = newNode;

    printf("\nThe node is successfully added to the start");

}

//Adding a new node to the end of the list
void addToEnd(){

    temp = startNode;
    newNode = getNode();

    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = newNode;
    printf("\nThe node is successfully added to the end");

}

//Adding a new node before a given element
void addBefore(){

    int element;

    printf("\nEnter the value of the element before which the node should be inserted : ");
    scanf("%d",&element);

    temp = startNode;
    newNode = getNode();

    while(temp -> next -> data != element){
        temp = temp -> next;
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;

    printf("\nThe node is successfully added");

}

//Adding a new node after a given element
void addAfter(){

    int element;

    printf("\nEnter the value of the element after which the node should be inserted : ");
    scanf("%d",&element);

    temp = startNode;
    newNode = getNode();

    while(temp -> data != element){
        temp = temp -> next;
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;

    printf("\nThe node is successfully added");

}

//Deleting an element from the beginning
void deleteFromStart(){

    temp = startNode;
    startNode = startNode -> next;
    free(temp);

    printf("\nThe node is successfully deleted");

}

//Deleting an element from the end
void deleteFromEnd(){

    temp = startNode;

    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }

    ptr = temp -> next;
    temp -> next = NULL;
    free(ptr);

    printf("\nThe node is successfully deleted");

}

//Deleting an element at a given node
void deleteAt(){

    int element;
    temp = startNode;

    printf("Enter the element at which the node should be deleted: ");
    scanf("%d",&element);

    while(temp -> next -> data != element){
        temp = temp -> next;
    }

    ptr = temp -> next;
    temp -> next = temp -> next -> next;
    free(ptr);

    printf("\nThe node is successfully deleted");

}
//Deleting an element after a given node
void deleteAfter(){

    int element;
    temp = startNode;

    printf("Enter the element after which the node should be deleted: ");
    scanf("%d",&element);

    while(temp -> data != element){
        temp = temp -> next;
    }

    ptr = temp -> next;
    temp -> next = temp -> next -> next;
    free(ptr);

    printf("\nThe node is successfully deleted");

}

//Deleting an element before a given node
void deleteBefore(){

    int element;
    temp = startNode;

    printf("Enter the element before which the node should be deleted: ");
    scanf("%d",&element);

    while(temp -> next -> next -> data != element){
        temp = temp -> next;
    }

    ptr = temp -> next;
    temp -> next = temp -> next -> next;
    free(ptr);

    printf("\nThe node is successfully deleted");

}


int main(){

    int option,optionadd,optiondelete;

    printf("\nLINKED LIST OPERATIONS\n");
    do{
        printf("\n1.Create a list\n2.Display the list\n3.Add an element to the list\n4.Delete an element from the list\n5.Exit\n");
        printf("\nChoose one option from the list above: \n");
        scanf("%d",&option);

        switch(option){

        case 1:
            create();
            break;

        case 2:
            display();
            break;

        case 3:

            do{
                printf("\n1.Add the element to the beginning\n2.Add the element to the end\n3.Add an element before a specified node\n4.Add an element after a specified node\n5.Exit\n");
                printf("\nChoose one option from above: \n");
                scanf("%d",&optionadd);

                switch(optionadd){

                case 1:
                    addToStart();
                    break;

                case 2:
                    addToEnd();
                    break;

                case 3:
                    addBefore();
                    break;

                case 4:
                    addAfter();
                    break;
                }
            }while(optionadd != 5);
            break;

            case 4:

            do{
                printf("\n1.Delete an element from the beginning\n2.Delete an element from the end\n3.Delete an element after a specified node\n4.Delete an element at a specified node\n5.Delete an element before a specified node\n6.Exit\n");
                printf("\nChoose one option from above: \n");
                scanf("%d",&optiondelete);

                switch(optiondelete){

                case 1:
                    deleteFromStart();
                    break;

                case 2:
                    deleteFromEnd();
                    break;

                case 3:
                    deleteAfter();
                    break;

                case 4:
                    deleteAt();
                    break;

                case 5:
                    deleteBefore();
                    break;

                }
            }while(optiondelete != 6);

        }

    }while(option != 5);

    return 0;
}
