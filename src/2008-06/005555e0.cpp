// from server: 82% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Mutex {
    void* handle;
    char kind;
    void lock();
    void unlock();
};

struct Lock {
    Mutex* mutex;
    bool owned;
    Lock(Mutex& m) : mutex(&m), owned(false) {
        mutex->lock();
        owned = true;
    }
    ~Lock() {
        if (owned)
            mutex->unlock();
    }
};

struct Event {
    void signal();
};

struct Tree;

struct Proxy {
    Tree* tree;
};

struct Node {
    char padding[16];
    unsigned char nil;
};

struct Value {
    char padding[4];
    bool cancelled;
};

struct Iterator {
    Proxy* owner;
    Node* node;
    Value& value();
};

struct Tree {
    Proxy* proxy;
    char padding[20];
    Node* end;
    char tail[4];
    Iterator find(void* const& key);
};

struct S {
    char padding0[0x24c];
    Event event;
    char padding1[0x33];
    Mutex mutex;
    Tree tree;
    unsigned int count;
    void f(void* key);
};

void S::f(void* key) {
    Lock lock(mutex);
    if (count == 0)
        return;

    Tree& t = tree;
    Iterator it = t.find(key);
    Proxy* owner = it.owner;
    Node* end = t.end;
    Proxy* proxy = t.proxy;

    if (owner == 0 || owner != proxy)
        _invalid_parameter_noinfo();

    Node* node = it.node;
    if (node != end) {
        if (owner == 0)
            _invalid_parameter_noinfo();
        else
            owner = reinterpret_cast<Proxy*>(owner->tree);

        if (node == reinterpret_cast<Tree*>(owner)->end)
            _invalid_parameter_noinfo();

        if (node->nil == 0) {
            --count;
            it.value().cancelled = true;
        }
    }

    if (count == 0)
        event.signal();
}
