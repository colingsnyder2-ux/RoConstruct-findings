// from server: 96% by king_originala
struct Node {
    unsigned char padding0[4];
    char* data;
    unsigned char padding1[180];
    Node* parent;
};

struct S {
    void* find(const char*);
    void* search(Node*, bool);
};

void* S::search(Node* node, bool recursive)
{
    void* result = find(node->data + 4);
    if (result)
        return result;

    if (recursive && node->parent)
        return search(node->parent, true);

    return 0;
}
