// from server: 32% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* next;
    Node* prev;
};

struct List {
    Node* head;
    int count;
};

struct S {
    char pad[4];
    List* list;
    int count;
    void transfer(List* other, Node* pos, Node* first, Node* last);
};

void S::transfer(List* other, Node* pos, Node* first, Node* last) {
    if (other == 0) {
        _invalid_parameter_noinfo();
    }
    if (first == other->head) {
        _invalid_parameter_noinfo();
    }
    if (first != this->list->head) {
        Node* next = first->next;
        next->prev = first->prev;
        first->prev->next = first->next;
        first->next = 0;
        first->prev = 0;
        // call destructor? 0x728460
        // operator delete
        extern void __cdecl operator_delete(void*);
        operator_delete(first);
        this->count--;
    }
    pos->next = last;
    pos->prev = other->head;
    other->head = first;
}
