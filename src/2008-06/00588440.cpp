// from server: 62% by king_originala
struct Node {
    Node* left;
};

struct Iterator {
    Node* tree;
    Node* node;

    Iterator(Node* t, Node* n) : tree(t), node(n) {}
};

struct Receiver {
    void setValue(int value);
};

struct S {
    int unused0;
    Receiver* receiver;
    int unused8;
    int mode;
    int value;
    int unused20;
    Node* tree;
    int unused28[5];
    Node* end;

    void clear();
};

extern void __cdecl destroyNode(Node*);
extern Iterator __cdecl eraseRange(
    Iterator first, Iterator last,
    void (__cdecl *callback)(Node*), S* owner);

void S::clear()
{
    switch (mode) {
    case 1:
        {
            Iterator last(tree, end);
            Iterator first(last);
            first.node = first.node->left;
            eraseRange(first, last, destroyNode, this);
            receiver->setValue(value);
        }
        break;

    case 2:
        {
            Iterator last(tree, end);
            Iterator first(last);
            first.node = first.node->left;
            eraseRange(first, last, destroyNode, this);
        }
        break;

    case 3:
        receiver->setValue(0);
        break;
    }
}
