// from server: 63% by Intel
struct Node {
    Node* prev;
    Node* next;
};

struct RefCounted {
    int refCount;
};

struct Container {
    RefCounted* ref;
    Node* node;

    int func(Node* a, Node* b);
};

int Container::func(Node* a, Node* b) {
    Node* n = a->prev;
    if (n) {
        Node* p = a->next;
        n->next = p;
        p->prev = n;
    }
    --ref->refCount;
    a->prev = 0;
    a->next = 0;
    b->prev = n;
    return 0;
}
