// from server: 24% by colin
struct Node {
    Node* parent;
    Node* left;
    Node* right;
    char color;
    char pad[3];
    char isNil;
    char pad2[3];
};

struct Tree {
    Node* header;
    int count;
    int field8;
};

struct ScoreHud {
    char pad[4];
    Tree* tree;
    int field8;
    void erase(Node* node);
};

extern "C" {
    void* __stdcall sub_77e698(const char*);
    void __stdcall sub_77e6f8(void*);
    void __stdcall sub_77e69c(void*, void*);
    void __stdcall sub_77e6d8(void);
}

void __stdcall sub_630b9e(void*, void*);
void __stdcall sub_62fc62(void*);
void __stdcall sub_61e120(void*);

Node* __stdcall sub_587a40(Node*);
Node* __stdcall sub_4d95d0(Node*);
void __stdcall sub_587a60(Node*);
void __stdcall sub_587f60(Node*);
void __stdcall sub_587ae0(Tree*);

void ScoreHud::erase(Node* node)
{
    Node* header = tree->header;
    Node* nil = header;
    Node* y;
    Node* x;

    if (node->left->isNil)
        y = node->right;
    else if (node->right->isNil)
        y = node->left;
    else {
        Node* n = node->right;
        while (!n->left->isNil)
            n = n->left;
        y = n;
    }

    if (y->left->isNil)
        x = y->right;
    else
        x = y->left;

    if (!x->isNil)
        x->parent = y->parent;

    if (y->parent == header)
        header->parent = x;
    else if (y == y->parent->left)
        y->parent->left = x;
    else
        y->parent->right = x;

    if (y != node) {
        if (node->parent == header)
            header->parent = y;
        else if (node == node->parent->left)
            node->parent->left = y;
        else
            node->parent->right = y;

        y->left = node->left;
        y->right = node->right;
        y->parent = node->parent;
        y->color = node->color;
        node->color = 0;
    }

    if (y->color == 0) {
        while (x != header->parent && x->color == 0) {
            if (x == x->parent->left) {
                Node* w = x->parent->right;
                if (w->color == 1) {
                    w->color = 0;
                    x->parent->color = 1;
                    sub_587f60(x->parent);
                    w = x->parent->right;
                }
                if (w->left->color == 0 && w->right->color == 0) {
                    w->color = 1;
                    x = x->parent;
                } else {
                    if (w->right->color == 0) {
                        w->left->color = 1;
                        w->color = 0;
                        sub_587a60(w);
                        w = x->parent->right;
                    }
                    w->color = x->parent->color;
                    x->parent->color = 0;
                    w->right->color = 0;
                    sub_587f60(x->parent);
                    x = header->parent;
                }
            } else {
                Node* w = x->parent->left;
                if (w->color == 1) {
                    w->color = 0;
                    x->parent->color = 1;
                    sub_587a60(x->parent);
                    w = x->parent->left;
                }
                if (w->right->color == 0 && w->left->color == 0) {
                    w->color = 1;
                    x = x->parent;
                } else {
                    if (w->left->color == 0) {
                        w->right->color = 1;
                        w->color = 0;
                        sub_587f60(w);
                        w = x->parent->left;
                    }
                    w->color = x->parent->color;
                    x->parent->color = 0;
                    w->left->color = 0;
                    sub_587a60(x->parent);
                    x = header->parent;
                }
            }
        }
        x->color = 1;
    }

    sub_61e120(&tree->header);
    sub_62fc62(node);

    if (field8 > 0)
        field8--;
}
