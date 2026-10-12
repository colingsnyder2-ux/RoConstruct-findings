// from server: 75% by colin
struct Node {
    unsigned int flags;
    Node* prev;
    Node* next;
};

struct List {
    Node* head;
    Node* tail;
};

void __cdecl sub_4C6870(Node* n, List* l);

void __cdecl sub_4C6980(Node* n, int isTail, List* l, List* owner)
{
    if (isTail == 0) {
        l->head = n;
        if (l == owner) {
            owner->head = (Node*)(((unsigned int)owner->head & 1) | (unsigned int)n);
        } else if (l->tail == owner->head) {
            owner->head = n;
        }
    } else {
        l->tail = n;
        if (l->tail == owner->head) {
            owner->head = n;
        }
    }
    n->flags = (n->flags & 1) | (unsigned int)l;
    n->prev = 0;
    n->next = 0;
    sub_4C6870(n, owner);
}
