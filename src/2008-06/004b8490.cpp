// from server: 86% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCount {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Log {
    void __cdecl report(int, const char*, ...);
};

struct Shared {
    Log* pointer;
    RefCount* count;
    Log* operator->() const;
    ~Shared();
};

inline Log* Shared::operator->() const
{
    return pointer;
}

inline Shared::~Shared()
{
    if (count) {
        RefCount* p = count;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct Settings {
    char padding[0x131];
    unsigned char logging;
};

extern void __cdecl readMarker(void*, int*);
extern Settings* __cdecl settings();
extern Shared __cdecl logger();
extern const char markerFormat[];

struct Address {
    const char* text(int);
};

struct Iterator {
    void* owner;
    unsigned int position;
    void** value();
};

struct Queue {
    void* owner;
    char padding[0x14];
    unsigned int position;
    unsigned int size;
    void advance();
};

struct Signal {
    void notify(void**);
};

struct Entry {
    char padding[0x10];
    Signal signal;
};

struct Registry {
    Entry* find(void*);
};

extern Registry registry;

struct S {
    char padding[0x2cdc];
    Queue queue;
    char gap[0x58];
    Address address;
    void f(void*);
};

void S::f(void* argument)
{
    int marker;
    readMarker(argument, &marker);

    if (settings()->logging)
        logger()->report(1, markerFormat, marker, address.text(1));

    Queue* q = &queue;
    unsigned int position = q->position;
    if (position > position + q->size)
        _invalid_parameter_noinfo();

    Iterator iterator;
    iterator.owner = q->owner;
    iterator.position = position;

    Entry* entry = registry.find(*iterator.value());
    if (entry)
        entry->signal.notify(&argument);

    q->advance();
}
