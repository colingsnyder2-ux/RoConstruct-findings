// from server: 83% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Mutex {
    void* handle;
    char kind;
    void lock();
    void unlock();
};

struct LockGuard {
    Mutex* mutex;
    bool locked;
    LockGuard(Mutex*);
    ~LockGuard();
};

inline LockGuard::LockGuard(Mutex* p) : mutex(p) {
    mutex->lock();
    locked = true;
}

inline LockGuard::~LockGuard() {
    if (locked)
        mutex->unlock();
}

struct Task {
    virtual void invoke() = 0;
};

struct Node {
    Node* next;
    Node* previous;
    void* unused;
    Task* task;
    unsigned char pending;
};

struct Container {
    char padding[0x18];
    Node* head;
};

struct Proxy {
    Container* container;
};

struct Iterator {
    Proxy* owner;
    Node* node;
    void increment();
};

struct Event {
    void signal();
};

struct S {
    char padding0[0x24c];
    Event event;
    char padding1[0x33];
    Mutex mutex;
    Proxy* proxy;
    char padding2[0x14];
    Node* head;
    int count;
    int active;
    void f();
};

void S::f() {
    LockGuard guard(&mutex);
    if (active == 0) {
        active = count;
        if (active > 0) {
            Node* first = head;
            Proxy* p = proxy;
            Node* n = first->next;
            Iterator it;
            it.node = n;
            it.owner = p;
            for (;;) {
                Node* last = head;
                Proxy* current = proxy;
                if (!p || p != current)
                    _invalid_parameter_noinfo();
                if (n == last)
                    break;

                void (__cdecl *invalid)() = _invalid_parameter_noinfo;
                Container* container;
                if (!p) {
                    invalid();
                    container = reinterpret_cast<Container*>(p);
                } else {
                    container = p->container;
                }
                if (n == container->head)
                    invalid();
                n->task->invoke();

                if (!p) {
                    invalid();
                    container = reinterpret_cast<Container*>(p);
                } else {
                    container = p->container;
                }
                if (n == container->head)
                    invalid();
                n->pending = 0;
                it.increment();
                n = it.node;
                p = it.owner;
            }
            event.signal();
        }
    }
}
