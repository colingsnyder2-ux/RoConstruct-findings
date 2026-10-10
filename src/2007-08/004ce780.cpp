// from server: 11% by colin
struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char  color;
    char  isnil;
    char  pad[2];
};

struct Tree {
    Node* head;
    int   count;
};

struct String {
    void* rep;
    union {
        char buf[16];
        char* ptr;
    };
    unsigned int size;
    unsigned int res;
};

struct Exception {
    void* vfptr;
};

extern "C" {
    void* __stdcall sub_77E698(const char*);
    void* __stdcall sub_77E69C(void*, void*);
    void* __stdcall sub_77E6F8(void*);
}

void __cdecl sub_630B9E(void*, void*);
void __cdecl sub_62FC62(void*);
void __cdecl sub_4CD890(void*);
void __cdecl sub_4D0870(void*);
void __cdecl sub_4CD710(void*);
void __cdecl sub_4D02F0(void*);
void* __cdecl sub_438E90(void*);
void* __cdecl sub_4CD5E0(void*);

struct Table {
    char pad0[4];
    Tree* tree;
    int   refcount;
    char pad1[0x18];
    void* vtable;
    char pad2[4];

    void erase(Node*);
    void rotate_left(Node*);
    void rotate_right(Node*);
    void rebalance(Node*);
    void destroy(Node*);
    void clear();
    void insert_unique(void*);
};

void Table::erase(Node* target)
{
    Node* head = tree->head;
    Node* y;
    Node* x;
    Node* z;

    if (target->left == 0) {
        y = target;
    } else if (target->right == 0) {
        y = target;
    } else {
        y = target->right;
        while (y->left != 0)
            y = y->left;
    }

    if (y->left != 0)
        x = y->left;
    else
        x = y->right;

    if (x != 0)
        x->parent = y->parent;

    if (y->parent == head)
        head->parent = x;
    else if (y == y->parent->left)
        y->parent->left = x;
    else
        y->parent->right = x;

    if (y != target) {
        if (target->left == y) {
            if (x != 0)
                x->parent = y;
        } else {
            if (x != 0)
                x->parent = y->parent;
            y->left = target->left;
            y->left->parent = y;
            y->right = target->right;
            y->right->parent = y;
        }
        if (target->parent == head)
            head->parent = y;
        else if (target == target->parent->left)
            target->parent->left = y;
        else
            target->parent->right = y;
        y->parent = target->parent;
        {
            char c = target->color;
            target->color = y->color;
            y->color = c;
        }
    }

    if (target->color == 1) {
        while (x != head->parent && x->color == 1) {
            if (x == x->parent->left) {
                Node* w = x->parent->right;
                if (w->color == 0) {
                    w->color = 1;
                    x->parent->color = 0;
                    rotate_left(x->parent);
                    w = x->parent->right;
                }
                if (w->left->color == 1 && w->right->color == 1) {
                    w->color = 0;
                    x = x->parent;
                } else {
                    if (w->right->color == 1) {
                        w->left->color = 1;
                        w->color = 0;
                        rotate_right(w);
                        w = x->parent->right;
                    }
                    w->color = x->parent->color;
                    x->parent->color = 1;
                    w->right->color = 1;
                    rotate_left(x->parent);
                    x = head->parent;
                }
            } else {
                Node* w = x->parent->left;
                if (w->color == 0) {
                    w->color = 1;
                    x->parent->color = 0;
                    rotate_right(x->parent);
                    w = x->parent->left;
                }
                if (w->right->color == 1 && w->left->color == 1) {
                    w->color = 0;
                    x = x->parent;
                } else {
                    if (w->left->color == 1) {
                        w->right->color = 1;
                        w->color = 0;
                        rotate_left(w);
                        w = x->parent->left;
                    }
                    w->color = x->parent->color;
                    x->parent->color = 1;
                    w->left->color = 1;
                    rotate_right(x->parent);
                    x = head->parent;
                }
            }
        }
        x->color = 1;
    }
}
