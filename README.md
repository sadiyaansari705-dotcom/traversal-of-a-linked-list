Count Nodes in a Singly Linked List (C)

This project contains a simple C program that demonstrates how to:

Create a Singly Linked List

Allocate memory dynamically using malloc()

Traverse the linked list

Count the total number of nodes

🧾 Program Description

The program:

Defines a Node structure with:

data (integer)

next pointer

Manually creates 3 nodes using dynamic memory allocation.

Links the nodes together.

Traverses the linked list using a while loop.

Counts and prints the total number of nodes.

🧠 Concepts Used

Structures in C

Pointers

Dynamic memory allocation (malloc)

Linked List

Traversal

Looping (while loop)

🔄 How the Program Works

Memory is allocated for three nodes.

Each node is connected using the next pointer.

A temporary pointer (temp) is used to traverse from head to NULL.

The counter increments for each node visited.

Finally, the total node count is displayed.

🚀 How to Run
🔹 Compile the Program
gcc main.c -o output
🔹 Run the Program
./output

(For Windows)

output.exe
📤 Sample Output
Total nodes = 3
📂 Project Structure
📁 linked-list-count
 ├── main.c
 └── README.md
⚠️ Note

The nodes are created manually (not using loops).

No data values are assigned to the nodes.

Memory is not freed using free() (can be improved).

🔧 Possible Improvements

Take input from the user to create nodes dynamically.

Assign data values to each node.

Free allocated memory using free().

Implement additional operations like insertion and deletion.


⭐ A version with user input

⭐ A complete linked list implementation (insert, delete, display)
