// from server: 87% by colin
// from server: 85% by king_originala
// roc 2008-06 005e9040  unit: RBX::PhysicsService  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9040
//
// 005e9040  64a100000000         mov eax, dword ptr fs:[0]
// 005e9046  6aff                 push -1
// 005e9048  6868917d00           push 0x7d9168
// 005e904d  50                   push eax
// 005e904e  64892500000000       mov dword ptr fs:[0], esp
// 005e9055  83ec08               sub esp, 8
// 005e9058  56                   push esi
// 005e9059  8bf1                 mov esi, ecx
// 005e905b  8d44241c             lea eax, [esp + 0x1c]
// 005e905f  50                   push eax
// 005e9060  8d8e38010000         lea ecx, [esi + 0x138]
// 005e9066  e8f50e0000           call 0x5e9f60
// 005e906b  85f6                 test esi, esi
// 005e906d  7405                 je 0x5e9074
// 005e906f  83c614               add esi, 0x14
// 005e9072  eb02                 jmp 0x5e9076
// 005e9074  33f6                 xor esi, esi
// 005e9076  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e907a  51                   push ecx
// 005e907b  8d542408             lea edx, [esp + 8]
// 005e907f  52                   push edx
// 005e9080  e8bbf90200           call 0x618a40
// 005e9085  8b10                 mov edx, dword ptr [eax]
// 005e9087  8bcc                 mov ecx, esp
// 005e9089  8911                 mov dword ptr [ecx], edx
// 005e908b  8b4004               mov eax, dword ptr [eax + 4]
// 005e908e  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005e9096  89642424             mov dword ptr [esp + 0x24], esp
// 005e909a  894104               mov dword ptr [ecx + 4], eax
// 005e909d  85c0                 test eax, eax
// 005e909f  740c                 je 0x5e90ad
// 005e90a1  83c004               add eax, 4
// 005e90a4  b901000000           mov ecx, 1
// 005e90a9  f00fc108             lock xadd dword ptr [eax], ecx
// 005e90ad  56                   push esi
// 005e90ae  b920ac9700           mov ecx, 0x97ac20
// 005e90b3  e84841ebff           call 0x49d200
// 005e90b8  8b742408             mov esi, dword ptr [esp + 8]
// 005e90bc  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e90c4  85f6                 test esi, esi
// 005e90c6  742a                 je 0x5e90f2
// 005e90c8  8d5604               lea edx, [esi + 4]
// 005e90cb  83c8ff               or eax, 0xffffffff
// 005e90ce  f00fc102             lock xadd dword ptr [edx], eax
// 005e90d2  751e                 jne 0x5e90f2
// 005e90d4  8b16                 mov edx, dword ptr [esi]
// 005e90d6  8b4204               mov eax, dword ptr [edx + 4]
// 005e90d9  8bce                 mov ecx, esi
// 005e90db  ffd0                 call eax
// 005e90dd  8d4e08               lea ecx, [esi + 8]
// 005e90e0  83caff               or edx, 0xffffffff
// 005e90e3  f00fc111             lock xadd dword ptr [ecx], edx
// 005e90e7  7509                 jne 0x5e90f2
// 005e90e9  8b06                 mov eax, dword ptr [esi]
// 005e90eb  8b5008               mov edx, dword ptr [eax + 8]
// 005e90ee  8bce                 mov ecx, esi
// 005e90f0  ffd2                 call edx
// 005e90f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e90f6  64890d00000000       mov dword ptr fs:[0], ecx
// 005e90fd  5e                   pop esi
// 005e90fe  83c414               add esp, 0x14
// 005e9101  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct FactoryShared {
    void* object;
    Control* control;

    ~FactoryShared();
};

struct Shared {
    void* object;
    Control* control;

    Shared(const FactoryShared&);
    ~Shared();
};

__forceinline FactoryShared::~FactoryShared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) - 1 == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) - 1 == 0)
            p->destroy();
    }
}

__forceinline Shared::Shared(const FactoryShared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) - 1 == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) - 1 == 0)
            p->destroy();
    }
}

FactoryShared __cdecl makeShared(void*);

struct Event {
    void invoke(void*, Shared);
};

extern Event event;

struct Collection {
    void remove(void**);
};

struct S {
    char padding[0x138];
    Collection collection;

    void f(void*);
};

void S::f(void* value)
{
    collection.remove(&value);
    void* owner = this ? reinterpret_cast<char*>(this) + 0x14 : 0;
    event.invoke(owner, makeShared(value));
}
