// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    void* table;
    volatile long references;

    void addReference();
};

__forceinline void Control::addReference() {
    volatile long* count =
        reinterpret_cast<volatile long*>(reinterpret_cast<char*>(this) + 4);
    _InterlockedExchangeAdd(count, 1);
}

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control) {
    if (control)
        control->addReference();
}

Shared::~Shared() {
}

struct Arguments {
    volatile int* value;
    Shared* object;
};

typedef void (__cdecl *Callback)(Shared, Shared, int, Shared);

struct S {
    Shared first;
    Shared second;

    void invoke(void*, Callback*, Arguments*, void*);
};

void S::invoke(void*, Callback* callback, Arguments* arguments, void*) {
    (*callback)(first, second, *arguments->value, *arguments->object);
}
