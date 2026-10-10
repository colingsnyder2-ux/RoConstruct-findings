// from server: 22% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char color;
    char pad19;
    char pad1a;
    char pad1b;
    char pad1c;
    char pad1d;
    char pad1e;
    char pad1f;
    void* data;
};

struct Tree {
    Node* head;
    int count;
};

struct Peer {
    char pad0[4];
    Tree* tree;
    int count2;
    void erase(Node* n);
    void rotateLeft(Node* n);
    void rotateRight(Node* n);
};

void Peer::erase(Node* n) {
    Node* y;
    Node* x;
    Node* z;
    Node* w;
    Node* head;
    Node* leftmost;
    Node* rightmost;
    Node* parent;
    char tmp;

    if (n->pad19 != 0) {
        return;
    }

    y = n;
    x = 0;
    z = 0;

    if (y->left != 0) {
        x = y->right;
    } else if (y->right == 0) {
        x = y->left;
    } else {
        y = y->right;
        while (y->left != 0) {
            y = y->left;
        }
        x = y->right;
    }

    if (y != n) {
        n->left->parent = y;
        y->left = n->left;
        if (y != n->right) {
            x->parent = y->parent;
            y->parent->left = x;
            y->right = n->right;
            n->right->parent = y;
        } else {
            x->parent = y;
        }
        if (this->tree->head->parent == n) {
            this->tree->head->parent = y;
        } else if (n->parent->left == n) {
            n->parent->left = y;
        } else {
            n->parent->right = y;
        }
        y->parent = n->parent;
        tmp = y->color;
        y->color = n->color;
        n->color = tmp;
        y = n;
    }

    if (y->color == 1) {
        while (x != this->tree->head->parent && x->color == 1) {
            if (x == x->parent->left) {
                w = x->parent->right;
                if (w->color == 0) {
                    w->color = 1;
                    x->parent->color = 0;
                    this->rotateLeft(x->parent);
                    w = x->parent->right;
                }
                if (w->left->color == 1 && w->right->color == 1) {
                    w->color = 0;
                    x = x->parent;
                } else {
                    if (w->right->color == 1) {
                        w->left->color = 1;
                        w->color = 0;
                        this->rotateRight(w);
                        w = x->parent->right;
                    }
                    w->color = x->parent->color;
                    x->parent->color = 1;
                    w->right->color = 1;
                    this->rotateLeft(x->parent);
                    x = this->tree->head->parent;
                }
            } else {
                w = x->parent->left;
                if (w->color == 0) {
                    w->color = 1;
                    x->parent->color = 0;
                    this->rotateRight(x->parent);
                    w = x->parent->left;
                }
                if (w->right->color == 1 && w->left->color == 1) {
                    w->color = 0;
                    x = x->parent;
                } else {
                    if (w->left->color == 1) {
                        w->right->color = 1;
                        w->color = 0;
                        this->rotateLeft(w);
                        w = x->parent->left;
                    }
                    w->color = x->parent->color;
                    x->parent->color = 1;
                    w->left->color = 1;
                    this->rotateRight(x->parent);
                    x = this->tree->head->parent;
                }
            }
        }
        x->color = 1;
    }

    if (y->data != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)y->data + 4), -1) == 1) {
            (*(void(__thiscall**)(void*))y->data)(y->data);
            if (_InterlockedExchangeAdd((volatile long*)((char*)y->data + 8), -1) == 1) {
                (*(void(__thiscall**)(void*))((*(void***)y->data)[2]))(y->data);
            }
        }
    }

    operator delete(y);

    if (this->count2 > 0) {
        this->count2--;
    }
}
