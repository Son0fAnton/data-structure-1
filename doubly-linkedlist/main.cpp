// WARNING! Do not modify this file!
// Doing so will nullify your score for this activity.
#include <iostream>
#include <chrono>
#include <thread>
#include "linkedlist.h"
using namespace std;

int main(int argc, char** argv) {
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;

    DoublyLinkedList* list = new DoublyLinkedList();
    int test;
    cin >> test;
    switch (test) {
        case 1:
            cout << list->add(10) << endl;
            cout << list->add(20) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            list->flip();
            list->print();
            break;
        case 2:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            list->print();
            cout << list->addAt(45, 4) << endl;
            list->print();
            cout << list->addAt(5, 1) << endl;
            list->print();
            cout << list->addAt(60, 7) << endl;
            list->print();
            break;
        case 3:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAt(3) << endl;
            list->print();
            break;
        case 4:
            cout << list->add(10) << endl;
            cout << list->add(10) << endl;
            cout << list->add(20) << endl;
            cout << list->add(30) << endl;
            cout << list->add(10) << endl;
            cout << list->removeAll(10) << endl;
            list->print();
            break;
        case 5:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAt(3) << endl;
            cout << list->remove(50) << endl;
            list->print();
            break;
        case 6:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->remove(40) << endl;
            cout << list->removeAt(3) << endl;
            cout << list->removeAt(1) << endl;
            list->print();
            break;
        case 7:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAt(3) << endl;
            cout << list->removeAt(3) << endl;
            cout << list->remove(10) << endl;
            cout << list->removeAt(1) << endl;
            list->print();
            break;
        case 8:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(10) << endl;
            cout << list->add(20) << endl;
            cout << list->add(40) << endl;
            cout << list->add(10) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAll(10) << endl;
            list->print();
            break;
        case 9:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(10) << endl;
            cout << list->add(20) << endl;
            cout << list->add(40) << endl;
            cout << list->add(10) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->removeTail() << endl;
            cout << list->removeTail() << endl;
            list->print();
            break;
        case 10:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(20) << endl;
            cout << list->add(45) << endl;
            cout << list->add(10) << endl;
            cout << list->add(50) << endl;
            cout << list->move(5, 2) << endl;
            cout << list->move(9, 3) << endl;
            list->print();
            break;
        case 11:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(20) << endl;
            cout << list->add(45) << endl;
            cout << list->add(10) << endl;
            cout << list->add(50) << endl;
            cout << list->move(5, 2) << endl;
            cout << list->move(5, 9) << endl;
            list->print();
            break;
        case 12:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(20) << endl;
            cout << list->add(45) << endl;
            cout << list->add(10) << endl;
            cout << list->add(50) << endl;
            cout << list->move(5, 2) << endl;
            list->print();
            break;
        case 13:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(20) << endl;
            cout << list->add(45) << endl;
            cout << list->add(10) << endl;
            cout << list->add(50) << endl;
            cout << list->move(5, 2) << endl;
            cout << list->move(7, 1) << endl;
            cout << list->move(6, 8) << endl;
            list->print();
            break;
        case 14:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->addAt(14, 4) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            cout << list->isEmpty() << endl;
            list->clear();
            cout << list->isEmpty() << endl;
            list->print();
            break;
        case 15:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->addAt(14, 4) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            list->clear();
            list->print();
            break;
        case 16:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(50) << endl;
            list->clear();
            cout << list->removeAll(50) << endl;
            cout << list->removeAt(1) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            cout << list->removeAll(20) << endl;
            list->print();
            break;
        case 17:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(50) << endl;
            cout << list->contains(50) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->contains(50) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            cout << list->removeAll(20) << endl;
            list->print();
            break;
        case 18:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(50) << endl;
            cout << list->count(50) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->count(50) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            cout << list->removeAll(20) << endl;
            list->print();
            break;
        case 19:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(50) << endl;
            cout << list->get(5) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->get(3) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            cout << list->removeAll(20) << endl;
            list->print();
            break;
        case 20:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(50) << endl;
            cout << list->count(list->get(5)) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            list->print();
            cout << list->contains(list->get(5)) << endl;
            cout << list->removeAll(20) << endl;
            list->print();
            break;
    }
    delete(list);
    return 0;
}