// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String;
extern void (__thiscall *stringCopy)(String*, const String*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    unsigned char data[28];
    String(const String&);
    ~String();
};

inline String::String(const String& other) {
    stringCopy(this, &other);
}

inline String::~String() {
    stringDestroy(this);
}

struct Control;

struct ControlTable {
    void* reserved;
    void (__thiscall *dispose)(Control*);
    void (__thiscall *destroy)(Control*);
};

struct Control {
    ControlTable* table;
    volatile long strong;
    volatile long weak;
    void release();
};

inline void Control::release() {
    if (_InterlockedExchangeAdd(&strong, -1) == 0) {
        table->dispose(this);
        if (_InterlockedExchangeAdd(&weak, -1) == 0)
            table->destroy(this);
    }
}

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared() {
    if (control)
        control->release();
}

struct S {
    void (__thiscall *function)(void*, Shared, int, String);
    int adjustment;
    void f(const volatile int*, Shared, int, String);
};

void S::f(const volatile int* base, Shared value, int argument, String text) {
    function((char*)*base + adjustment, value, argument, text);
}
