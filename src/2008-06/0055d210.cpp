// from server: 100% by colin
// roc 2008-06 0055d210  unit: RBX::MD5HasherImpl  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055d210
//
// 0055d210  56                   push esi
// 0055d211  57                   push edi
// 0055d212  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055d216  57                   push edi
// 0055d217  8bf1                 mov esi, ecx
// 0055d219  ff155c248000         call dword ptr [0x80245c]
// 0055d21f  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0055d222  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055d226  89461c               mov dword ptr [esi + 0x1c], eax
// 0055d229  8b11                 mov edx, dword ptr [ecx]
// 0055d22b  895620               mov dword ptr [esi + 0x20], edx
// 0055d22e  8b4104               mov eax, dword ptr [ecx + 4]
// 0055d231  894624               mov dword ptr [esi + 0x24], eax
// 0055d234  85c0                 test eax, eax
// 0055d236  740c                 je 0x55d244
// 0055d238  83c004               add eax, 4
// 0055d23b  ba01000000           mov edx, 1
// 0055d240  f00fc110             lock xadd dword ptr [eax], edx
// 0055d244  8b4108               mov eax, dword ptr [ecx + 8]
// 0055d247  894628               mov dword ptr [esi + 0x28], eax
// 0055d24a  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055d24d  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0055d250  85c9                 test ecx, ecx
// 0055d252  740c                 je 0x55d260
// 0055d254  83c104               add ecx, 4
// 0055d257  ba01000000           mov edx, 1
// 0055d25c  f00fc111             lock xadd dword ptr [ecx], edx
// 0055d260  5f                   pop edi
// 0055d261  8bc6                 mov eax, esi
// 0055d263  5e                   pop esi
// 0055d264  c20800               ret 8

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
