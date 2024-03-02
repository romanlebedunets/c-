//
#pragma once
#include <iostream>
#include <fstream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* back;

    Node(int val) : data(val), next(nullptr), back(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() : head(nullptr), tail(nullptr) {}
    ~LinkedList();

    void append(int val);
    void append(int val, size_t index);
    void remove(size_t index);

    void output(ostream& os) const;

    size_t count() const;

    int operator[](const size_t index) const;
    void swap(const size_t index, const size_t index1);

    Node* getList() const;
    Node* getBack() const;
    Node* getNode(size_t index) const;

    friend istream& operator>>(istream& is, LinkedList& l);
    friend ostream& operator<<(ostream& os, const LinkedList& l);
};

void input(const string namefile, LinkedList& l);
void display(const string namefile, LinkedList& l);

void appendSort(LinkedList& L, int x);
void removeSign(LinkedList& L);
size_t countX(const LinkedList& L, int x);
LinkedList uniteLists(const LinkedList& L1, const LinkedList& L2);