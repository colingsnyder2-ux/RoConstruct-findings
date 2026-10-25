// from server: 100% by colin
// roc 2008-06 0042b8b0  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b8b0
//
// 0042b8b0  56                   push esi
// 0042b8b1  8b742408             mov esi, dword ptr [esp + 8]
// 0042b8b5  57                   push edi
// 0042b8b6  56                   push esi
// 0042b8b7  8bf9                 mov edi, ecx
// 0042b8b9  e832ea1d00           call 0x60a2f0
// 0042b8be  83c404               add esp, 4
// 0042b8c1  84c0                 test al, al
// 0042b8c3  7538                 jne 0x42b8fd
// 0042b8c5  8d4708               lea eax, [edi + 8]
// 0042b8c8  85c0                 test eax, eax
// 0042b8ca  7426                 je 0x42b8f2
// 0042b8cc  8b0e                 mov ecx, dword ptr [esi]
// 0042b8ce  8908                 mov dword ptr [eax], ecx
// 0042b8d0  8b5604               mov edx, dword ptr [esi + 4]
// 0042b8d3  895004               mov dword ptr [eax + 4], edx
// 0042b8d6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0042b8d9  894808               mov dword ptr [eax + 8], ecx
// 0042b8dc  8b760c               mov esi, dword ptr [esi + 0xc]
// 0042b8df  89700c               mov dword ptr [eax + 0xc], esi
// 0042b8e2  85f6                 test esi, esi
// 0042b8e4  740c                 je 0x42b8f2
// 0042b8e6  83c604               add esi, 4
// 0042b8e9  ba01000000           mov edx, 1
// 0042b8ee  f00fc116             lock xadd dword ptr [esi], edx
// 0042b8f2  c70720068100         mov dword ptr [edi], 0x810620
// 0042b8f8  5f                   pop edi
// 0042b8f9  5e                   pop esi
// 0042b8fa  c20400               ret 4
// 0042b8fd  c70700000000         mov dword ptr [edi], 0
// 0042b903  5f                   pop edi
// 0042b904  5e                   pop esi
// 0042b905  c20400               ret 4

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
