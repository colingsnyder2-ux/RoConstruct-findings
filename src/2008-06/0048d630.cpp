// from server: 15% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
};

struct RefCounted
{
    Control* control;
    volatile long refCount;
};

struct Descriptor
{
    void* vtable;
    volatile long refCount;
    void* field8;
    void* fieldC;
    void* field10;
};

struct Holder
{
    Descriptor* ptr;
};

extern "C" void __cdecl sub_48CC00(void*, void*);
extern "C" void __cdecl sub_48D0F0(void*, void*, void*, void*, void*);
extern "C" void __cdecl invalid_parameter_noinfo();

void __cdecl sub_48D630(Holder* out, void* a, void* b, void* c)
{
    Descriptor* d = out->ptr;
    Descriptor* e = (Descriptor*)a;
    Descriptor* f = (Descriptor*)b;
    Descriptor* g = (Descriptor*)c;

    if (d->fieldC > d->field10)
        invalid_parameter_noinfo();
    void* v1 = d->vtable;
    void* v2 = d->fieldC;
    if (e->fieldC > e->field10)
        invalid_parameter_noinfo();
    void* v3 = e->vtable;
    void* v4 = e->fieldC;

    sub_48D0F0(out, v1, v2, v3, v4);

    Descriptor* h = out->ptr;
    if (h)
    {
        if (_InterlockedExchangeAdd(&h->refCount, -1) == 1)
        {
            h->vtable;
            ((void (__thiscall*)(Descriptor*))((void**)h->vtable)[1])(h);
            if (_InterlockedExchangeAdd((volatile long*)((char*)h + 8), -1) == 1)
            {
                ((void (__thiscall*)(Descriptor*))((void**)h->vtable)[2])(h);
            }
        }
    }

    Descriptor* i = (Descriptor*)a;
    if (i)
    {
        if (_InterlockedExchangeAdd(&i->refCount, -1) == 1)
        {
            ((void (__thiscall*)(Descriptor*))((void**)i->vtable)[1])(i);
            if (_InterlockedExchangeAdd((volatile long*)((char*)i + 8), -1) == 1)
            {
                ((void (__thiscall*)(Descriptor*))((void**)i->vtable)[2])(i);
            }
        }
    }

    Descriptor* j = (Descriptor*)b;
    if (j)
    {
        if (_InterlockedExchangeAdd(&j->refCount, -1) == 1)
        {
            ((void (__thiscall*)(Descriptor*))((void**)j->vtable)[1])(j);
            if (_InterlockedExchangeAdd((volatile long*)((char*)j + 8), -1) == 1)
            {
                ((void (__thiscall*)(Descriptor*))((void**)j->vtable)[2])(j);
            }
        }
    }
}
