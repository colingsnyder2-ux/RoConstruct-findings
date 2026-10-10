// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl func_0049d670(void*, void*);
extern "C" void __cdecl func_00402a60(void*, void*);
extern "C" void __cdecl func_00423240(void*, void*);

struct RefCounted
{
    void* vptr;
    long refCount;
    long weakRefCount;
};

struct Holder
{
    void* ptr;
};

struct LocalBackpack
{
    char pad_000[0x120];
    char field_120[4];
    char field_124[4];
    char pad_128[8];
    char field_130[4];
    char field_134[4];
    char pad_138[8];
    void* field_140;
    char field_144[4];

    void construct(Holder* holder);
};

void LocalBackpack::construct(Holder* holder)
{
    Holder local;
    func_0049d670(&local, holder);
    void* p = local.ptr;
    this->field_140 = *(void**)p;
    func_00402a60(this->field_144, (char*)p + 4);

    RefCounted* rc = (RefCounted*)local.ptr;
    if (rc != 0)
    {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1)
        {
            void (__stdcall *fn)(void*) = *(void (__stdcall**)(void*))((char*)rc->vptr + 4);
            fn(rc);
            if (_InterlockedExchangeAdd(&rc->weakRefCount, -1) == 1)
            {
                void (__stdcall *fn2)(void*) = *(void (__stdcall**)(void*))((char*)rc->vptr + 8);
                fn2(rc);
            }
        }
    }

    void* self = this;
    void* p120 = self ? (void*)((char*)self + 0x120) : 0;
    if (this->field_140)
    {
        func_00423240((char*)this->field_140 + 0x14, p120);
    }

    void* p124 = self ? (void*)((char*)self + 0x124) : 0;
    if (this->field_140)
    {
        func_00423240((char*)this->field_140 + 0x2c, p124);
    }

    void* p130 = self ? (void*)((char*)self + 0x130) : 0;
    if (this->field_140)
    {
        func_00423240((char*)this->field_140 + 0xe8, p130);
    }

    void* p134 = self ? (void*)((char*)self + 0x134) : 0;
    if (this->field_140)
    {
        func_00423240((char*)this->field_140 + 0x100, p134);
    }
}
