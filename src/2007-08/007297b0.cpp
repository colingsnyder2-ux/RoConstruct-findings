// from server: 31% by colin
// roc 2007-08 007297b0  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007297b0

extern "C" {
    int __stdcall sub_4024c0(int);
    int __stdcall sub_630b9e(int, int);
    int __stdcall sub_727190(int, int);
    int __stdcall sub_727370(int, int);
    int __stdcall sub_729710(int, int, int, int, int);
    void __stdcall sub_77e698(int);
}

struct Node {
    Node* parent;
    Node* left;
    Node* right;
    char color;
    char pad[3];
};

struct Tree {
    Node* header;
    int count;
};

struct Container {
    char pad0[0x18];
    Node* header;
    int count;
};

struct S {
    char pad0[0x18];
    Node* header;
    int count;
    int insert_unique(int* a, int* b, int c, int d, int e);
};

int S::insert_unique(int* a, int* b, int c, int d, int e)
{
    Node* header = this->header;
    int result = sub_729710((int)header, (int)a, (int)b, c, d);
    Node* newnode = (Node*)result;
    this->count++;
    Node* hdr = this->header;
    if (a == (int*)hdr) {
        hdr->right = newnode;
        hdr->left = newnode;
        hdr->parent = newnode;
    } else if (e != 0) {
        *(Node**)a = newnode;
        if (a == (int*)hdr->left) {
            hdr->left = newnode;
        }
    } else {
        ((Node*)a)->right = newnode;
        if (a == (int*)hdr->right) {
            hdr->right = newnode;
        }
    }
    Node* parent = newnode->parent;
    if (parent->color != 0) {
        return result;
    }
    Node* x = newnode;
    while (1) {
        Node* p = x->parent;
        if (p->color != 0) break;
        Node* gp = p->parent;
        if (p == gp->left) {
            Node* uncle = gp->right;
            if (uncle->color == 0) {
                p->color = 1;
                uncle->color = 1;
                gp->color = 0;
                x = gp;
            } else {
                if (x == p->right) {
                    x = p;
                    sub_727370((int)this, (int)x);
                }
                x->parent->color = 1;
                x->parent->parent->color = 0;
                sub_727190((int)this, (int)x->parent->parent);
            }
        } else {
            Node* uncle = gp->left;
            if (uncle->color == 0) {
                p->color = 1;
                uncle->color = 1;
                gp->color = 0;
                x = gp;
            } else {
                if (x == p->left) {
                    x = p;
                    sub_727190((int)this, (int)x);
                }
                x->parent->color = 1;
                x->parent->parent->color = 0;
                sub_727370((int)this, (int)x->parent->parent);
            }
        }
    }
    this->header->parent->color = 1;
    return result;
}
