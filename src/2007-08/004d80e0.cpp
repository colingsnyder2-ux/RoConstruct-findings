// from server: 70% by colin
struct Node {
    Node* left;
    Node* right;
    int key;
    float x;
    float y;
    char pad[9];
    char flag;
};

struct Tree {
    char pad0[4];
    Node* root;
    Node* find(int* key);
};

Node* Tree::find(int* key)
{
    Node* n = root;
    Node* c = n->right;
    Node* result = n;
    if (c->flag != 0)
        return result;
    do {
        int k = *key;
        if (c->key < k)
            goto next;
        if (c->key > k)
            goto take;
        if (c->x == *(float*)((char*)key + 4))
            goto take;
        if (c->x != *(float*)((char*)key + 4))
            goto next;
        if (c->y == *(float*)((char*)key + 8))
            goto next;
    take:
        result = c;
        c = c->left;
        goto check;
    next:
        c = c->right;
    check:
        ;
    } while (c->flag == 0);
    return result;
}
