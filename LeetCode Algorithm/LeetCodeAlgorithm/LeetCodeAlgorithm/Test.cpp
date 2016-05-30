//
//  Test.cpp
//  LeetCodeAlgorithm
//
//  Created by wjl on 16/5/14.
//  Copyright © 2016年 Martin. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
using std::cout;
struct ListNode {
    
    int value;
    ListNode *next;
};

ListNode* swapPairs(ListNode* head) {
    if(head == NULL)
        return NULL;
    if(head->next == NULL)
        return head;
    
    ListNode* next = head->next;
    head->next = swapPairs(next->next);
    next->next = head;

    
    return next;
}
ListNode* CreateListNode(int value){
    
    ListNode* pNode = new ListNode();
    pNode->value = value;
    pNode->next = NULL;
    
    return pNode;
}

void ConnectListNodes(ListNode* pCurrent, ListNode* pNext){
    
    if (pCurrent == NULL) {
        printf("error");
        exit(1);
    }
    
    pCurrent->next = pNext;
}

int main(){
 
    ListNode *l1 = CreateListNode(1);
    ListNode *l2 = CreateListNode(2);
    ListNode *l3 = CreateListNode(3);
    ListNode *l4 = CreateListNode(4);
    
    ConnectListNodes(l1, l2);
    ConnectListNodes(l2, l3);
    ConnectListNodes(l3, l4);
    
    ListNode *l = swapPairs(l1);
    
    ListNode *node = l;
    
    while(node != NULL) {
        printf("%d",node->value);
        node = node->next;
    }
    
}
