// from server: 49% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted
{
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct MarshaledListener
{
    void* vptr;
    void* field4;
    void* field8;
    void assign(void* arg);
};

extern "C" void* __cdecl sub_49D670(void* out, void* in);
extern "C" void __cdecl sub_402A60(void* dst, void* src);

void MarshaledListener::assign(void* arg)
{
    void* tmp;
    sub_49D670(&tmp, arg);
    void* v = *(void**)tmp;
    field4 = v;
    sub_402A60(&field8, (char*)tmp + 4);
    RefCounted* r = (RefCounted*)tmp;
    if (r)
    {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1)
        {
            void** vt = *(void***)r;
            ((void (__thiscall*)(void*))vt[1])(r);
            if (_InterlockedExchangeAdd(&r->weakCount, -1) == 1)
            {
                void** vt2 = *(void***)r;
                ((void (__thiscall*)(void*))vt2[2])(r);
            }
        }
    }
}
