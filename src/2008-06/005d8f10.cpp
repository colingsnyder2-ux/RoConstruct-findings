// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String;
extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    String(const char* text) { stringConstruct(this, text); }
    ~String() { stringDestroy(this); }
};

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
    void* object;
    Reference reference;

    ~Pair() {
        Control* p = reference.control;
        if (p) {
            if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
                p->dispose();
                if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                    p->destroy();
            }
        }
    }

    Pair& operator=(const Pair& other) {
        object = other.object;
        reference = other.reference;
        return *this;
    }
};

struct Parent {
    char* find(const String&);
};

Pair __cdecl makePair(void*);

struct S {
    char padding0[0x104];
    Parent* parent;
    char padding1[0x104];
    Pair cached;

    void* f();
};

void* S::f() {
    if (!cached.object && parent) {
        String name("Right Arm");
        char* found = parent->find(name);
        cached = makePair(found ? found + 0xe4 : 0);
    }
    return cached.object;
}
