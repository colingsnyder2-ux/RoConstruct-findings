// from server: 95% by king_originala
extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);
extern "C" int __stdcall DestroyWindow(void *);

struct CriticalSection {
    unsigned char data[24];
};

struct Registry {
    void remove(void *);
};

extern CriticalSection marshalLock;
extern Registry marshalRegistry;

struct MarshalWindow {
    unsigned char reserved0[4];
    void *window;
    unsigned char reserved1[28];
    int references;
    unsigned long key;
};

struct ScopedLock {
    CriticalSection *section;
    bool locked;

    ScopedLock(CriticalSection &);
    ~ScopedLock();
};

__forceinline ScopedLock::ScopedLock(CriticalSection &value)
    : section(&value), locked(false)
{
    EnterCriticalSection(section);
    locked = true;
}

__forceinline ScopedLock::~ScopedLock()
{
    if (locked)
        LeaveCriticalSection(section);
}

void __cdecl releaseMarshalWindow(MarshalWindow *value)
{
    ScopedLock lock(marshalLock);
    if (--value->references == 0) {
        marshalRegistry.remove(&value->key);
        DestroyWindow(value->window);
    }
}
