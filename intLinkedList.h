#pragma once
#ifndef INTLINKEDLIST_H
#define INTLINKEDLIST_H

#include "unorderedLinklist.h"

class intLinkedList : public unorderedLinkedList<int> {
public:
    void splitEvensOddsList(intLinkedList& evensList, intLinkedList& oddsList) {
        // Function to rearrange the nodes of the linked list so that
        // evensList consists of even integers and oddsList consists of odd integers.
        // Postcondition: evensList consists of even integers, oddsList consists of odd integers.
        // The original list is empty.


#endif

        nodeType<int>* current = this->first;  // Start from the first node
        nodeType<int>* nextNode;               // To store the next node

        while (current != nullptr) {
            nextNode = current->link;  // Save the link to the next node
            current->link = nullptr;   // Disconnect the current node from the original list

            if (current->info % 2 == 0) {
                // Even node
                if (evensList.first == nullptr) {
                    evensList.first = current;
                    evensList.last = current;
                }
                else {
                    evensList.last->link = current;
                    evensList.last = current;
                }
            }
            else {
                // Odd node
                if (oddsList.first == nullptr) {
                    oddsList.first = current;
                    oddsList.last = current;
                }
                else {
                    oddsList.last->link = current;
                    oddsList.last = current;
                }
            }

            // Move to the next node
            current = nextNode;
        }

        // The original list is now empty
        this->first = nullptr;
        this->last = nullptr;
        this->count = 0;
    }
};
