// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__stdcall* _invalid_parameter_noinfo)();

struct S;

struct Object {
    void setOwner(S*);
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    Control* control;
    Handle& operator=(const Handle&);
    ~Handle();
};

inline Handle::~Handle()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Pair {
    Object* object;
    Handle handle;
};

extern Pair __cdecl createObject();
extern void __cdecl registerType(void (__cdecl*)(), const char*);
extern void __cdecl typeCallback();
extern const char typeName[];
extern void* __cdecl getIndex();

struct S {
    char padding[0x19c];
    Pair* begin;
    Pair* end;

    Object* findObject();
    Object* f();
};

Object* S::f()
{
    Object* existing = findObject();
    if (existing)
        return existing;

    Pair value = createObject();
    Object* result = value.object;

    registerType(typeCallback, typeName);
    unsigned index = reinterpret_cast<unsigned>(getIndex());

    if (index >= static_cast<unsigned>(end - begin))
        _invalid_parameter_noinfo();

    Pair* slot = begin + index;
    slot->object = value.object;
    slot->handle = value.handle;

    result->setOwner(this);
    return result;
}
