#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp;
    int count = 0;

    // Creating 3 nodes manually
    head = (struct Node*)malloc(sizeof(struct Node));
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->next = NULL;

    // Traversing and counting
    temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }

    printf("Total nodes = %d", count);

    return 0;
}
