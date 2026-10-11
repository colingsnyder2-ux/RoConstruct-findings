// from server: 74% by atomic.potato
struct Node {
    Node* next;
    char pad[0x2c];
};

struct List {
    Node* head;
};

struct S {
    char f(List* a, int b, int c);
};

char S::f(List* a, int b, int c) {
    Node* first = a->head;
    Node* cur = first->next;
    if (cur == first) {
        return 1;
    }
    while (1) {
        Node* h = a->head;
        Node* base;
        if (cur != 0) {
            base = (Node*)((char*)cur - 0x30);
        } else {
            base = 0;
        }
        if (h == base->next) {
            a->head = cur;
            return 0;
        }
        cur = cur->next;
        if (cur == a->head) {
            return 1;
        }
    }
}
