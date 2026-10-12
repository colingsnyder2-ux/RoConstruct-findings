// from server: 75% by king_originala
struct Node {
    Node *left;
    Node *parent;
    Node *right;
};

struct FirstTree {
    unsigned char padding[24];
    Node *head;
    unsigned int count;

    void erase(Node *);
};

struct Tree {
    void *owner;
    unsigned char padding[20];
    Node *head;
    unsigned int count;

    void erase(Node *);
};

void __cdecl visitNode(Node *);
void __cdecl visitRange(void *, Node *, void *, Node *,
                        void (__cdecl *)(Node *));
extern "C" void * __stdcall resolveHandle(void *);
void __cdecl releaseHandle(void *);

struct SoundChannel {
    unsigned char padding0[0x134];
    void *handle;
    unsigned char padding1[4];
    FirstTree first;
    unsigned char padding2[0x24];
    Tree second;
    Tree third;

    void reset();
    void resetState();
};

void SoundChannel::reset()
{
    FirstTree *a = &first;
    a->erase(a->head->parent);
    a->head->parent = a->head;
    a->count = 0;
    a->head->left = a->head;
    a->head->right = a->head;

    resetState();

    Tree *b = &second;
    visitRange(b->owner, b->head->left, b->owner, b->head, visitNode);

    Tree *c = &third;
    visitRange(c->owner, c->head->left, c->owner, c->head, visitNode);

    b->erase(b->head->parent);
    b->head->parent = b->head;
    b->count = 0;
    b->head->left = b->head;
    b->head->right = b->head;

    c->erase(c->head->parent);
    c->head->parent = c->head;
    c->count = 0;
    c->head->left = c->head;
    c->head->right = c->head;

    if (handle) {
        releaseHandle(resolveHandle(handle));
        handle = 0;
    }
}
