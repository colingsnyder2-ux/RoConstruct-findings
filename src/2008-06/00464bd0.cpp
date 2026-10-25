// from server: 100% by king_originala
// roc 2008-06 00464bd0  unit: RBX::VRunService::?$MarshaledListener  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464bd0
//
// 00464bd0  6aff                 push -1
// 00464bd2  6898327c00           push 0x7c3298
// 00464bd7  64a100000000         mov eax, dword ptr fs:[0]
// 00464bdd  50                   push eax
// 00464bde  64892500000000       mov dword ptr fs:[0], esp
// 00464be5  51                   push ecx
// 00464be6  56                   push esi
// 00464be7  57                   push edi
// 00464be8  8bf9                 mov edi, ecx
// 00464bea  897c2408             mov dword ptr [esp + 8], edi
// 00464bee  c70790b38100         mov dword ptr [edi], 0x81b390
// 00464bf4  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00464bf7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00464bff  85c9                 test ecx, ecx
// 00464c01  7406                 je 0x464c09
// 00464c03  57                   push edi
// 00464c04  e8a728ffff           call 0x4574b0
// 00464c09  8b7708               mov esi, dword ptr [edi + 8]
// 00464c0c  85f6                 test esi, esi
// 00464c0e  742a                 je 0x464c3a
// 00464c10  8d4604               lea eax, [esi + 4]
// 00464c13  83c9ff               or ecx, 0xffffffff
// 00464c16  f00fc108             lock xadd dword ptr [eax], ecx
// 00464c1a  751e                 jne 0x464c3a
// 00464c1c  8b16                 mov edx, dword ptr [esi]
// 00464c1e  8b4204               mov eax, dword ptr [edx + 4]
// 00464c21  8bce                 mov ecx, esi
// 00464c23  ffd0                 call eax
// 00464c25  8d4e08               lea ecx, [esi + 8]
// 00464c28  83caff               or edx, 0xffffffff
// 00464c2b  f00fc111             lock xadd dword ptr [ecx], edx
// 00464c2f  7509                 jne 0x464c3a
// 00464c31  8b06                 mov eax, dword ptr [esi]
// 00464c33  8b5008               mov edx, dword ptr [eax + 8]
// 00464c36  8bce                 mov ecx, esi
// 00464c38  ffd2                 call edx
// 00464c3a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00464c3e  c70760f88000         mov dword ptr [edi], 0x80f860
// 00464c44  5f                   pop edi
// 00464c45  5e                   pop esi
// 00464c46  64890d00000000       mov dword ptr fs:[0], ecx
// 00464c4d  83c410               add esp, 0x10
// 00464c50  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Listener;

struct Owner
{
    void remove(Listener *);
};

struct Count
{
    virtual ~Count();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void *object;
    Count *count;
};

struct Base
{
    virtual ~Base();
};

__forceinline Base::~Base()
{
}

struct Listener : Base
{
    Shared shared;
    Owner *owner;

    virtual ~Listener();
};

Listener::~Listener()
{
    if (owner)
        owner->remove(this);

    Count *p = shared.count;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}
