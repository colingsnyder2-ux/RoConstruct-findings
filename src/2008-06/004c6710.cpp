// from server: 53% by colin





struct Node {
    unsigned int left;
    unsigned int parent;
    unsigned int right;
};

void increment(Node** pnode)
{
    Node* node = *pnode;
    unsigned int color = node->left & 1;
    if (color == 0) {
        unsigned int next = node->left & 0xfffffffe;
        Node* n = (Node*)next;
        if ((n->left & 0xfffffffe) == (unsigned int)node) {
            *pnode = (Node*)node->right;
            return;
        }
    }
    if (node->parent != 0) {
        Node* p = (Node*)node->parent;
        Node* r = (Node*)p->right;
        while (r != 0) {
            p = r;
            r = (Node*)r->right;
        }
        *pnode = p;
        return;
    }
    unsigned int n = node->left & 0xfffffffe;
    Node* nn = (Node*)n;
    if (node == (Node*)nn->right) {
        *pnode = nn;
        unsigned int m = nn->left & 0xfffffffe;
        Node* mm = (Node*)m;
        while (*pnode == (Node*)mm->right) {
            *pnode = mm;
            m = mm->left & 0xfffffffe;
            mm = (Node*)m;
        }
    }
    *pnode = nn;
}
