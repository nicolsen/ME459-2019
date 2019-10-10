// Author: Nic Olsen

#ifndef STRUCTS_H
#define STRUCTS_H

struct A {
    int i;
    char c;
    double d;
};

struct B {
    int i;
    double d;
    char c;
};

typedef struct ListNode {
    int data;               // This node's data
    struct ListNode* next;  // Pointer to the next node in the list
    struct ListNode* prev;  // pointer to the previous node in the list
} ListNode;

#endif