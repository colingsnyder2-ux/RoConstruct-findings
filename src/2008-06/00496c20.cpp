// from server: 99% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct String;
extern void (__thiscall *constructString)(String*);
extern void (__thiscall *const constructText)(String*, const char*);

struct String {
    char storage[28];
    String();
    String(const char*);
    ~String();
};

inline String::String() {
    constructString(this);
}

inline String::String(const char* text) {
    constructText(this, text);
}

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    Shared();
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared() : object(0), control(0) {
}

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared() {
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct S {
    String first;
    String second;
    Shared owner;
    Shared empty;
    S(const char*, Shared);
};

extern void __cdecl initialize(S*);

S::S(const char* text, Shared value)
    : first(), second(text), owner(value), empty() {
    initialize(this);
}
