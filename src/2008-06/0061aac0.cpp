// from server: 85% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    char* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) - 1 == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) - 1 == 0)
            p->destroy();
    }
}

struct String {
    unsigned long reserved;
    union {
        char local[16];
        char* heap;
    } storage;
    unsigned long length;
    unsigned long capacity;
    ~String();
};

struct Error {
    char data[40];
    Error(const String&);
    Error(const Error&);
    ~Error();
};

struct Result {
    void* object;
    Control* control;
    ~Result();
};

extern Shared __cdecl acquire(void*, int);
extern String __cdecl format(const char*, ...);
extern Result __cdecl assign(void*);
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

Result __cdecl reconstruct(void* source, int index)
{
    Shared value = acquire(source, index);
    char* p = value.object;
    char* instance;

    if (p) {
        if (!__RTDynamicCast(p, 0, (void*)0x9291fc,
                            (void*)0x92907c, 0)) {
            p = *(char**)(p + 8);
            String* name = (String*)(*(char**)(p + 4) + 4);
            throw Error(format("Object %s is not an Instance",
                               name->capacity >= 16
                                   ? name->storage.heap
                                   : name->storage.local));
        }
        instance = p - 20;
    } else {
        instance = 0;
    }

    return assign(instance);
}
