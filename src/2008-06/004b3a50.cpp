// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" __declspec(dllimport) void __cdecl _invalid_parameter_noinfo();

struct S;

struct Control
{
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long references;
    volatile long weakReferences;
};

struct Reference
{
    Control* control;
    Reference& operator=(const Reference& other);
    __forceinline ~Reference();
};

__forceinline Reference::~Reference()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedDecrement(&p->references) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weakReferences) == 0)
                p->destroy();
        }
    }
}

struct Object
{
    void attach(S* owner);
};

struct Pair
{
    Object* object;
    Reference reference;
};

extern Pair __cdecl create_pair();
extern void __cdecl callback();
extern char global_data;
extern void __cdecl register_callback(void (__cdecl*)(), void*);
extern void* __cdecl get_index();

struct S
{
    char padding[0x19c];
    Pair* first;
    Pair* last;

    Object* find();
    Object* func_004b3a50();
};

Object* S::func_004b3a50()
{
    Object* result = find();
    if (result)
        return result;

    Pair value = create_pair();
    result = value.object;
    register_callback(callback, &global_data);

    unsigned int index = reinterpret_cast<unsigned int>(get_index());
    if (index >= static_cast<unsigned int>(last - first))
        _invalid_parameter_noinfo();

    Pair& slot = first[index];
    slot.object = value.object;
    slot.reference = value.reference;
    result->attach(this);
    return result;
}
