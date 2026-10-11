// from server: 45% by colin
struct Node {
    Node* next;
    Node* prev;
    char pad[0x20];
};

struct List {
    char pad0[0x14];
    Node* head;
    int count;
    void clear();
};

extern "C" void __cdecl free_node(Node* n);
extern "C" void __stdcall destroy_body(void* p);

void List::clear() {
    Node* cur = head->next;
    head->next = head;
    head->prev = head;
    count = 0;
    while (cur != head) {
        Node* next = cur->next;
        Node* body = (Node*)((char*)cur + 8);
        destroy_body((char*)body + 0x20);
        free_node(cur);
        cur = next;
    }
}
