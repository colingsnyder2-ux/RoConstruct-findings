// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct S;

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

struct Reference {
    Control* control;
    Reference& operator=(const Reference&);
    ~Reference();
};

struct Object {
    void attach(S*);
};

struct Temporary {
    Object* object;
    Reference reference;
};

struct Entry {
    Object* object;
    Reference reference;
};

struct S {
    char padding[0x19c];
    Entry* first;
    Entry* last;

    Object* existing();
    Object* f();
};

Temporary __cdecl create();
void __cdecl callback();
extern char registration;
void __cdecl register_callback(void (__cdecl*)(), void*);
unsigned __cdecl get_index();

extern "C" {
    extern void (__cdecl* _invalid_parameter_noinfo)();
}

__forceinline void Control::release()
{
    if (this && _InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

__forceinline Reference::~Reference()
{
    control->release();
}

Object* S::f()
{
    Object* result = existing();
    if (result)
        return result;

    Temporary temporary = create();
    result = temporary.object;

    register_callback(callback, &registration);

    unsigned index = get_index();
    if (index >= static_cast<unsigned>(last - first))
        _invalid_parameter_noinfo();

    Entry& entry = first[index];
    entry.object = temporary.object;
    entry.reference = temporary.reference;
    result->attach(this);

    return result;
}
