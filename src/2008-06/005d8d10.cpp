// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String;
extern void (__thiscall *string_construct)(String*, const char*);
extern void (__thiscall *string_destroy)(String*);

struct String {
    unsigned char storage[28];
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
    virtual void reserved() = 0;
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
    void* object;
    Reference reference;
    ~Pair();
};

inline Pair::~Pair() {
    Control* p = reference.control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

extern Pair __cdecl obtain(char*);

struct Parent {
    char* find(const String&);
};

struct S {
    unsigned char padding0[0x104];
    Parent* parent;
    unsigned char padding1[0xfc];
    void* cached;
    Reference reference;
    void* get();
};

void* S::get() {
    if (!cached && parent) {
        String name("Right Leg");
        char* found = parent->find(name);
        const Pair& result = obtain(found ? found + 0xe4 : 0);
        cached = result.object;
        reference = result.reference;
    }
    return cached;
}
