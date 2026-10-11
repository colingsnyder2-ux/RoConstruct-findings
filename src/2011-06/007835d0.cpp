// from server: 19% by atomic.potato
// roc 2011-06 007835d0  unit: RBX::Tasks::VExclusive::?$sp_counted_impl_p  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007835d0

extern "C" void __stdcall sub_80b0ac(void*, void*);
extern "C" void __stdcall sub_922fa0(void*, void*);
extern "C" void __stdcall sub_929830(void*, void*);

extern "C" void* __cdecl sub_7834f0(void*, void*, void*, void*, void*);

struct Node {
    Node* parent;
    Node* left;
    Node* right;
    char  color;
    char  pad[3];
    char  isnil;
    char  pad2[3];
};

struct Tree {
    Node* header;
    int   count;
};

struct S {
    char  pad0[4];
    Tree* tree;
    int   field8;
    void  insert_unique(void* a, void* b, void* c, void* d);
};

void S::insert_unique(void* a, void* b, void* c, void* d)
{
    if (this->field8 >= 0x5d1745c)
    {
        void* p1 = (void*)0xa5b63c;
        void* p2 = (void*)0xa5b5c0;
        void* p3 = (void*)0xa5b5cc;
        void* p4 = (void*)0xb87370;
        sub_80b0ac(&p1, &p2);
        sub_80b0ac(&p3, &p4);
    }

    Tree* t = this->tree;
    Node* hint = (Node*)a;
    Node* result = (Node*)sub_7834f0(t->header, hint, b, c, d);
    Node* node = result;

    this->field8 += 1;

    if (hint == t->header)
    {
        t->header->parent = node;
        t->header->left = node;
        t->header->right = node;
    }
    else if (*(char*)&d != 0)
    {
        hint->parent = node;
        if (hint == t->header->left)
            t->header->left = node;
    }
    else
    {
        hint->right = node;
        if (hint == t->header->right)
            t->header->right = node;
    }

    Node* x = node;
    while (x->parent->color == 0)
    {
        Node* p = x->parent;
        if (p == p->parent->left)
        {
            Node* y = p->parent->right;
            if (y->color != 0)
            {
                p->color = 1;
                y->color = 1;
                p->parent->color = 0;
                x = p->parent;
            }
            else
            {
                if (x == p->right)
                {
                    x = p;
                    sub_922fa0(this, x);
                    p = x->parent;
                }
                p->color = 1;
                p->parent->color = 0;
                sub_929830(this, p->parent);
            }
        }
        else
        {
            Node* y = p->parent->left;
            if (y->color != 0)
            {
                p->color = 1;
                y->color = 1;
                p->parent->color = 0;
                x = p->parent;
            }
            else
            {
                if (x == p->left)
                {
                    x = p;
                    sub_929830(this, x);
                    p = x->parent;
                }
                p->color = 1;
                p->parent->color = 0;
                sub_922fa0(this, p->parent);
            }
        }
    }

    t->header->parent->color = 1;
    *(void**)c = node;
}
