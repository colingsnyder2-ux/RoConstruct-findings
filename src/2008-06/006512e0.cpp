// from server: 74% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

struct Control {
    virtual void dispose();
    virtual void destroy();
    volatile long references;
    volatile long weakReferences;
};

struct Entry {
    char padding[0x17c];
    bool enabled;
    void* find(const String&);
};

struct Pair {
    Entry* object;
    Control* control;
};

struct Collection {
    char padding[12];
    Pair* first;
    Pair* last;
    Pair& operator[](unsigned int);
};

struct Shared {
    Collection* object;
    Control* control;

    ~Shared() {
        Control* p = control;
        if (p) {
            if (_InterlockedExchangeAdd(&p->references, -1) == 1) {
                p->dispose();
                if (_InterlockedExchangeAdd(&p->weakReferences, -1) == 1)
                    p->destroy();
            }
        }
    }
};

struct Owner {
    Shared get();
};

struct S {
    char padding[0x150];
    Owner* owner;
    int f();
};

int S::f()
{
    int result = 0;
    bool hasStats = false;
    bool hasDisabled = false;

    if (owner) {
        {
            Shared objects = owner->get();
            Collection* collection = objects.object;
            unsigned int count = (unsigned int)((reinterpret_cast<char*>(collection->last) -
                                                 reinterpret_cast<char*>(collection->first)) >> 3);
            for (unsigned int i = 0; i < count; ++i) {
                Entry* entry = collection->operator[](i).object;
                void* found;
                {
                    String name("leaderstats");
                    found = entry->find(name);
                }
                if (found)
                    hasStats = true;
                if (!entry->enabled)
                    hasDisabled = true;
            }
        }

        if (hasStats)
            result = 1;
        if (hasDisabled)
            result = 3;
        if (hasStats && hasDisabled)
            result = 2;
    }

    return result;
}
