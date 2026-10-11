// from server: 20% by atomic.potato
struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char pad0[0x30];
    char color;
    char isNil;
};

struct Tree {
    Node* head;
    int count;
    char pad0[0x14];
    Node* root;
};

extern "C" {
    void __stdcall sub_5b2d60(void*);
    Node* __stdcall sub_6182f0(Node*);
    void __stdcall sub_618310(Node*);
    void __stdcall sub_618370(void*);
    void __stdcall sub_6185f0(Node*);
    Node* __stdcall sub_6e2020(Node*);
    void __stdcall sub_718a32(void*);
    void __stdcall sub_719a4a(void*, void*);
    void* __stdcall sub_89e4b4(const char*);
    void* __stdcall sub_89e4b8(void*, void*);
    void* __stdcall sub_89e4c4(void*);
    void* __stdcall sub_89e9b8(void*);
}

struct ScoreHud {
    char pad0[0x18];
    Tree* tree;
    char pad1[0x2d];
    char flag49;
    void erase(void*);
};

void ScoreHud::erase(void* a1) {
    if (*(char*)((char*)a1 + 0x49)) {
        char local[0x1c];
        sub_89e4b4("8ZHu");
        sub_89e9b8(local);
        sub_89e4b8(local, local);
        sub_719a4a(local, (void*)0x9791dc);
    }
    Node* p = (Node*)a1;
    sub_618370(&p);
    Node* node = p;
    Node* parent = node->parent;
    Node* child;
    if (node->left->isNil) {
        child = node->right;
    } else if (node->right->isNil) {
        child = node->left;
    } else {
        child = node->right;
        while (!child->left->isNil) child = child->left;
    }
    Node* rep;
    if (child->isNil) {
        rep = parent;
    } else {
        rep = child;
    }
    if (!rep->isNil) rep->parent = parent;
    if (tree->root == node) {
        tree->root = rep;
    } else if (parent->left == node) {
        parent->left = rep;
    } else {
        parent->right = rep;
    }
    if (node->left->isNil) {
        if (tree->root == node) {
            tree->root = parent;
        }
    } else {
        if (tree->root == node) {
            tree->root = sub_6e2020(node->left);
        }
    }
    if (tree->root == node) {
        tree->root = parent;
    } else {
        if (tree->root == node) {
            tree->root = sub_6182f0(node->right);
        }
    }
    if (node->color) {
        if (rep != tree->root) {
            while (rep->color) {
                if (rep == rep->parent->left) {
                    Node* sib = rep->parent->right;
                    if (!sib->color) {
                        sib->color = 1;
                        rep->parent->color = 0;
                        sub_6185f0(rep->parent);
                        sib = rep->parent->right;
                    }
                    if (!sib->left->color && !sib->right->color) {
                        sib->color = 0;
                        rep = rep->parent;
                    } else {
                        if (!sib->right->color) {
                            sib->left->color = 1;
                            sib->color = 0;
                            sub_618310(sib);
                            sib = rep->parent->right;
                        }
                        sib->color = rep->parent->color;
                        rep->parent->color = 1;
                        sib->right->color = 1;
                        sub_6185f0(rep->parent);
                        rep = tree->root;
                    }
                } else {
                    Node* sib = rep->parent->left;
                    if (!sib->color) {
                        sib->color = 1;
                        rep->parent->color = 0;
                        sub_618310(rep->parent);
                        sib = rep->parent->left;
                    }
                    if (!sib->right->color && !sib->left->color) {
                        sib->color = 0;
                        rep = rep->parent;
                    } else {
                        if (!sib->left->color) {
                            sib->right->color = 1;
                            sib->color = 0;
                            sub_6185f0(sib);
                            sib = rep->parent->left;
                        }
                        sib->color = rep->parent->color;
                        rep->parent->color = 1;
                        sib->left->color = 1;
                        sub_618310(rep->parent);
                        rep = tree->root;
                    }
                }
            }
            rep->color = 1;
        }
    }
    sub_5b2d60((char*)node + 0x28);
    sub_89e4c4((char*)node + 0xc);
    sub_718a32(node);
    if (tree->count > 0) tree->count--;
}
