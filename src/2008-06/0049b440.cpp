// from server: 98% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct String;
extern void (__thiscall *copyString)(String*, const String&);

struct String {
    unsigned char storage[28];
    String(const String&);
    ~String();
};

__forceinline String::String(const String& other)
{
    copyString(this, other);
}

struct Control {
    void* table;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* count = &control->references;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(count, 1);
    }
}

struct Source {
    const String& getString();
    const Shared& getShared();
};

struct __multiple_inheritance Object;

struct Descriptor {
    unsigned char padding[56];
    void (Object::*method)(Shared, String);

    void invoke(Object*, void*, Source*, Source*);
};

void Descriptor::invoke(Object* object, void*, Source* first, Source* second)
{
    (object->*method)(first->getShared(), second->getString());
}
