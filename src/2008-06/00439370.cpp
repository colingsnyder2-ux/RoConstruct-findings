// from server: 82% by king_originala
extern "C" {
    extern void (__cdecl *_invalid_parameter_noinfo)();
    extern int (__stdcall *PostMessageA)(void *, unsigned int, unsigned int, long);
}

struct Lock {
    int value;
    unsigned char flag;
    unsigned char padding[3];
    int count;
    unsigned char reserved[28];
    void acquire();
    void release();
};

struct Guard {
    Lock *lock;
    bool active;
    Guard(Lock *);
    ~Guard();
};

inline Guard::Guard(Lock *p) : lock(p), active(false)
{
    lock->acquire();
    active = true;
}

inline Guard::~Guard()
{
    if (active)
        lock->release();
}

struct Key {
    int value;
    unsigned char reserved[8];
};

struct Node {
    unsigned char reserved[16];
    int value;
};

struct Tree;

struct Proxy {
    Tree *container;
};

struct Iterator {
    Proxy *owner;
    Node *node;
};

struct Tree {
    Proxy *proxy;
    unsigned char reserved[20];
    Node *end;
    unsigned char tail[4];
    Iterator *find(Iterator *, const Key *);
};

struct Collection {
    Iterator *insert(Iterator *, const int *);
};

struct S {
    int reserved;
    Lock lock;
    Tree tree;
    unsigned char padding[32];
    bool pending;
    bool disabled;
    unsigned char alignment[2];
    Collection collection;
    void f(int, int, int);
};

void S::f(int, int key, int)
{
    Guard guard(&lock);
    if (!disabled) {
        union {
            Key lookup;
            Iterator result;
        } temporary;
        Iterator found;
        temporary.lookup.value = key;
        Tree *container = &tree;
        Iterator *p = container->find(&found, &temporary.lookup);
        Proxy *owner = p->owner;
        Node *node = p->node;
        Node *end = container->end;
        Proxy *expected = container->proxy;

        if (!owner || owner != expected)
            _invalid_parameter_noinfo();

        if (node != end) {
            if (!owner)
                _invalid_parameter_noinfo();
            else
                owner = reinterpret_cast<Proxy *>(owner->container);

            if (node == reinterpret_cast<Tree *>(owner)->end)
                _invalid_parameter_noinfo();

            collection.insert(&temporary.result, &node->value);
        }

        lock.acquire();
        if (!pending) {
            void *window = *reinterpret_cast<void **>(
                reinterpret_cast<char *>(this) - 360);
            if (window)
                PostMessageA(window, 0x465, 0, 0);
            pending = true;
        }
        lock.release();
    }
}
