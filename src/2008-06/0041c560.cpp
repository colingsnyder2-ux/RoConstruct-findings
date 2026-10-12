// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String;
typedef void (__thiscall *StringCopy)(String*, const String&);
extern StringCopy copyString;

struct String {
    char storage[28];
    String(const String&);
    ~String();
};

inline String::String(const String& other)
{
    copyString(this, other);
}

struct Control {
    long reserved;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* count = &control->references;
        _InterlockedExchangeAdd(count, 1);
    }
}

struct Value {
    const String& text();
    const Shared& pointer();
};

struct Base1 {};
struct Base2 {};

struct __multiple_inheritance Object : Base1, Base2 {
};

typedef void (Object::*Callback)(Shared, String, String);

struct S {
    char reserved[56];
    Callback callback;

    void f(Object*, void*, Value*, Value*, Value*);
};

void S::f(Object* object, void*, Value* first, Value* second, Value* third)
{
    (object->*callback)(first->pointer(), second->text(), third->text());
}
