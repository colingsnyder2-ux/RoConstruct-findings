// from server: 71% by atomic.potato
struct Node {
    char pad[8];
    Node* next;
    char pad2[0x51];
    char flag;
};

struct ChatLine {
    void f(Node* n);
};

void ChatLine::f(Node* n) {
    while (!n->flag) {
        f(n->next);
        Node* t = n->next;
        operator delete(n);
        n = t;
    }
}
