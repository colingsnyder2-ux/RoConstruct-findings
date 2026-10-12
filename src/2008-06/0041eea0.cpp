// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct S;

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Reference
{
    Control* control;
    Reference& operator=(const Reference&);
};

struct Object
{
    void attach(S*);
};

struct Pair
{
    Object* object;
    Reference reference;
    ~Pair();
};

Pair create_pair();
unsigned int func_0041e050();
extern int registration_data;
void registration_callback();
void register_callback(void (__cdecl*)(), int*);
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct S
{
    char padding[0x19c];
    Pair* first;
    Pair* last;

    Object* lookup();
    Object* f();
};

__forceinline Pair::~Pair()
{
    Control* p = reference.control;
    if (p)
    {
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

Object* S::f()
{
    Object* result = lookup();
    if (result)
        return result;

    Pair value = create_pair();
    result = value.object;
    register_callback(registration_callback, &registration_data);

    unsigned int index = func_0041e050();
    if (index >= static_cast<unsigned int>(last - first))
        _invalid_parameter_noinfo();

    Pair* slot = first + index;
    slot->object = value.object;
    slot->reference = value.reference;
    result->attach(this);
    return result;
}
