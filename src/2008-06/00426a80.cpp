// from server: 91% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Mutex {
    unsigned char storage[0x1c];
    void lock();
    void unlock();
};

struct Event {
    unsigned char storage[0x70];
    void notify(unsigned int);
};

struct Node;

struct NodeVTable {
    void* reserved[2];
    void (__thiscall *update)(Node*);
};

struct Node {
    NodeVTable* vtable;
    unsigned char padding04[8];
    Node* value;
    unsigned char padding10[8];
    Node* sentinel;
    unsigned char padding1c[0x60];
    unsigned int state;

    void prepare();
    void select();
    void finish();
};

struct Container {
    Node* sentinel;
};

struct FlagGuard {
    bool& flag;
    bool previous;

    FlagGuard(bool&, bool);
    ~FlagGuard();
};

__forceinline FlagGuard::FlagGuard(bool& p, bool value)
    : flag(p)
{
    previous = p;
    p = value;
}

__forceinline FlagGuard::~FlagGuard()
{
    flag = previous;
}

struct LockGuard {
    Mutex* mutex;
    bool locked;

    LockGuard(Mutex*);
    ~LockGuard();
};

__forceinline LockGuard::LockGuard(Mutex* p)
    : mutex(p)
{
    mutex->lock();
    locked = true;
}

__forceinline LockGuard::~LockGuard()
{
    if (locked)
        mutex->unlock();
}

struct SelectionTree;

struct SelectionTreeVTable {
    void* reserved[0x58];
    void (__thiscall *apply)(SelectionTree*, Node*);
};

struct SelectionTree {
    SelectionTreeVTable* vtable;
    unsigned char padding04[0x50];
    Event event;
    Mutex mutex;
    bool flag0;
    bool flag1;
    unsigned char paddinge2[0x22];
    Container* container;
    unsigned char padding108[0x14];
    Node** entries;
    unsigned int count;

    void refresh();
    void process(unsigned int argument);
};

void SelectionTree::process(unsigned int argument)
{
    Node* selected = 0;

    mutex.lock();
    if (count > 0) {
        Node* entry = entries[0];
        Container* owner = container;
        void (__cdecl *invalid)() = _invalid_parameter_noinfo;
        if (!owner)
            invalid();
        Node* sentinel = owner ? owner->sentinel : 0;
        if (entry == sentinel->sentinel)
            invalid();
        selected = entry->value;
    }
    mutex.unlock();

    if (selected) {
        FlagGuard outer(flag1, true);
        selected->prepare();
        selected->vtable->update(selected);
        {
            FlagGuard inner(flag0, true);
            selected->select();
        }
        selected->finish();
        {
            LockGuard lock(&mutex);
            if (selected->state == 0)
                vtable->apply(this, selected);
        }
    }

    refresh();
    event.notify(argument);
}
