// from server: 8% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct RefCounted
{
    void AddRef();
    void Release();
};

struct WeakRef
{
    void* ptr;
    void* control;
};

struct CComObject
{
    void Release();
    void Destroy();
    void* scalar_deleting_dtor(unsigned int flags);
};

struct UIEnumConnections_CComEnum_CComObject
{
    void Release();
    void Destroy();
    void* scalar_deleting_dtor(unsigned int flags);
};

void UIEnumConnections_CComEnum_CComObject::Release()
{
    *(void**)this = (void*)0x784ff4;
    *(int*)((char*)this + 0x18) = (int)0xc0000001;
    void* p = *(void**)0x8bae44;
    void** vtbl = *(void***)p;
    ((void(__thiscall*)(void*))vtbl[2])(p);
    Destroy();
}

void* UIEnumConnections_CComEnum_CComObject::scalar_deleting_dtor(unsigned int flags)
{
    Release();
    if (flags & 1)
    {
        extern void __cdecl op_delete(void*);
        op_delete(this);
    }
    return this;
}
