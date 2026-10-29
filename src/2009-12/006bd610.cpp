// roc 2009-12 006bd610  unit: CPropGrid::UpdateItemsJob  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bd610
//
// 006bd610  56                   push esi
// 006bd611  57                   push edi
// 006bd612  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006bd616  57                   push edi
// 006bd617  8bf1                 mov esi, ecx
// 006bd619  ff15f0b69800         call dword ptr [0x98b6f0]
// 006bd61f  8b471c               mov eax, dword ptr [edi + 0x1c]
// 006bd622  89461c               mov dword ptr [esi + 0x1c], eax
// 006bd625  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006bd628  894e20               mov dword ptr [esi + 0x20], ecx
// 006bd62b  8b4724               mov eax, dword ptr [edi + 0x24]
// 006bd62e  894624               mov dword ptr [esi + 0x24], eax
// 006bd631  85c0                 test eax, eax
// 006bd633  740c                 je 0x6bd641
// 006bd635  83c004               add eax, 4
// 006bd638  ba01000000           mov edx, 1
// 006bd63d  f00fc110             lock xadd dword ptr [eax], edx
// 006bd641  8b4728               mov eax, dword ptr [edi + 0x28]
// 006bd644  894628               mov dword ptr [esi + 0x28], eax
// 006bd647  8b7f2c               mov edi, dword ptr [edi + 0x2c]
// 006bd64a  897e2c               mov dword ptr [esi + 0x2c], edi
// 006bd64d  85ff                 test edi, edi
// 006bd64f  740c                 je 0x6bd65d
// 006bd651  83c704               add edi, 4
// 006bd654  b901000000           mov ecx, 1
// 006bd659  f00fc10f             lock xadd dword ptr [edi], ecx
// 006bd65d  5f                   pop edi
// 006bd65e  8bc6                 mov eax, esi
// 006bd660  5e                   pop esi
// 006bd661  c20400               ret 4
// copied from an identical function in another client (function ??0S@@QAE@ABU0@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct String {
    char storage[28];
};

typedef void (__thiscall *StringCopy)(String*, const String&);
extern StringCopy copyString;

struct Control {
    long reserved;
    volatile long references;
};

struct S : String {
    long value;
    void* first;
    Control* firstControl;
    void* second;
    Control* secondControl;

    S(const S&);
};

S::S(const S& source)
{
    copyString(this, source);
    value = source.value;
    first = source.first;
    firstControl = source.firstControl;
    if (firstControl) {
        volatile long* count = &firstControl->references;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(count, 1);
    }

    second = source.second;
    Control* control = source.secondControl;
    secondControl = control;
    if (control) {
        volatile long* count = &control->references;
        _ReadWriteBarrier();
        _InterlockedIncrement(count);
    }
}