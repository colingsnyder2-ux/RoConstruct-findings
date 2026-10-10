// from server: 34% by colin
// roc 2007-08 004dd610  unit: seg_004d0000  size: 718 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004dd610

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char  color;
    char  nil;
    char  pad[2];
};

struct Tree {
    Node* head;
    int   count;
};

struct Str {
    void* rep;
    char  buf[16];
    unsigned len;
    unsigned cap;
};

struct Exception {
    void* vfptr;
};

extern "C" {
    void __stdcall Str_ctor_copy(Str* self, const Str* other);
    void __stdcall Str_ctor_cstr(Str* self, const char* s);
    void __stdcall Exception_ctor(Exception* self);
    void __stdcall sub_630b9e(const Str* a, const char* b);
    void __stdcall sub_587ae0(void* p);
    Node* __stdcall sub_587a40(Node* n);
    void __stdcall sub_587a60(Node* n);
    void __stdcall sub_587f60(Node* n);
    Node* __stdcall sub_4d95d0(Node* n);
    void __stdcall sub_630af7(void* p, int a, int b, void* c);
    void __stdcall sub_62fc62(void* p);
}

struct Map {
    Tree t;
    int  field_8;
    void erase_unique(Node* target);
};

void Map::erase_unique(Node* target)
{
    Node* head = t.head;
    Node* y;
    Node* x;

    if (head->nil == 0) {
        Str s1;
        Str s2;
        Exception e;
        Str_ctor_cstr(&s1, "invalid map/set<T> iterator");
        Exception_ctor(&e);
        Str_ctor_copy(&s2, &s1);
        sub_630b9e(&s2, "invalid map/set<T> iterator");
    }

    sub_587ae0(&t);

    Node* cur = t.head;
    Node* node = target;

    if (node->left->nil == 0) {
        y = node->left;
    } else if (node->right->nil == 0) {
        y = node->right;
    } else {
        Node* p = node->parent;
        if (p == cur) {
            y = node->right;
        } else {
            y = p;
        }
    }

    if (y->nil == 0) {
        y->parent = node->parent;
    }

    if (t.head->parent == node) {
        t.head->parent = y;
    } else if (node->parent->left == node) {
        node->parent->left = y;
    } else {
        node->parent->right = y;
    }

    if (t.head->left == node) {
        if (y->nil == 0) {
            t.head->left = node->parent;
        } else {
            t.head->left = sub_587a40(y);
        }
    }

    if (t.head->right == node) {
        if (y->nil == 0) {
            t.head->right = node->parent;
        } else {
            t.head->right = sub_4d95d0(y);
        }
    }

    if (y != node) {
        y->parent = node->parent;
        y->left = node->left;
        if (y == node->right) {
            x = y;
        } else {
            x = y->parent;
            if (x->nil == 0) {
                x->parent = y;
            }
            y->right = node->right;
            node->right->parent = y;
        }
        if (t.head->parent == node) {
            t.head->parent = y;
        } else if (node->parent->left == node) {
            node->parent->left = y;
        } else {
            node->parent->right = y;
        }
        y->parent = node->parent;
        char c = node->color;
        y->color = c;
        node->color = c;
    }

    if (node->color == 1) {
        while (node != t.head->parent && node->color == 1) {
            if (node == node->parent->left) {
                Node* sib = node->parent->right;
                if (sib->color == 1) {
                    sib->color = 0;
                    node->parent->color = 0;
                    node->parent->parent->color = 1;
                    node = node->parent->parent;
                } else {
                    if (node == node->parent->right) {
                        node = node->parent;
                        sub_587f60(node);
                    }
                    node->parent->color = 0;
                    node->parent->parent->color = 1;
                    sub_587a60(node->parent->parent);
                }
            } else {
                Node* sib = node->parent->left;
                if (sib->color == 1) {
                    sib->color = 0;
                    node->parent->color = 0;
                    node->parent->parent->color = 1;
                    node = node->parent->parent;
                } else {
                    if (node == node->parent->left) {
                        node = node->parent;
                        sub_587a60(node);
                    }
                    node->parent->color = 0;
                    node->parent->parent->color = 1;
                    sub_587f60(node->parent->parent);
                }
            }
        }
        node->color = 0;
    }

    sub_630af7(&t.head->right, 4, 4, (void*)0x4637f0);
    sub_62fc62(&t);

    if (field_8 > 0) {
        field_8--;
    }
}
