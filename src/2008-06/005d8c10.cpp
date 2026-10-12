// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void (__thiscall *string_construct)(void*, const char*);
extern void (__thiscall *string_destroy)(void*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text) {
    string_construct(this, text);
}

inline String::~String() {
    string_destroy(this);
}

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    Reference& operator=(const Reference&);
};

struct Pair {
    void* value;
    Reference reference;
    ~Pair();
};

inline Pair::~Pair() {
    Control* p = reference.control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

extern Pair __cdecl make_pair(void*);

struct Parent {
    char* find(const String&);
};

struct S {
    char padding0[0x104];
    Parent* parent;
    char padding1[0xf4];
    void* cached;
    Reference reference;
    void* f();
};

void* S::f() {
    if (!cached && parent) {
        String name("Left Leg");
        char* part = parent->find(name);
        Pair result = make_pair(part ? part + 0xe4 : 0);
        cached = result.value;
        reference = result.reference;
    }
    return cached;
}
