// roc 2009-12 006bd670  unit: CPropGrid::UpdateItemsJob  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bd670
//
// 006bd670  56                   push esi
// 006bd671  57                   push edi
// 006bd672  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006bd676  57                   push edi
// 006bd677  8bf1                 mov esi, ecx
// 006bd679  ff15f0b69800         call dword ptr [0x98b6f0]
// 006bd67f  8b471c               mov eax, dword ptr [edi + 0x1c]
// 006bd682  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006bd686  89461c               mov dword ptr [esi + 0x1c], eax
// 006bd689  8b11                 mov edx, dword ptr [ecx]
// 006bd68b  895620               mov dword ptr [esi + 0x20], edx
// 006bd68e  8b4104               mov eax, dword ptr [ecx + 4]
// 006bd691  894624               mov dword ptr [esi + 0x24], eax
// 006bd694  85c0                 test eax, eax
// 006bd696  740c                 je 0x6bd6a4
// 006bd698  83c004               add eax, 4
// 006bd69b  ba01000000           mov edx, 1
// 006bd6a0  f00fc110             lock xadd dword ptr [eax], edx
// 006bd6a4  8b4108               mov eax, dword ptr [ecx + 8]
// 006bd6a7  894628               mov dword ptr [esi + 0x28], eax
// 006bd6aa  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006bd6ad  894e2c               mov dword ptr [esi + 0x2c], ecx
// 006bd6b0  85c9                 test ecx, ecx
// 006bd6b2  740c                 je 0x6bd6c0
// 006bd6b4  83c104               add ecx, 4
// 006bd6b7  ba01000000           mov edx, 1
// 006bd6bc  f00fc111             lock xadd dword ptr [ecx], edx
// 006bd6c0  5f                   pop edi
// 006bd6c1  8bc6                 mov eax, esi
// 006bd6c3  5e                   pop esi
// 006bd6c4  c20800               ret 8
// copied from an identical function in another client (function ??0S@@QAE@ABU0@ABUPair@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct RefCount {
    long reserved;
    volatile long count;
};

struct Pair {
    void* first;
    RefCount* firstCount;
    void* second;
    RefCount* secondCount;
};

struct S {
    char stringData[28];
    long value;
    void* first;
    RefCount* firstCount;
    void* second;
    RefCount* secondCount;

    S(const S& source, const Pair& pair);
};

extern void (__thiscall* string_copy)(void*, const void*);

S::S(const S& source, const Pair& pair)
{
    string_copy(this, &source);
    value = source.value;
    first = pair.first;
    firstCount = pair.firstCount;
    if (firstCount) {
        volatile long* count = &firstCount->count;
        _ReadWriteBarrier();
        _InterlockedIncrement(count);
    }
    second = pair.second;
    secondCount = pair.secondCount;
    if (secondCount) {
        RefCount* counter = secondCount;
        _ReadWriteBarrier();
        volatile long* count = &counter->count;
        _ReadWriteBarrier();
        _InterlockedIncrement(count);
    }
}