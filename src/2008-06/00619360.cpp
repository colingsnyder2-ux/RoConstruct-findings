// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct S;

struct Object {
    void attach(S*);
};

struct Control {
    virtual void slot0() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* pointer;
    ~Reference();
    void assign(Control* const&);
};

__forceinline Reference::~Reference()
{
    Control* p = pointer;
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
    Reference reference;
};

extern Pair __cdecl create();
extern void __cdecl callback();
extern char registration;
extern void __cdecl register_callback(void (__cdecl*)(), void*);
extern "C" void (__stdcall* _invalid_parameter_noinfo)();
extern void* __stdcall make_value_00618520();

struct S {
    char padding[0x19c];
    Pair* begin;
    Pair* end;
    Object* lookup();
    Object* f();
};

Object* S::f()
{
    Object* result = lookup();
    if (result)
        return result;

    Pair value = create();
    result = value.object;
    register_callback(callback, &registration);

    unsigned int index =
        reinterpret_cast<unsigned int>(make_value_00618520());
    if (index >= static_cast<unsigned int>(end - begin))
        _invalid_parameter_noinfo();

    Pair* entry = begin + index;
    entry->object = value.object;
    entry->reference.assign(value.reference.pointer);
    result->attach(this);
    return result;
}
