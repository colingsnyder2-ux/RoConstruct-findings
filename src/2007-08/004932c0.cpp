// from server: 95% by colin
struct Node {
    Node* next;
    Node* prev;
    char pad[4];
    void* fieldC;
};

struct List {
    char pad[4];
    Node* head;
    int count;
    void Clear();
};

extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __cdecl sub_62FC62(void*);

void List::Clear() {
    Node* first = head->next;
    head->next = head;
    head->prev = head;
    count = 0;
    if (first != head) {
        do {
            Node* next = first->next;
            sub_77E6AC(&first->fieldC);
            sub_62FC62(first);
            first = next;
        } while (first != head);
    }
}
