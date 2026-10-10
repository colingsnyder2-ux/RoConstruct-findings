// from server: 50% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl func_00444b70(void*);
extern "C" void* __cdecl func_00442c60(void*, int, int);
extern "C" void* __cdecl func_0041f6f0(void*);

struct RefCounted
{
    void** vfptr;
    volatile long ref1;
    volatile long ref2;
};

struct CRobloxTreeCtrl
{
    char pad[0xc];
    void* field_c;
    void* method();
};

void* CRobloxTreeCtrl::method()
{
    void* local;
    func_00444b70(&local);
    void* p = func_00442c60(field_c, (int)local, 1);
    void* result;
    if (p != 0)
        result = func_0041f6f0(p);
    else
        result = 0;
    RefCounted* rc = (RefCounted*)local;
    if (rc != 0)
    {
        if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1)
        {
            ((void (__thiscall*)(RefCounted*))rc->vfptr[1])(rc);
            if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1)
                ((void (__thiscall*)(RefCounted*))rc->vfptr[2])(rc);
        }
    }
    return result;
}
