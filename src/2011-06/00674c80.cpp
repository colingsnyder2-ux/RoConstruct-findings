// from server: 73% by atomic.potato
struct Node {
    Node* parent;
    Node* left;
    Node* right;
    char pad[0x31 - 0x0C];
    char color;
};

struct S {
    Node* head;
    void f();
};

void S::f() {
    Node* x = head;
    if (x->color != 0) {
        head = x->right;
        return;
    }
    Node* y = x->parent;
    if (y->color != 0) {
        Node* z = x->right;
        if (z->color != 0) {
            head = y;
            return;
        }
        while (z->color == 0) {
            y = z;
            z = y->right;
        }
        head = y;
        return;
    }
    Node* w = x->left;
    if (w->color == 0) {
        Node* v = head;
        if (v == w->parent) {
            head = w;
            w = w->left;
            while (w->color == 0) {
                v = head;
                if (v != w->parent) break;
                head = w;
                w = w->left;
            }
        }
    }
    Node* u = head;
    if (u->color == 0) {
        head = w;
    }
}
