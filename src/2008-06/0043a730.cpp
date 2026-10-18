// from server: 64% by colin
void* __cdecl operator new(unsigned int);
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);

struct RefCounted
{
    void* value;
    RefCounted& operator=(const RefCounted&);
    ~RefCounted();
};

struct Inner
{
    virtual float getValue(void*);
};

struct Holder
{
    char pad[0x18];
    Inner* inner;
};

struct S
{
    char pad0[0x128];
    void* field128;
    Holder* field12c;

    float method(void* arg);
};

float S::method(void* arg)
{
    void* obj = *(void**)((char*)field128 + 0x198);

    RefCounted ref;
    ref.value = 0;
    *(void**)&ref = operator new(0x14);
    *(void**)&ref = obj;

    void* p = *(void**)&ref;
    if (p != 0)
        p = (char*)p + 0x14;
    else
        p = 0;

    Holder* h = field12c;
    Inner* in = h->inner;
    float result = in->getValue(p);

    _InterlockedExchangeAdd((volatile long*)&ref, -1);

    return result;
}
