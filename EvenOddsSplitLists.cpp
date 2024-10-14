#include <iostream>
#include "intLinkedList.h"

int main() {
    intLinkedList originalList, evensList, oddsList;
    int num;

    std::cout << "Enter integers ending with -999:" << std::endl;
    std::cin >> num;

    while (num != -999) {
        originalList.insertLast(num);
        std::cin >> num;
    }

    std::cout << "Original list: ";
    for (auto it = originalList.begin(); it != originalList.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    // Split the list into evens and odds
    originalList.splitEvensOddsList(evensList, oddsList);

    std::cout << "Evens list: ";
    for (auto it = evensList.begin(); it != evensList.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Odds list: ";
    for (auto it = oddsList.begin(); it != oddsList.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    return 0;
}
