// from server: 46% by atomic.potato
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

extern "C" void __cdecl sub_55D8C0(Node** out);
extern "C" void __cdecl sub_55DA20(Node* a, Node* b);

void __cdecl sub_55E130(List* list, Node* node, Node* pos) {
    Node* cur = pos->next;
    if (cur != 0 && cur != node) {
        Node* tmp;
        sub_55D8C0(&tmp);
        cur->next = tmp;
        if (cur == node->next) {
            node->next = tmp;
        }
    } else {
        cur->prev = pos;
        if (cur == node) {
            node->flags = (node->flags & 1) | (int)pos;
            node->next = pos;
        } else if (cur == node->prev) {
            node->prev = pos;
        }
    }
    pos->flags = (pos->flags & 1) | (int)cur;
    pos->prev = 0;
    pos->next = 0;
    sub_55DA20(pos, node);
}
