// roc 2009-06 005da170  unit: RBX::ContentProvider::HashApprovalDictionary::VValue::?$sp_counted_impl_p  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005da170
//
// 005da170  56                   push esi
// 005da171  57                   push edi
// 005da172  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005da176  57                   push edi
// 005da177  8bf1                 mov esi, ecx
// 005da179  ff15b8e48900         call dword ptr [0x89e4b8]
// 005da17f  8b471c               mov eax, dword ptr [edi + 0x1c]
// 005da182  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005da186  89461c               mov dword ptr [esi + 0x1c], eax
// 005da189  8b11                 mov edx, dword ptr [ecx]
// 005da18b  895620               mov dword ptr [esi + 0x20], edx
// 005da18e  8b4104               mov eax, dword ptr [ecx + 4]
// 005da191  894624               mov dword ptr [esi + 0x24], eax
// 005da194  85c0                 test eax, eax
// 005da196  740c                 je 0x5da1a4
// 005da198  83c004               add eax, 4
// 005da19b  ba01000000           mov edx, 1
// 005da1a0  f00fc110             lock xadd dword ptr [eax], edx
// 005da1a4  8b4108               mov eax, dword ptr [ecx + 8]
// 005da1a7  894628               mov dword ptr [esi + 0x28], eax
// 005da1aa  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005da1ad  894e2c               mov dword ptr [esi + 0x2c], ecx
// 005da1b0  85c9                 test ecx, ecx
// 005da1b2  740c                 je 0x5da1c0
// 005da1b4  83c104               add ecx, 4
// 005da1b7  ba01000000           mov edx, 1
// 005da1bc  f00fc111             lock xadd dword ptr [ecx], edx
// 005da1c0  5f                   pop edi
// 005da1c1  8bc6                 mov eax, esi
// 005da1c3  5e                   pop esi
// 005da1c4  c20800               ret 8
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