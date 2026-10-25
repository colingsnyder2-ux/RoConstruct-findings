// from server: 100% by colin
// roc 2008-06 0048e3b0  unit: RBX::Network::VPlayer::?$SignalDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e3b0
//
// 0048e3b0  56                   push esi
// 0048e3b1  8b742408             mov esi, dword ptr [esp + 8]
// 0048e3b5  57                   push edi
// 0048e3b6  56                   push esi
// 0048e3b7  8bf9                 mov edi, ecx
// 0048e3b9  e832bf1700           call 0x60a2f0
// 0048e3be  83c404               add esp, 4
// 0048e3c1  84c0                 test al, al
// 0048e3c3  7538                 jne 0x48e3fd
// 0048e3c5  8d4708               lea eax, [edi + 8]
// 0048e3c8  85c0                 test eax, eax
// 0048e3ca  7426                 je 0x48e3f2
// 0048e3cc  8b0e                 mov ecx, dword ptr [esi]
// 0048e3ce  8908                 mov dword ptr [eax], ecx
// 0048e3d0  8b5604               mov edx, dword ptr [esi + 4]
// 0048e3d3  895004               mov dword ptr [eax + 4], edx
// 0048e3d6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0048e3d9  894808               mov dword ptr [eax + 8], ecx
// 0048e3dc  8b760c               mov esi, dword ptr [esi + 0xc]
// 0048e3df  89700c               mov dword ptr [eax + 0xc], esi
// 0048e3e2  85f6                 test esi, esi
// 0048e3e4  740c                 je 0x48e3f2
// 0048e3e6  83c604               add esi, 4
// 0048e3e9  ba01000000           mov edx, 1
// 0048e3ee  f00fc116             lock xadd dword ptr [esi], edx
// 0048e3f2  c70754178200         mov dword ptr [edi], 0x821754
// 0048e3f8  5f                   pop edi
// 0048e3f9  5e                   pop esi
// 0048e3fa  c20400               ret 4
// 0048e3fd  c70700000000         mov dword ptr [edi], 0
// 0048e403  5f                   pop edi
// 0048e404  5e                   pop esi
// 0048e405  c20400               ret 4

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

bool __cdecl func_0060a2f0();
extern unsigned char descriptor;

struct RefCount
{
    long reserved;
    volatile long count;
};

struct Buffer
{
    unsigned long a;
    unsigned long b;
    unsigned long c;
    RefCount* owner;
};

struct S
{
    unsigned long tag;
    unsigned long reserved;
    Buffer buffer;

    void f(const Buffer& source);
};

void S::f(const Buffer& source)
{
    typedef bool (__cdecl *Predicate)(const Buffer&);

    if (!reinterpret_cast<Predicate>(&func_0060a2f0)(source))
    {
        Buffer* destination = &buffer;
        if (destination)
        {
            destination->a = source.a;
            destination->b = source.b;
            destination->c = source.c;
            RefCount* owner = source.owner;
            destination->owner = owner;
            if (owner)
            {
                volatile long* count = &owner->count;
                _InterlockedIncrement(count);
            }
        }
        tag = reinterpret_cast<unsigned long>(&descriptor);
    }
    else
    {
        tag = 0;
    }
}
