// from server: 41% by tester
struct Node {
    int flags;
    Node* prev;
    Node* next;
};

struct List {
    Node* head;
    Node* tail;
    Node* sentinel;
};

extern "C" void __cdecl sub_4c6710(Node** out, Node* n);
extern "C" void __cdecl sub_4c6870(Node* n, Node* list);

void __cdecl sub_4c9930(List* list, Node* n, Node* other)
{
    Node* cur = n->next;
    if (cur != 0 && cur != other) {
        Node* tmp;
        sub_4c6710(&tmp, cur);
        cur->next = tmp;
        if (cur == other->next)
            other->next = tmp;
    } else {
        n->next = other;
        if (n == other) {
            other->flags = (other->flags & 1) | (int)other;
            other->next = other;
        } else if (n == other->prev) {
            other->prev = other;
        }
    }
    n->flags = (n->flags & 1) | (int)list;
    n->prev = 0;
    n->next = 0;
    sub_4c6870(n, other);
}
