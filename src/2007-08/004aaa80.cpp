// from server: 19% by colin
// roc 2007-08 004aaa80  unit: RBX::Network::Peer  size: 691 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004aaa80

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char  color;
    char  isnil;
    char  pad[2];
};

struct Tree {
    Node* header;
    int   count;
};

struct Peer {
    char  pad0[4];
    Tree* tree;
    int   count;
    void  erase(Node*);
    void  rotate_left(Node*);
    void  rotate_right(Node*);
    void  destroy(Node*);
};

extern "C" {
    void* __stdcall sub_77e698(const char*);
    void  __stdcall sub_4024c0(void*, void*);
    void  __stdcall sub_630b9e(void*, void*);
    void  __stdcall sub_4a5190(void*);
    Node* __stdcall sub_727150(Node*);
    Node* __stdcall sub_727170(Node*);
    void  __stdcall sub_4a6aa0(void*);
    void  __stdcall sub_62fc62(void*);
    void  __stdcall sub_4a6b30(void*, Node*);
    void  __stdcall sub_4a5080(void*, Node*);
}

void Peer::erase(Node* z)
{
    Node* y;
    Node* tmp;
    char  c;

    if (z->isnil) {
        sub_77e698("invalid map/set<T> iterator");
        sub_4024c0(0, 0);
        sub_630b9e(0, 0);
    }

    sub_4a5190(&z);

    if (z->left->isnil) {
        y = z->right;
    } else if (z->right->isnil) {
        y = z->left;
    } else {
        y = z->right;
        while (!y->left->isnil)
            y = y->left;
    }

    if (!y->isnil)
        y->parent = z->parent;

    if (this->tree->header->parent == z)
        this->tree->header->parent = y;
    else if (z->parent->left == z)
        z->parent->left = y;
    else
        z->parent->right = y;

    if (this->tree->header->left == z)
        this->tree->header->left = y->isnil ? z->parent : sub_727150(y);
    if (this->tree->header->right == z)
        this->tree->header->right = y->isnil ? z->parent : sub_727170(y);

    if (y != z) {
        if (y->parent == z) {
            y->parent = z->parent;
            y->left = z->left;
            y->right = z->right;
            z->left->parent = y;
            z->right->parent = y;
        } else {
            Node* yp = y->parent;
            yp->left = y->right;
            if (!y->right->isnil)
                y->right->parent = yp;
            y->right = z->right;
            z->right->parent = y;
            y->left = z->left;
            z->left->parent = y;
            y->parent = z->parent;
        }
        if (this->tree->header->parent == z)
            this->tree->header->parent = y;
        else if (z->parent->left == z)
            z->parent->left = y;
        else
            z->parent->right = y;
        c = z->color;
        z->color = y->color;
        y->color = c;
    }

    if (z->color == 1) {
        while (y != this->tree->header->parent && y->color == 1) {
            if (y == y->parent->left) {
                Node* w = y->parent->right;
                if (w->color == 0) {
                    w->color = 1;
                    y->parent->color = 0;
                    this->rotate_left(y->parent);
                    w = y->parent->right;
                }
                if (w->isnil) {
                    y = y->parent;
                } else if (w->left->color == 1 && w->right->color == 1) {
                    w->color = 0;
                    y = y->parent;
                } else {
                    if (w->right->color == 1) {
                        w->left->color = 1;
                        w->color = 0;
                        this->rotate_right(w);
                        w = y->parent->right;
                    }
                    w->color = y->parent->color;
                    y->parent->color = 1;
                    w->right->color = 1;
                    this->rotate_left(y->parent);
                    y = this->tree->header->parent;
                }
            } else {
                Node* w = y->parent->left;
                if (w->color == 0) {
                    w->color = 1;
                    y->parent->color = 0;
                    this->rotate_right(y->parent);
                    w = y->parent->left;
                }
                if (w->isnil) {
                    y = y->parent;
                } else if (w->right->color == 1 && w->left->color == 1) {
                    w->color = 0;
                    y = y->parent;
                } else {
                    if (w->left->color == 1) {
                        w->right->color = 1;
                        w->color = 0;
                        this->rotate_left(w);
                        w = y->parent->left;
                    }
                    w->color = y->parent->color;
                    y->parent->color = 1;
                    w->left->color = 1;
                    this->rotate_right(y->parent);
                    y = this->tree->header->parent;
                }
            }
        }
        y->color = 1;
    }

    sub_4a6aa0(&z->color);
    sub_62fc62(z);
    if (this->count > 0)
        this->count--;
}
