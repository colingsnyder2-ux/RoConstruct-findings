// from server: 75% by king_originala
struct Node {
    char padding[0x104];
    Node* parent;
    bool f(Node* node);
};

extern Node* __cdecl getCharacter(Node* node);

struct S {
    char padding[0x2c70];
    Node* root;
    bool f(Node* node);
};

bool S::f(Node* node)
{
    Node* target = root;
    Node* parent = node->parent;
    if (target == parent || (parent && parent->f(target)))
        return true;
    return node == getCharacter(node);
}
