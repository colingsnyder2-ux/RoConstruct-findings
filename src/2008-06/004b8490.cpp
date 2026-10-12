// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Reference {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Reference* reference;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    if (reference) {
        Reference* p = reference;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct Settings {
    char padding[0x131];
    unsigned char enabled;
};

struct Iterator {
    void* owner;
    unsigned int index;
    int* dereference();
};

struct Queue {
    void* owner;
    char padding[20];
    unsigned int first;
    unsigned int count;
    void advance();
};

struct Address {
    const char* text(int);
};

struct Signal {
    void invoke(int*);
};

struct Entry {
    char padding[16];
    Signal signal;
};

struct Registry {
    Entry* find(int);
};

extern Registry registry;
extern "C" void __cdecl readMarker(int, int*);
extern "C" Settings* __cdecl settings();
extern "C" Shared __cdecl getLogger();
extern "C" void __cdecl logMessage(void*, int, const char*, int, const char*);
extern "C" void (__cdecl *invalidParameter)();

struct S {
    char padding[0x2cdc];
    Queue queue;
    char gap[0x58];
    Address address;
    void f(int);
};

void S::f(int argument)
{
    int marker;
    readMarker(argument, &marker);

    if (settings()->enabled) {
        Shared logger = getLogger();
        void* object = logger.object;
        logMessage(object, 1, "Received marker %d from %s",
                   marker, address.text(1));
    }

    Queue* q = &queue;
    unsigned int first = q->first;
    if (first > first + q->count)
        invalidParameter();

    Iterator iterator;
    iterator.owner = q->owner;
    iterator.index = first;
    Entry* entry = registry.find(*iterator.dereference());
    if (entry)
        entry->signal.invoke(&argument);

    q->advance();
}
