// from server: 19% by colin
struct Node {
    Node* parent;
    Node* left;
    Node* right;
    char color;
    char isNil;
    char pad[2];
};

struct Tree {
    Node* header;
    int count;
};

struct ScoreHud {
    char pad0[4];
    Tree* tree;
    char pad8[0x10];
    int field18;
    char pad1c[0x10];
    int field2c;
    char pad30[0x38];
    int field68;
    int field6c;

    void erase(Tree* t, Node* where);
};

extern "C" {
    void __stdcall sub_77e698(void*);
    void __stdcall sub_77e6f8(void*);
    void __stdcall sub_77e69c(void*, void*);
}

void __cdecl sub_630b9e(void*, void*);
void __cdecl sub_60cd80(void*);
void __cdecl sub_61da30(Node*);
void __cdecl sub_4ef2c0(Node*);
void __cdecl sub_4ef690(Node*);
void __cdecl sub_61d9d0(Node*);
void __cdecl sub_543460(void*, void*, void*, void*, void*);
void __cdecl sub_62fc62(void*);

void ScoreHud::erase(Tree* t, Node* where)
{
    Node* y;
    Node* x;
    Node* z;
    Node* header;
    Node* nil;
    char tmp;

    if (where->isNil) {
        return;
    }

    if (where->left == 0 && where->right == 0) {
        y = where;
    } else {
        y = where->right;
        while (y->left != 0) {
            y = y->left;
        }
    }

    if (y->left != 0) {
        x = y->left;
    } else {
        x = y->right;
    }

    if (x != 0) {
        x->parent = y->parent;
    }

    header = t->header;
    if (header->parent == y) {
        header->parent = x;
    } else if (y->parent->left == y) {
        y->parent->left = x;
    } else {
        y->parent->right = x;
    }

    if (y != where) {
        if (where->parent->left == where) {
            where->parent->left = y;
        } else {
            where->parent->right = y;
        }
        y->left = where->left;
        where->left->parent = y;
        y->right = where->right;
        where->right->parent = y;
        y->parent = where->parent;
        tmp = y->color;
        y->color = where->color;
        where->color = tmp;
    }

    if (y->color == 0) {
        while (x != t->header->parent && x->color == 0) {
            if (x == x->parent->left) {
                z = x->parent->right;
                if (z->color == 1) {
                    z->color = 0;
                    x->parent->color = 1;
                    sub_4ef690(x->parent);
                    z = x->parent->right;
                }
                if (z->left->color == 0 && z->right->color == 0) {
                    z->color = 1;
                    x = x->parent;
                } else {
                    if (z->right->color == 0) {
                        z->left->color = 1;
                        z->color = 0;
                        sub_61d9d0(z);
                        z = x->parent->right;
                    }
                    z->color = x->parent->color;
                    x->parent->color = 1;
                    z->right->color = 1;
                    sub_4ef690(x->parent);
                    x = t->header->parent;
                }
            } else {
                z = x->parent->left;
                if (z->color == 1) {
                    z->color = 0;
                    x->parent->color = 1;
                    sub_61d9d0(x->parent);
                    z = x->parent->left;
                }
                if (z->right->color == 0 && z->left->color == 0) {
                    z->color = 1;
                    x = x->parent;
                } else {
                    if (z->left->color == 0) {
                        z->right->color = 1;
                        z->color = 0;
                        sub_4ef690(z);
                        z = x->parent->left;
                    }
                    z->color = x->parent->color;
                    x->parent->color = 1;
                    z->left->color = 1;
                    sub_61d9d0(x->parent);
                    x = t->header->parent;
                }
            }
        }
        x->color = 1;
    }

    sub_62fc62(where);
    t->count--;
}
