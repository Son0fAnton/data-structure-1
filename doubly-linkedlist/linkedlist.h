#include "node.h"
#include "list.h"
#include <cstdlib>
#include <iostream>
using namespace std;

class DoublyLinkedList : public List {
    node* head;
    node* tail;
    int index;

    node* create_node(int num, node* predecessor, node* successor) {
        node* n = (node*) malloc( sizeof(node) );
        n->element = num;
        n->next = successor;
        n->prev = predecessor;
        return n;
    }

    void add_between(int num, node* predecessor, node* successor) {
        node* newest = create_node(num, predecessor, successor);
        predecessor->next = newest;
        successor->prev = newest;
        index++;
    }

    void remove_between(node* num){
        node* predecessor = num->prev;
        node* successor = num->next;
        predecessor->next = successor;
        successor->prev = predecessor;
        free(num);
        index--;
    }

    // FEEL free to add your other helper functions here e.g. the remove_between

    public:
        DoublyLinkedList() {
            index = 0;
            head = create_node(0, NULL, NULL);
            tail = create_node(0, head, NULL);
            head->next = tail;
        }

        ~DoublyLinkedList() {
            clear();
        }

        void addHead(int num) {
            add_between(num, head, head->next);
        }

        void addTail(int num) {
            add_between(num, tail->prev, tail);
        }

        int removeHead() {
            int elem = 0;
            if(!isEmpty()){
                elem = head->next->element;
                node* first = head->next;
                node* second = first->next;
                second->prev = head;
                head->next = second;
                free(first);
                index--;
            }
            return elem;
        }

        int removeTail() {
            int elem = 0;
            if(!isEmpty()){
                elem = tail->prev->element;
                node* pred = tail->prev;
                node* suc = pred->prev;
                suc->next = tail;
                tail->prev = suc;
                free(pred);
                index--;
            }
            return elem;
        }

        int add(int num) {
            addTail(num);
            return index;
        }

        int remove(int num) {
            node* currnode;
            int pos = 1;
            currnode = head->next;
            if(!isEmpty()){
                while(currnode->element != num){
                    currnode = currnode->next;
                    pos++;
                }
                remove_between(currnode);
            }
            return pos;
        }

        int get(int pos) {
            node* currnode;
            int count;
            bool start_from_head = true;
            if (pos > index/2) {
                start_from_head = false;
            }

            if (start_from_head) {
                // START FROM HEAD
                currnode = head->next;
                count = 0;
                while (currnode != NULL) {
                    count++;
                    if (count == pos) {
                        return currnode->element;
                    } else {
                        currnode = currnode->next;
                    }
                }
            } else {
                // START FROM TAIL
                currnode = tail->prev;
                count = index + 1;
                while (currnode != NULL) {
                    count--;
                    if (count == pos) {
                        return currnode->element;
                    } else {
                        currnode = currnode->prev;
                    }
                }
            }
            return -1;
        }

        int size() {
            return index;
        }

        bool addAt(int num, int pos) {
            node* currnode;
            if(pos > index+1){
                return false;
            }
            int i = 1;
            if(pos == i){
                addHead(num);
            } else {
                currnode = head->next;
                while(i < pos-1){
                    currnode = currnode->next;
                    i++;
                }
                add_between(num, currnode, currnode->next);
            }
            return true;
        }

        int removeAt(int pos) {
            node* currnode;
            if(pos > index){
                return -1;
            }
            int i = 1;
            int elem = 0;
            if(pos == i){
                elem = removeHead();
            } else {
                currnode = head->next;
                while(i < pos){
                    currnode = currnode->next;
                    i++;
                }
                elem = currnode->element;
                remove_between(currnode);
            }
            return elem;
        }

        int removeAll(int num) {
            if(isEmpty()){
                return 0;
            }
            node* currnode = head->next;
            int cnt = 0;
            while(currnode != NULL){
                if(currnode->element == num){
                    remove_between(currnode);
                    currnode = head;
                    cnt++;
                }
                currnode = currnode->next;
            }
            return cnt;
        }

        int contains(int num) {
            node* currnode = head->next;
            int pos = 1;
            while(currnode != NULL){
                if(currnode->element == num){
                    return pos;
                }
                pos++;
                currnode = currnode->next;
            }
            return 0;
        }

        int count(int num) {
            node* currnode = head->next;
            int cnt = 0;
            while(currnode != NULL){
                if(currnode->element == num)   
                    cnt++;
                currnode = currnode->next;
            }
            return cnt;
        }

        bool move(int pos1, int pos2) {
            if(pos1 > index || pos2 > index){
                return false;
            } else {
                //swap method;
                int elem = get(pos1);
                removeAt(pos1);
                addAt(elem, pos2);
            }
            return true;
        }
        
        bool isEmpty() {
            return index == 0;
        }
        
        void clear() {
            while(!isEmpty()){
                removeHead();
            }
        }

        // WARNING! Do not modify this method below!
        // Doing so will nullify your score for this activity.
        void print() {
            node* currnode = head;
            cout << "HEAD: ";
            while (true) {
                cout << currnode->element;
                if (currnode == tail) {
                    cout << endl;
                    break;
                }
                cout << " -> ";
                currnode = currnode->next;
            }
            currnode = tail;
            cout << "TAIL: ";
            while (true) {
                cout << currnode->element;
                if (currnode == head) {
                    cout << endl;
                    break;
                }
                cout << " -> ";
                currnode = currnode->prev;
            }
        }
};