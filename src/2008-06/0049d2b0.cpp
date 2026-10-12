// from server: 81% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String;
extern String* (__thiscall *string_copy)(String*, const String&);
extern void (__thiscall *string_destroy)(String*);

struct String {
    unsigned char data[28];
    __forceinline String(const String&);
    __forceinline ~String();
};

__forceinline String::String(const String& other) {
    string_copy(this, other);
}

__forceinline String::~String() {
    string_destroy(this);
}

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    __forceinline Shared(const Shared&);
    __forceinline ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

__forceinline Shared::~Shared() {
    Control* p = control;
    if (p) {
        volatile long* count = &p->strong;
        if (_InterlockedExchangeAdd(count, -1) - 1 == 0) {
            p->dispose();
            count = &p->weak;
            if (_InterlockedExchangeAdd(count, -1) - 1 == 0)
                p->destroy();
        }
    }
}

struct Event {
    void invoke(void**, String, Shared);
};

struct Target {
    unsigned char padding[16];
    Event event;
};

struct S {
    Target* resolve(void*);
    void f(void*, String, Shared);
};

void S::f(void* argument, String text, Shared owner) {
    Target* target = resolve(argument);
    if (target)
        target->event.invoke(&argument, text, owner);
}
