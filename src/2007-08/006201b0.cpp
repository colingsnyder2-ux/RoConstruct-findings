// from server: 32% by colin
struct Node {
    char pad0[8];
    Node* left;
    Node* right;
    char pad14[0x1d - 0x14];
    unsigned char flag;
};

struct Tree {
    void erase(Node*);
    void destroy(Node*);
};

void Tree::destroy(Node* n)
{
    if (n->flag == 0) {
        Node* cur = n;
        do {
            destroy(cur->left);
            Node* next = cur->right;
            Node* tmp = cur;
            cur = next;
            erase(tmp);
        } while (cur->flag == 0);
    }
}

void Tree::erase(Node* n)
{
    extern void __cdecl free(void*);
    free(n);
}
