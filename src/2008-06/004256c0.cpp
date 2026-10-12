// from server: 73% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* value;
    Control* control;

    ~Shared()
    {
        Control* p = control;
        if (p) {
            if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
                p->dispose();
                if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                    p->destroy();
            }
        }
    }
};

struct Lock {
    void acquire();
    void release();
};

struct Guard {
    Lock* lock;
    bool held;

    Guard(Lock* p) : lock(p), held(false)
    {
        lock->acquire();
        held = true;
    }

    ~Guard()
    {
        if (held)
            lock->release();
    }
};

struct Entry {
    char padding[16];
    char value;
};

struct Container;

struct Iterator {
    Container* owner;
    Entry* entry;
};

struct Container {
    Container* owner;
    char padding[20];
    Entry* end;
    char tail[4];

    Iterator find(void* const* key);
};

struct Collection {
    Iterator insert(const void* value);
};

struct Index {
    void erase(void* const* key);
};

struct Selection {
    void erase(const Shared* value);
};

struct Parent;
typedef void (__thiscall* Notify)(Parent*, void*);

struct Parent {
    Notify* table;
    char padding[148];
    Index index;
    char gap[43];
    Lock lock;
};

struct Node {
    char padding[12];
    Container entries;
    Collection collection;
    char gap[35];
    Parent* parent;
    char gap2[4];
    Selection selection;

    void update(Shared value, int unused);
};

void Node::update(Shared value, int unused)
{
    {
        Guard guard(&parent->lock);

        void* key = value.value;
        parent->index.erase(&key);

        key = value.value;
        Iterator position = entries.find(&key);
        Entry* end = entries.end;
        Container* owner = position.owner;

        if (!owner || owner != entries.owner)
            invalid_parameter_noinfo();

        if (position.entry != end) {
            if (!owner)
                invalid_parameter_noinfo();
            else
                owner = owner->owner;

            if (position.entry == owner->end)
                invalid_parameter_noinfo();

            collection.insert(&position.entry->value);
        }

        selection.erase(&value);
    }

    parent->table[87](parent, reinterpret_cast<char*>(this) - 8);
}
