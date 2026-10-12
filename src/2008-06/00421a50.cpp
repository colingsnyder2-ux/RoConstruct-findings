// from server: 50% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CInstanceExplorer
{
    char pad0[0x378];
    char field378[0x24];
    char field39c[0x24];
    int field3c0;
    int field3c4;
    char field3c8;
    char pad3c9[3];

    void sub_421A50(int arg);
};

struct Helper1
{
    void sub_5E5A80(void* p);
};

struct Helper2
{
    void sub_4218A0(void* p);
};

struct Helper3
{
    void sub_4025B0(void* p);
};

struct VTable1
{
    char pad0[0x194];
    void* (__thiscall* fn194)(CInstanceExplorer*);
};

struct VTable2
{
    char pad0[0x160];
    void (__thiscall* fn160)(void*);
};

struct VTable3
{
    char pad0[4];
    void (__thiscall* fn4)(void*);
    void (__thiscall* fn8)(void*);
};

struct RefCounted
{
    VTable3* vtable;
    volatile long refcount1;
    volatile long refcount2;
};

struct FactoryResult
{
    RefCounted* ptr;
};

extern "C" void* __cdecl sub_6D7850(void*);
extern "C" FactoryResult* __cdecl sub_618A40(void*, void*);

void CInstanceExplorer::sub_421A50(int arg)
{
    char saved = field3c8;
    field3c8 = 1;

    if (field3c0 != 0)
    {
        Helper1* h1 = (Helper1*)((char*)field3c0 + 0x64);
        h1->sub_5E5A80(this ? (void*)((char*)this + 0x378) : 0);
    }

    if (field3c0 != 0)
    {
        Helper1* h2 = (Helper1*)((char*)field3c0 + 0x84);
        h2->sub_5E5A80(this ? (void*)((char*)this + 0x39c) : 0);
    }

    VTable1* vt = *(VTable1**)this;
    void* obj = vt->fn194(this);
    sub_6D7850(*(void**)((char*)obj + 0xe8));

    FactoryResult* fr = sub_618A40((void*)arg, (void*)&field3c4);
    field3c0 = (int)fr->ptr;

    if (fr->ptr != 0)
    {
        RefCounted* rc = fr->ptr;
        if (_InterlockedExchangeAdd(&rc->refcount1, -1) == 1)
        {
            VTable3* v = rc->vtable;
            v->fn4(rc);
        }
        if (_InterlockedExchangeAdd(&rc->refcount2, -1) == 1)
        {
            VTable3* v = rc->vtable;
            v->fn8(rc);
        }
    }

    if (field3c0 != 0)
    {
        Helper2* h3 = (Helper2*)((char*)field3c0 + 0x64);
        h3->sub_4218A0((void*)((char*)this + 0x378));
    }

    if (field3c0 != 0)
    {
        Helper2* h4 = (Helper2*)((char*)field3c0 + 0x84);
        h4->sub_4218A0((void*)((char*)this + 0x39c));
    }

    VTable1* vt2 = *(VTable1**)this;
    void* obj2 = vt2->fn194(this);
    VTable2* vt3 = *(VTable2**)obj2;
    vt3->fn160(obj2);

    field3c8 = saved;
}
