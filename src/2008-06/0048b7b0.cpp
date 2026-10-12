// from server: 98% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


struct Control {
    void* table;
    volatile long references;

    void addReference();
};

__forceinline void Control::addReference() {
    volatile long* count =
        reinterpret_cast<volatile long*>(reinterpret_cast<char*>(this) + 4);
    _InterlockedIncrement(count);
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
