// from server: 84% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Mutex {
    void* handle;
    char kind;
    void lock();
    void unlock();
};

struct Guard {
    Mutex* volatile mutex;
    bool locked;

    Guard(Mutex* p) : mutex(p), locked(false) {
        p->lock();
        locked = true;
    }

    ~Guard() {
        if (locked)
            mutex->unlock();
    }
};

struct Item {
    virtual void reserved();
    virtual void update(double);
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    Item* item;
};

struct Tree {
    char padding[24];
    Node* head;
};

struct Proxy {
    Tree* tree;
};

struct Iterator {
    Proxy* owner;
    Node* node;
    void advance();
};

struct S {
    char padding0[0x280];
    Mutex mutex;
    Proxy* tree;
    char padding1[0x14];
    Node* head;

    void f(double);
};

void S::f(double value) {
    __declspec(align(64)) char alignment;
    Guard guard(&mutex);
    Iterator it;
    it.node = head->left;
    it.owner = tree;

    for (;;) {
        Node* end = head;
        Proxy* current = tree;
        Tree* owner = reinterpret_cast<Tree*>(it.owner);

        if (!owner || reinterpret_cast<Proxy*>(owner) != current)
            _invalid_parameter_noinfo();

        if (it.node == end)
            break;

        if (!owner)
            _invalid_parameter_noinfo();
        else
            owner = *reinterpret_cast<Tree**>(owner);

        if (it.node == owner->head)
            _invalid_parameter_noinfo();

        it.node->item->update(value);
        it.advance();
    }
}
