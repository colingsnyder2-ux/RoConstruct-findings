// from server: 24% by colin
struct Node {
    Node* parent;
    Node* left;
    Node* right;
    char color;
    char isNil;
};

struct Tree {
    Node* header;
    int count;
};

extern "C" {
    void __stdcall sub_77E698(void*);
    void __stdcall sub_77E69C(void*);
    void __stdcall sub_77E6F8(void*);
    void __stdcall sub_77E6AC(void*);
    void __cdecl sub_62FC62(void*);
    void __cdecl sub_630B9E(void*, void*);
    void __cdecl sub_4D0870(void*);
    Node* __cdecl sub_438E90(Node*);
    Node* __cdecl sub_4CD5E0(Node*);
    void __cdecl sub_4CD710(Node*);
    void __cdecl sub_4D02F0(Node*);
}

struct ScoreHud {
    char pad0[4];
    Tree* tree;
    char pad8[0x18];
    void* vecBegin;
    void* vecEnd;
    void* vecCap;
    char pad28[0x14];
    int refCount;

    void func(void* arg1, void* arg2, void* arg3);
};

void ScoreHud::func(void* arg1, void* arg2, void* arg3)
{
    char* p = (char*)arg1;
    if (p[0x21] != 0) {
        char buf1[0x18];
        char buf2[0x18];
        sub_77E698(buf1);
        sub_77E6F8(buf2);
        sub_77E69C(buf1);
        sub_630B9E(buf2, (void*)0x83F364);
    }

    void* local = 0;
    sub_4D0870(&local);

    Node* header = tree->header;
    Node* node;
    if (header->isNil) {
        node = header->right;
    } else {
        Node* r = header->right;
        if (r->isNil) {
            node = header;
        } else {
            Node* cur = (Node*)arg2;
            if (cur == header) {
                node = cur->right;
            } else {
                node = cur->right;
                goto erase_done;
            }
        }
    }

    {
        Node* parent = node->parent;
        if (!node->isNil) {
            node->parent = parent;
        }
        Node* h = tree->header;
        if (h->parent == node) {
            h->parent = node;
        } else if (parent->left == node) {
            parent->left = node;
        } else {
            parent->right = node;
        }
        Node* h2 = tree->header;
        if (h2->left == node) {
            if (node->isNil) {
                h2->left = parent;
            } else {
                h2->left = sub_438E90(node);
            }
        }
        Node* h3 = tree->header;
        if (h3->right == node) {
            if (node->isNil) {
                h3->right = parent;
            } else {
                h3->right = sub_4CD5E0(node);
            }
        }
    }
    goto after_erase;

erase_done:
    {
        Node* parent = node->parent;
        parent->parent = (Node*)arg2;
        ((Node*)arg2)->left = node->left;
        if ((Node*)arg2 == node->right) {
            parent = (Node*)arg2;
        } else {
            Node* r = node->right;
            if (!node->isNil) {
                r->parent = parent;
            }
            parent->left = node;
            node->right = ((Node*)arg2)->right;
            ((Node*)arg2)->right->parent = node;
        }
        Node* h = tree->header;
        if (h->parent == node) {
            h->parent = (Node*)arg2;
        } else {
            Node* np = node->parent;
            if (np->left == node) {
                np->left = (Node*)arg2;
            } else {
                np->right = (Node*)arg2;
            }
        }
        node->parent = ((Node*)arg2)->parent;
        char c = node->color;
        node->color = ((Node*)arg2)->color;
        ((Node*)arg2)->color = c;
    }

after_erase:
    {
        char one = 1;
        if (node->color == one) {
            Node* h = tree->header;
            Node* root = h->parent;
            while (node != root && node->color == one) {
                Node* parent = node->parent;
                if (parent->left == node) {
                    Node* sibling = parent->right;
                    if (sibling->color == one) {
                        sibling->color = 0;
                        parent->color = one;
                        sub_4CD710(parent);
                        sibling = parent->right;
                    }
                    if (!sibling->isNil) {
                        Node* sl = sibling->left;
                        Node* sr = sibling->right;
                        if (sl->color != one && sr->color != one) {
                            sibling->color = one;
                            node = parent;
                        } else {
                            if (sr->color != one) {
                                sl->color = one;
                                sibling->color = 0;
                                sub_4D02F0(sibling);
                                sibling = parent->right;
                            }
                            sibling->color = parent->color;
                            parent->color = one;
                            sibling->right->color = one;
                            sub_4CD710(parent);
                            node = tree->header->parent;
                        }
                    } else {
                        sibling->color = one;
                        node = parent;
                    }
                } else {
                    Node* sibling = parent->left;
                    if (sibling->color == one) {
                        sibling->color = 0;
                        parent->color = one;
                        sub_4D02F0(parent);
                        sibling = parent->left;
                    }
                    if (!sibling->isNil) {
                        Node* sl = sibling->left;
                        Node* sr = sibling->right;
                        if (sl->color != one && sr->color != one) {
                            sibling->color = one;
                            node = parent;
                        } else {
                            if (sl->color != one) {
                                sr->color = one;
                                sibling->color = 0;
                                sub_4CD710(sibling);
                                sibling = parent->left;
                            }
                            sibling->color = parent->color;
                            parent->color = one;
                            sibling->left->color = one;
                            sub_4D02F0(parent);
                            node = tree->header->parent;
                        }
                    } else {
                        sibling->color = one;
                        node = parent;
                    }
                }
            }
            node->color = one;
        }
    }

    {
        void* p = vecBegin;
        if (p != 0) {
            void* e = vecEnd;
            while (p != e) {
                sub_77E6AC(p);
                p = (char*)p + 0x1c;
            }
            sub_62FC62(vecBegin);
        }
        vecBegin = 0;
        vecEnd = 0;
        vecCap = 0;
        sub_62FC62(0);
    }

    {
        int* rc = (int*)arg3;
        int c = rc[2];
        if (c > 0) {
            rc[2] = c - 1;
        }
    }
}
