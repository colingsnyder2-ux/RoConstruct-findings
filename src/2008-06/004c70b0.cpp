// from server: 70% by atomic.potato
// roc 2008-06 004c70b0  unit: RBX::VInstance::?$Association::Item  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c70b0

struct Node {
    Node* next;
};

struct Assoc {
    Node* head;
};

struct Item {
    char pad[0x290];
    Node node;
};

struct S {
    bool f(Assoc* a, Node* n);
};

bool S::f(Assoc* a, Node* n) {
    Node* p = a->head;
    Node* first = p;
    if (p != first) {
        return true;
    }
    Node* cur = a->head;
    while (true) {
        Node* q;
        if (p != 0) {
            q = (Node*)((char*)p - 0x290);
        } else {
            q = 0;
        }
        if (cur == q->next) {
            a->head = p;
            return false;
        }
        p = p->next;
        if (p == a->head) {
            return true;
        }
    }
}
