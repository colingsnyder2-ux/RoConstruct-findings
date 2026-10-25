// from server: 100% by colin
// roc 2008-06 005acee0  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005acee0
//
// 005acee0  56                   push esi
// 005acee1  8b742408             mov esi, dword ptr [esp + 8]
// 005acee5  57                   push edi
// 005acee6  56                   push esi
// 005acee7  8bf9                 mov edi, ecx
// 005acee9  e802d40500           call 0x60a2f0
// 005aceee  83c404               add esp, 4
// 005acef1  84c0                 test al, al
// 005acef3  7538                 jne 0x5acf2d
// 005acef5  8d4708               lea eax, [edi + 8]
// 005acef8  85c0                 test eax, eax
// 005acefa  7426                 je 0x5acf22
// 005acefc  8b0e                 mov ecx, dword ptr [esi]
// 005acefe  8908                 mov dword ptr [eax], ecx
// 005acf00  8b5604               mov edx, dword ptr [esi + 4]
// 005acf03  895004               mov dword ptr [eax + 4], edx
// 005acf06  8b4e08               mov ecx, dword ptr [esi + 8]
// 005acf09  894808               mov dword ptr [eax + 8], ecx
// 005acf0c  8b760c               mov esi, dword ptr [esi + 0xc]
// 005acf0f  89700c               mov dword ptr [eax + 0xc], esi
// 005acf12  85f6                 test esi, esi
// 005acf14  740c                 je 0x5acf22
// 005acf16  83c604               add esi, 4
// 005acf19  ba01000000           mov edx, 1
// 005acf1e  f00fc116             lock xadd dword ptr [esi], edx
// 005acf22  c707d4458300         mov dword ptr [edi], 0x8345d4
// 005acf28  5f                   pop edi
// 005acf29  5e                   pop esi
// 005acf2a  c20400               ret 4
// 005acf2d  c70700000000         mov dword ptr [edi], 0
// 005acf33  5f                   pop edi
// 005acf34  5e                   pop esi
// 005acf35  c20400               ret 4

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
