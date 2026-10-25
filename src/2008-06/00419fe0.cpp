// from server: 100% by colin
// roc 2008-06 00419fe0  unit: PAVDHTMLWindowService::?$sp_counted_impl_pd  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00419fe0
//
// 00419fe0  56                   push esi
// 00419fe1  8b742408             mov esi, dword ptr [esp + 8]
// 00419fe5  57                   push edi
// 00419fe6  56                   push esi
// 00419fe7  8bf9                 mov edi, ecx
// 00419fe9  e802031f00           call 0x60a2f0
// 00419fee  83c404               add esp, 4
// 00419ff1  84c0                 test al, al
// 00419ff3  7538                 jne 0x41a02d
// 00419ff5  8d4708               lea eax, [edi + 8]
// 00419ff8  85c0                 test eax, eax
// 00419ffa  7426                 je 0x41a022
// 00419ffc  8b0e                 mov ecx, dword ptr [esi]
// 00419ffe  8908                 mov dword ptr [eax], ecx
// 0041a000  8b5604               mov edx, dword ptr [esi + 4]
// 0041a003  895004               mov dword ptr [eax + 4], edx
// 0041a006  8b4e08               mov ecx, dword ptr [esi + 8]
// 0041a009  894808               mov dword ptr [eax + 8], ecx
// 0041a00c  8b760c               mov esi, dword ptr [esi + 0xc]
// 0041a00f  89700c               mov dword ptr [eax + 0xc], esi
// 0041a012  85f6                 test esi, esi
// 0041a014  740c                 je 0x41a022
// 0041a016  83c604               add esi, 4
// 0041a019  ba01000000           mov edx, 1
// 0041a01e  f00fc116             lock xadd dword ptr [esi], edx
// 0041a022  c707c0ec8000         mov dword ptr [edi], 0x80ecc0
// 0041a028  5f                   pop edi
// 0041a029  5e                   pop esi
// 0041a02a  c20400               ret 4
// 0041a02d  c70700000000         mov dword ptr [edi], 0
// 0041a033  5f                   pop edi
// 0041a034  5e                   pop esi
// 0041a035  c20400               ret 4

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Counter {
    long reserved;
    volatile long references;
};

struct Data {
    unsigned long first;
    unsigned long second;
    unsigned long third;
    Counter* counter;
};

extern bool __cdecl func_0060a2f0(const Data*);
extern char target_0080ecc0;

struct S {
    void* tag;
    unsigned long reserved;
    Data data;

    void assign(const Data* source);
};

void S::assign(const Data* source)
{
    if (!func_0060a2f0(source)) {
        Data* destination = &data;
        if (destination) {
            destination->first = source->first;
            destination->second = source->second;
            destination->third = source->third;
            Counter* counter = source->counter;
            destination->counter = counter;
            if (counter)
                _InterlockedIncrement(&counter->references);
        }
        tag = &target_0080ecc0;
    } else {
        tag = 0;
    }
}
