// from server: 68% by Intel
struct Node {
    Node* next;
};

struct List {
    Node* head;
    Node* tail;
    int count;

    int clear();
};

extern "C" void __cdecl free_node(Node*);

int List::clear() {
    Node* sentinel = this->head;
    Node* first = sentinel->next;
    sentinel->next = sentinel;
    this->tail = sentinel;
    this->count = 0;

    if (first != this->head) {
        Node* current = first;
        do {
            Node* next = current->next;
            free_node(current);
            current = next;
        } while (current != this->head);
    }
    return 0;
}
