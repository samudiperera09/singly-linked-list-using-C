# singly-linked-list-using-C
**Description:**
This C program implements various operations on a singly linked list. It allows the user to create a list, display the list, add elements to the list, and delete elements from the list.

The program uses a struct called `node` to represent a single node in the linked list. Each node contains an integer `data` field and a pointer `next` field, which points to the next node in the list.

The program declares several global variables, including `startNode` (a pointer to the start of the linked list), `temp` (a temporary pointer used for traversal), `newNode` (a pointer to a newly created node), and `ptr` (a pointer used for deletion).

The `getNode` function is used to create a new node by dynamically allocating memory for it. It prompts the user to enter data for the new node and returns the newly created node.

The `create` function allows the user to create a linked list by specifying the number of elements to be inserted. It calls the `getNode` function to create nodes and inserts them at the end of the list.

The `display` function traverses the linked list and prints the data of each node.

The program provides options for adding elements to the list and deleting elements from the list. The user can choose to add an element to the beginning, end, before a specified node, or after a specified node. Similarly, the user can choose to delete an element from the beginning, end, after a specified node, at a specified node, or before a specified node.

The program uses loops and switch-case statements to handle user input and perform the desired operations. It continues to display the menu of options until the user chooses to exit.
