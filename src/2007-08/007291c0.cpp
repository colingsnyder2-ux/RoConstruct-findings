// from server: 44% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* next;
    Node* prev;
    int value;
};

struct List {
    Node* head;
    int size;
    void erase(Node* where, Node* first, Node* last);
};

void List::erase(Node* where, Node* first, Node* last) {
    if (where == 0) {
        _invalid_parameter_noinfo();
    }
    if (first == where->next) {
        _invalid_parameter_noinfo();
    }
    Node* next = first->next;
    if (first != last) {
        Node* p = first->prev;
        p->next = next;
        Node* n = first->next;
        first->prev->next = n;
        Node* tmp = first + 1;
        // call destructor-like function at 0x7271f0
        extern void __fastcall sub_7271F0(void*);
        sub_7271F0(tmp);
        extern void __cdecl sub_62FC62(void*);
        sub_62FC62(first);
        size -= 1;
    }
    last->next = next;
    last->prev = where;
}
