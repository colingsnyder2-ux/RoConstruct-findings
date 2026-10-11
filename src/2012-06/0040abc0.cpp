// from server: 66% by atomic.potato
struct Node {
    Node* next;
    Node* prev;
    Node* parent;
    char pad[0x45 - 0x0C];
    char flag45;
};

struct List {
    Node* head;
    Node* tail;
};

struct Holder {
    char pad0[4];
    List* list;
    Node* prev;
};

struct Creator {
    void insert(Holder* h);
};

void Creator::insert(Holder* h) {
    List* lst = h->list;
    Node* n = lst->head;
    lst->head = n->next;
    Node* m = n->next;
    if (m->flag45 == 0) {
        m->prev = (Node*)h;
    }
    Node* p = h->prev;
    n->prev = p;
    Node* t = lst->tail;
    if ((Node*)h == t->prev) {
        t->prev = n;
        n->next = (Node*)h;
        h->prev = n;
        return;
    }
    Node* q = h->prev;
    if ((Node*)h == q->next) {
        q->next = n;
        n->next = (Node*)h;
        h->prev = n;
        return;
    }
    q->parent = n;
    n->next = (Node*)h;
    h->prev = n;
}
